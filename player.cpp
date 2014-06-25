#include "player.h"


Player* createPlayer(const char* name, const char *type, Weapon *w, Armor *a)
{

	Player* p = new Player();
	p->health = rand()%20 + 20;
	p->name = new char[10];
	p->type = new char[10];;

	equipPlayerWeapon( p, w );
	equipPlayerArmor( p, a);
	strcpy(p->name, name);
	strcpy(p->type, type);

	return p;
}

void showPlayerInfo( Player *p )
{
	cout << p->name << " the " << p->type << " starts the battle with " << p->health << " hp." << endl;
	cout << "Their weapon of choice for this battle is the " << p->wpn->name << endl;
	showWeaponInfo(p->wpn);
	cout << "Their armor of choice for this battle is the " << p->amr->name << endl;
	showArmorInfo(p->amr);
	cout << endl;
}

void equipPlayerWeapon( Player *p, Weapon *w )
{
	p->wpn = w;
}

void equipPlayerArmor( Player *p, Armor *a )
{
	p->amr = a;
}

void destroyPlayer( Player *p )
{
	delete[] p->name;
	delete[] p->type;
	delete p;
}
