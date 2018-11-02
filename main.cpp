#include "Snack.h"
#include "Deck.h"
#include "Dice.h"
int computer = 0;
int player = 0;


void game_options(){

    cout << "Here's what you can do:" << endl;
    cout << "a) Eat A Snack" << endl;
    cout << "b) Replenish Snacks" << endl;
    cout << "c) Play Cards" << endl;
    cout << "d) Roll Dice" << endl;
}


void roll_dice(Dice &die){
    int total = die.roll();
    if(total == 7){
        player = player + 24;
        cout << "You Won!" << endl;
    }else{
        computer = computer + 40;
        cout << "I won!" << endl;
    }
}


void eat_snack(Cheezits &cheez, Pretzels &pretzels, GummyWorms &gummy, Chips &chip) {
    cout << "What snack would you like to eat?" << endl;
    cout << "a) Cheezits" << endl;
    cout << "b) Gummy Worms" << endl;
    cout << "c) Prezels" << endl;
    cout << "d) Chips" << endl;


    bool nope = true;
    while(nope){
        char c;
        cin >> c;
        nope = false;

        switch(c){
            case 'a':
                cheez.eat();
                break;
            case 'b':
                pretzels.eat();
                break;
            case 'c':
                gummy.eat();
                break;
            case 'd':
                chip.eat();
                break;
            default:
                cout << "That's not an option... Try again... but better."<< endl;
                nope = false;
        }
        cin.clear();
    }
    player = player +15;
    computer = computer -10;

}

void play_cards(int round, vector<vector<Card>> &hands){


    vector<Card> hand1 = hands[0];
    vector<Card> hand2 = hands[1];
    vector<Card> hand3 = hands[2];
    vector<Card> hand4 = hands[3];

    Card c1 = hand1[round];
    Card c2 = hand1[round];
    Card c3 = hand1[round];
    Card c4 = hand1[round];

    vector<Card> cards = {c1,c2,c3,c4};

    Card biggest = cards[0];
    for(int i = 1; i<3 ;i++){
        if(biggest < cards[i]){
            biggest = cards[i];
        }
    }

    if(c1 == biggest){
        player = player + 54;
        cout << "You won that round!" << endl;
    }else{
        computer = computer +54;
        cout << "I wont that round! you lost... oops!" << endl;
    }
}


void replenish_snack(Cheezits &cheez, Pretzels &pretzels, GummyWorms &gummy, Chips &chip) {
    cout << "What snack would you like to replenish?" << endl;
    cout << "a) Cheezits" << endl;
    cout << "b) Gummy Worms" << endl;
    cout << "c) Prezels" << endl;
    cout << "d) Chips" << endl;

    char c;
    bool nope;
    cin >> c;
    while(nope){
        nope = true;

        switch(c){
            case 'a':
                cheez.replenish();
                break;
            case 'b':
                pretzels.replenish();
                break;
            case 'c':
                pretzels.replenish();
                break;
            case 'd':
                chip.replenish();
                break;
            default:
                cout << "That's not an option... Try again... but better."<< endl;
                nope = false;
        }
        cin.clear();
    }
    player = player + 15;

}


int main() {
    Deck deck = Deck();
    Cheezits cheez = Cheezits();
    Pretzels pretzels = Pretzels();
    GummyWorms gummy = GummyWorms();
    Chips chip = Chips();

    Dice die = Dice(6, 2);
    int round = 0;

    deck.shuffle();
    vector<vector<Card>> hands = deck.deal();


    cout << "Welcome to Snack Solitaire!" << endl;
    cout << "There are rules, but i wont tell you what they are." << endl;
    cout << "Would you like to continue? Y/N" << endl;

    string choice;
    cin >> choice;
    bool play_game = true;
    if(!(choice == "Y" or choice == "y")){
        play_game = false;
    }

    while (play_game){
        game_options();


        bool valid = false;
        while(!valid){
            char o;
            cin >> o;
            valid = true;
            switch(o){
                case 'a':
                    eat_snack(cheez, pretzels, gummy, chip);
                    break;
                case 'b':
                    replenish_snack(cheez, pretzels, gummy, chip);
                    break;
                case 'c':
                    play_cards(round, hands);
                    break;
                case 'd':
                    roll_dice(die);
                    break;
                default:
                    cout << "That's not an option, please enter something else" << endl;
                    valid = false;
                    break;
            }
            cin.clear();

        }

        if (round > 12){
            play_game = false;
            if(computer > player){
                cout << "YOU LOOSE!!" << endl;
            }else{
                cout << "You won the game!!!!" << endl;
            }
        }

        if(player > 100){
            play_game = false;
            cout << "You won the game!!!" << endl;
        }
        if(player < 0){
            play_game = false;
            cout <<"YOU LOOSE!!!" << endl;
        }

       round ++;
    }

    cout << "Well that was kind of fun... bye! " << endl;

    return 0;
}
