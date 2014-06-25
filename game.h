#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <limits>
#include "player.h"
#include "armor.h"
#include "weapon.h"

using namespace std;
void attack( Player*, Player*);
void doBattle( Player*, Player*);
void pause();

#endif