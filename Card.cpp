//
// Created by Cecily Page on 11/1/18.
//

#include "Card.h"

vector<int> Card_Games::card_values {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

Card::Card(int value, Card_Games::Suit suit) {
    this -> value = value;
    face_card = value > 10 or value ==1;
    this -> suit = suit;
    trump = this -> suit == Card_Games::Suit::HEARTS;
}

Card_Games::Suit Card::get_suit() {
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

void Card::print() {
    string temp;
    if(suit == HEARTS){
        temp = "Hearts";
    }if(suit == SPADES){
        temp = "Spades";
    }if(suit == DIAMONDS){
        temp = "Diamonds";
    }if(suit == CLUBS){
        temp = "Clubs";
    }

    if(!is_face_card()){
        cout << "The " << value << " of " << temp << endl;
    }else{
        string v;
        if(value == 11){
            v = "Jack";
        }else if (value == 12){
            v = "Queen";
        }else if(value == 13){
            v = "King";
        }else if (value == 1){
            v = "Ace";
        }

        cout << "The " << v << " of " << temp << endl;
    }



}

int operator + (Card &c1, Card &c2) {
    int total =  c1.get_value() + c2.get_value();
    return total;
}

bool operator < (Card &c1, Card &c2) {
    if (c1.is_trump() and (not c2.is_trump())) {
        return true;
    } else if (c2.is_trump() and (not c1.is_trump())) {
        return false;
    } else {
        if (c1.get_value() == c2.get_value()) {
            return c1.get_suit() < c2.get_suit();
        }else{
            return c1.get_value() < c2.get_value();
        };
    }
}




bool operator > (Card &c1, Card &c2){
    if (c1.is_trump() and (not c2.is_trump())){
        return false;
    }else if (c2.is_trump() and (not c1.is_trump())){
        return true;
    }else{
        if(c1.get_value() == c2.get_value()){
            return c1.get_suit() < c2.get_suit();
        }else{
            return c2.get_value() > c2.get_value();
        };
    }
}

bool operator == (Card &c1, Card &c2){
    return ((c1.get_suit() == c2.get_suit()) and (c1.get_value() == c2.get_value()));
}