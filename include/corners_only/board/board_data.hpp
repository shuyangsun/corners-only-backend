//
// Created by shuyang on 7/18/21.
//

#ifndef CORNERSONLY_BOARD_DATA_HPP
#define CORNERSONLY_BOARD_DATA_HPP

#include <vector>
#include <stdexcept>

#include "board_dim.hpp"

using CellStat = unsigned int;

class Board {
private:
    BoardDim2D dim;
    std::vector<CellStat> data;

    inline size_t _GetIdx(size_t const x, size_t const y) const {
        // Row major
        if (x >= dim.GetWidth() || y >= dim.GetHeight()) {
            throw std::out_of_range("Board cell lookup out of range.");
        }
        return y * dim.GetWidth() + x;
    }
public:
    Board() = default;
    ~Board() = default;

    Board(size_t width, size_t height) {
        const BoardDim2D dimRes {width, height};
        this->dim = dimRes;
        this->data = std::vector<CellStat>(dimRes.GetArea(), 0);
    }

    inline BoardDim2D GetDim() const {
        return dim;
    }

    inline CellStat GetCellStat(size_t const x, size_t const y) const {
        return data[_GetIdx(x, y)];
    }

    inline void SetCellStat(size_t const x, size_t const y, CellStat const new_stat) {
        data[_GetIdx(x, y)] = new_stat;
    }
};

#endif //CORNERSONLY_BOARD_DATA_HPP
