#include "Weapon.h"


Weapon* createWeapon()
{
	Weapon* w = new Weapon();
	w->minDamage = 3;
	w->maxDamage = 10;
	
	string adjective[5] {"Brutal","Fiery","Cursed","Haunted","Enchanted"};
	string type[5] {"Sword","Axe","Mace","Bow","Dagger"};
	string adjective2[5] {"of Sorrow","from Hell","of Hatred","of the Dark","of Light"};

	srand (time(NULL));
	char text[40];
	strcpy(text, (adjective[rand()%5] + ' ' + type[rand()%5] + ' ' + adjective2[rand()%5]).c_str());
	w->name = text;
	cout << w->name << endl;
	return w;
}

void showWeaponInfo( Weapon *w )
{

	cout << "The name of the weapon is: " << w->name << endl;
	cout << "The min attack of the weapon is: " << w->minDamage << endl;
	cout << "The max attack of the weapon is: " << w->maxDamage << endl;
}

void destroyWeapon( Weapon *w )
{
	delete[] w->name;
	delete w;
}
