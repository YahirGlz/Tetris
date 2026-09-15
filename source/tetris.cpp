#include "tetris.hpp"

Tetris::Tetris(){
    puntos = 0; 
    for(uint8_t i=0; i<Constants::BOARD_HEIGTH; i++){
        for(uint8_t j=0; j<Constants::BOARD_WIDTH; j++){
            board[i][j] = Constants::EMPTY; 
        }
    }
}

uint8_t Tetris::getCelda(uint8_t i, uint8_t j) const{
    return board[i][j];
}