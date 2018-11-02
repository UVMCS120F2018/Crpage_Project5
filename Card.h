//
// Created by Cecily Page on 11/1/18.
//

#ifndef CRPAGE_PROJECT5_CARD_H
#define CRPAGE_PROJECT5_CARD_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

namespace Card_Games{
    enum Suit{HEARTS, CLUBS, DIAMONDS, SPADES};
    extern vector<int> card_values;
}

using namespace Card_Games;


class Card {
protected:
    int value;
    bool face_card;
    bool trump;
    Card_Games::Suit suit;

public:
    Card(int value, Card_Games::Suit suit);
    int get_value();
    bool is_face_card();
    bool is_trump();
    Card_Games::Suit get_suit();
    void print();

    friend bool operator < (Card &c1, Card &c2);
    friend bool operator > (Card &c1, Card &c2);
    friend int operator + (Card &c1, Card &c2);
};


#endif //CRPAGE_PROJECT5_CARD_H
