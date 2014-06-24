#ifndef WEAPON_H
#define WEAPON_H

#include <ctime>
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Weapon
{
	int minDamage;
	int maxDamage;
	char* name;
};

Weapon* createWeapon();
void showWeaponInfo( Weapon* );
void destroyWeapon( Weapon* );

#endif