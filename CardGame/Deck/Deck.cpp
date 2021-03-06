//
//  Deck.cpp
//  CardGame
//
//  Created by Nicholas Lau on 3/12/14.
//  Copyright (c) 2014 Nicholas Lau. All rights reserved.
//

#include "Deck.h"

Deck * Deck::buildDeck() {
    Deck * standard = new Deck();
    for (int i = 1; i<=4; i++) {
        for (int j = 1; j<=13; j++) {
            standard->pushBack(i, j);
        }
    }
    return standard;
}

void Deck::shuffle() {
    Card * x = this->head;
    for (int i = 0; i < 500; i++) {
        int shift = (rand() % 26);
        int dir = rand() % 2; //0 is left, 1 is right
        x = moveCardByValueDirection(x, shift, dir);
    }
}

//variation should be less than 52, right exception to catch
void Deck::shuffle(int numOfTimes, int variation) {
    Card * x = this->head;
    for (int i = 0; i < numOfTimes; i++) {
        int shift = (rand() % variation);
        int dir = rand() % 2; //0 is left, 1 is right
        x = moveCardByValueDirection(x, shift, dir);
    }
}

//overload to validate different forms of decks (jokers, 2 decks, game specific variations, cheating :P )
bool Deck::validate() {
    for (int i = 1; i<=4; i++) {
        for (int j = 1; j<=13; j++) {
            if (findByValue(i, j)==NULL) {return false;}
        }
    }
    return true;
}
