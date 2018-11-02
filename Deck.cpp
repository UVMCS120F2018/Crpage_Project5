//
// Created by Cecily Page on 11/1/18.
//

#include "Deck.h"


Deck::Deck() {
    for(int i: card_values){
            cards.emplace_back(i, HEARTS);
            cards.emplace_back(i, CLUBS);
            cards.emplace_back(i, DIAMONDS);
            cards.emplace_back(i, SPADES);
        }
}

bool Deck::is_complete() {
    return cards.size() == 52;
}

void Deck::shuffle() {

    for(int i=0 ; i < cards.size(); i++){
        int temp = static_cast<int>(rand() % cards.size() - 1);
        iter_swap(cards.begin() + i, cards.begin() + temp);
    }

}

vector<vector<Card>> Deck::deal() {
    shuffle();
    vector<Card> p1;
    vector<Card> p2;
    vector<Card> p3;
    vector<Card> p4;

    for(int i = 0; i<13; i++){
        p1.push_back(cards[i]);
        p2.push_back(cards[i]);
        p3.push_back(cards[i]);
        p4.push_back(cards[i]);
    }
    vector<vector<Card>> dealt = {p1 ,p2, p3, p4};
    return dealt;
}

