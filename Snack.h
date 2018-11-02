//
// Created by Cecily Page on 11/1/18.
//

#ifndef CRPAGE_PROJECT5_SNACK_H
#define CRPAGE_PROJECT5_SNACK_H

using namespace std;
#include <iostream>

class Snack {
protected:
    bool yummy;
    bool crunchy;
    bool sticky;
    bool messy;
    int total_number;

public:
    Snack(bool yum, bool crunch, bool stick, bool mess, int total);
    bool is_yummy;
    bool is_crunchy;
    bool is_sticky;
    int get_total_number;

    virtual void eat() = 0;
    void replenish();
    void spill();

};


#endif //CRPAGE_PROJECT5_SNACK_H


class Cheezits: public Snack{

public:
    Cheezits();

    virtual void eat() override;
};

class Pretzels: public Snack{
public:
    Pretzels();

    virtual void eat() override;
};

class GummyWorms: public Snack{
public:
    GummyWorms();

    virtual void eat() override;
};

class Chips: public Snack{
public:
    Chips();

    virtual void eat() override;
};