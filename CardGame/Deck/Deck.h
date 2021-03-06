//
//  Deck.h
//  CardGame
//
//  Created by Nicholas Lau on 3/12/14.
//  Copyright (c) 2014 Nicholas Lau. All rights reserved.
//

#ifndef __CardGame__Deck__
#define __CardGame__Deck__

#include <iostream>
#include "LinkedList.h"

class Deck: public LinkedList {
public:
    Deck(): LinkedList() {}
    Deck(Deck * a): LinkedList(a) {}
    
    static Deck * buildDeck();
    void shuffle();
    void shuffle(int numOfTimes, int variation);
    bool validate();
    
private:
};

#endif /* defined(__CardGame__Deck__) */
