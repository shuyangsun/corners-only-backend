#include <iostream>
#include "../include/corners_only/board/board_data.hpp"

int main(int const argc, char** const argv) {
    Board board {2, 8};
    std::cout << board.GetDim().GetArea() << std::endl;
    board.SetCellStat(1, 3, 1);
    std::cout << board.GetCellStat(1, 3) << std::endl;
    std::cout << board.GetCellStat(1, 2) << std::endl;
}