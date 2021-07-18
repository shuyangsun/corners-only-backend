//
// Created by Shuyang Sun on 7/18/21.
//

#ifndef CORNERSONLY_BOARD_DIM_HPP
#define CORNERSONLY_BOARD_DIM_HPP

#include <vector>

class BoardDim2D {
private:
    size_t width = 0, height = 0;
public:
    BoardDim2D() = default;
    ~BoardDim2D() = default;

    BoardDim2D(size_t width, size_t height) {
        this->width = width;
        this->height = height;
    }

    inline size_t GetWidth() const {
        return width;
    }

    inline size_t GetHeight() const {
        return height;
    }

    inline size_t GetArea() const {
        return width * height;
    }
};

#endif //CORNERSONLY_BOARD_DIM_HPP
