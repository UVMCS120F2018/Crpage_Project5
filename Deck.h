//
// Created by Cecily Page on 11/1/18.
//

#ifndef CRPAGE_PROJECT5_DECK_H
#define CRPAGE_PROJECT5_DECK_H

#include "Card.h"
#include <algorithm>

using namespace Card_Games;

class Deck {

    vector<Card> cards;
    bool complete;

public:
    Deck();

    bool is_complete();

    void shuffle();

    vector<vector<Card>> deal();

};


#endif //CRPAGE_PROJECT5_DECK_H
