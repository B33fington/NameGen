#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "armor.h"
#include "weapon.h"

using namespace std;

struct Player
{
	char* name;
	char* type;
	int health;
	Weapon* wpn;
	Armor* amr;	
};

Player* createPlayer(const char* name, const char *type, Weapon *w, Armor *a);
void showPlayerInfo( Player* );
void equipPlayerWeapon( Player* , Weapon* );
void equipPlayerArmor( Player*, Armor* );
void destroyPlayer( Player* );

#endif