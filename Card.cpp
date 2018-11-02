//
// Created by Cecily Page on 11/1/18.
//

#include "Card.h"

Card::Card(int value, Suit suit) {
    this -> value = value;
    face_card = value > 10;
    trump = this -> suit == HEARTS;
}

Suit Card::get_suit() {
    return suit;
}

int Card::get_value() {
    return value;
}

bool Card::is_face_card() {
    return face_card;
}

bool Card::is_trump() {
    return trump;
}

int operator + (Card &c1, Card &c2) {
    int total =  c1.get_value() + c2.get_value();
    return total;
}

bool operator < (Card &c1, Card &c2) {
    if (c1.is_trump() and (not c2.is_trump())){
        return true;
    }else if (c2.is_trump() and (not c1.is_trump())){
        return false;
    }else{
        return c1.get_value() < c2.get_value();
    }

}

bool operator > (Card &c1, Card &c2){
    if (c1.is_trump() and (not c2.is_trump())){
        return false;
    }else if (c2.is_trump() and (not c1.is_trump())){
        return true;
    }else{
        return c1.get_value() > c2.get_value();
    }
}

