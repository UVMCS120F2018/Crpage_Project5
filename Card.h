//
// Created by Cecily Page on 11/1/18.
//

#ifndef CRPAGE_PROJECT5_CARD_H
#define CRPAGE_PROJECT5_CARD_H

#include <string>
#include <vector>
using namespace std;

namespace Card_Games{
    enum Suit{HEARTS, CLUBS, DIAMONDS, SPADES};
    vector<int> card_values = {1,2,3,4,5,6,7,8,9,10,11,12,13};
}

using namespace Card_Games;


class Card {
protected:
    int value;
    bool face_card;
    bool trump;
    Suit suit;

public:
    Card(int value, Suit suit);
    int get_value();
    bool is_face_card();
    bool is_trump();
    Suit get_suit();

    friend bool operator < (Card &c1, Card &c2);
    friend bool operator > (Card &c1, Card &c2);
    friend int operator + (Card &c1, Card &c2);
};


#endif //CRPAGE_PROJECT5_CARD_H
