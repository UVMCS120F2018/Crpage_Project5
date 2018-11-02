//
// Created by Cecily Page on 11/1/18.
//

#include "Snack.h"

Snack::Snack(bool yum, bool crunch, bool stick, bool mess, int total) {
    yummy = yum;
    crunchy = crunch;
    sticky = stick;
    messy = mess;
    total_number = total;
}

void Snack::spill() {
    total_number = 0;
}

void Snack::replenish() {
    total_number = 10;
}


Cheezits::Cheezits() :Snack(true, true, false, false, 25){};

void Cheezits::eat() {
    if (total_number > 5){
        total_number = total_number - 5;

    }
    else{
        total_number = 0;
    }

    cout << "Saaalty!! These are my favorite. Especially the extra tosty ones." << endl;
    cout << "Because I ate a bunch, there are only " << total_number << " cheezits left" << endl;
}


Pretzels::Pretzels() :Snack(false, true, false, false, 15){};

void Pretzels::eat() {
    if (total_number > 2){
        total_number = total_number - 2;
    }else{
        total_number = 0;
    }
    cout << "These are so bland! Who picked them?! Why?!" << endl;
    cout << "I only ate a few because they're gross, but there's " << total_number << " left" << endl;
}


GummyWorms::GummyWorms() :Snack(true, false, true, false, 10){};

void GummyWorms::eat() {
    if(total_number > 1){
        total_number = total_number -1;
    }else{
        total_number = 0;
    }
    cout << "These are so chewy! Almost like they're real... eww" << endl;
    cout << "They're so good, but there's only " << total_number << " left!"<< endl;

}


Chips::Chips() :Snack(true, true, false, true, 50){};

void Chips::eat() {
    if(total_number > 5){
        total_number = total_number - 5;
    }else{
        total_number = 0;
    }

    cout << "Crunchy and Delicious!" << endl;
    cout << "There's only " << total_number << " left!";
}