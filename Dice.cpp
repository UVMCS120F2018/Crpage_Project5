//
// Created by Cecily Page on 11/2/18.
//

#include "Dice.h"
#include <algorithm>

Dice::Dice(int faces, int number) {
    this -> faces = faces;
    this -> number = number;
}

int Dice::roll() {
    int total = 0;
    for(int i=0; i<number; i++){
        total = total + rand()%6;
    }
    return total;
}