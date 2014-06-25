#include "weapon.h"


Weapon* createWeapon()
{
	Weapon* w = new Weapon();
	w->minDamage = 5;
	w->maxDamage = rand()%(16-10) + 10;
	w->name = new char[40];

	string adjective[5] {"Brutal","Fiery","Cursed","Haunted","Enchanted"};
	string type[5] {"Sword","Axe","Mace","Bow","Dagger"};
	string adjective2[5] {"of Sorrow","from Hell","of Hatred","of the Dark","of Light"};

	strcpy(w->name, (adjective[rand()%5] + ' ' + type[rand()%5] + ' ' + adjective2[rand()%5]).c_str());

	return w;
}

void showWeaponInfo( Weapon *w )
{

	//cout << "The name of the weapon is: " << w->name << endl;
	cout << "The min attack of the weapon is: " << w->minDamage << endl;
	cout << "The max attack of the weapon is: " << w->maxDamage << endl;
}

void destroyWeapon( Weapon *w )
{
 	delete[] w->name;
	delete w;
}
