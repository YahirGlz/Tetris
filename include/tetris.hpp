#ifndef TETRIS_HPP
#define TETRIS_HPP

#include <cstdint>
#include "constants.hpp"

class Tetris{
private:
    uint64_t puntos;
    uint8_t  board[Constants::BOARD_HEIGTH][Constants::BOARD_WIDTH];
public:
    Tetris();

    uint8_t getCelda(uint8_t i, uint8_t j) const;
};

#endif