//
//  Session.h
//  CardGame
//
//  Created by Nicholas Lau on 3/14/14.
//  Copyright (c) 2014 Nicholas Lau. All rights reserved.
//

#ifndef __CardGame__Session__
#define __CardGame__Session__

#include <iostream>
#include "Deck.h"
#include "Hand.h"
#include "Player.h"
#include "Session.h"
#include "UI.h"
#include "vector"
#include <string>

/*
    datamembers: 
 -what game
 -players involved
 -active decks
 -switch to change between commandline/gui
  
    functions:
 -startsession: create players, assigns them deck
 -deal: give cards to players, gets size of hands from logic
 -betting:
 -discard:
 -evaluatehands: gives value to hands through logic
 -payout:
 -getNextStage: ask logic what to do next
 -endsession:
 
 */


class Session {
public:
    Session();
    
private:
    vector<Player> players;
    
};


#endif /* defined(__CardGame__Session__) */