#include "Snack.h"
#include "Deck.h"
#include "Dice.h"

int main() {
    Cheezits snack = Cheezits();
    snack.eat();
    Deck attempt = Deck();
    attempt.shuffle();
    attempt.shuffle();
    vector<vector<Card>> hands = attempt.deal();
    vector<Card> player1 = hands[1];



    for (auto &i : player1) {
        i.print();
        }
}
