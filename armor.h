#ifndef ARMOR_H
#define ARMOR_H

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Armor
{
	int armorClass;
	char* name;
};

Armor* createArmor();
void showArmorInfo( Armor* );
void destroyArmor( Armor* );

#endif