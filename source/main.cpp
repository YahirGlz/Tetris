#include <iostream>
#include "tetris.hpp"

int main(){
    Tetris t;
    for(uint8_t i=0; i<Constants::BOARD_HEIGTH; i++){
        for(uint8_t j=0; j<Constants::BOARD_WIDTH; j++){
            std::cout << static_cast<int>(t.getCelda(i, j)) << " "; 
        }
        std::cout << "\n";
    }
    return 0;
}   
    
