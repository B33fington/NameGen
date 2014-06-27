#include "player.h"


Player* createPlayer(const char* name, const char *type, Weapon *w, Armor *a)
{

	Player* p = new Player();
	p->health = rand()%20 + 20;
	
	string n = name;
	string t = type;

	p->name = new char[n.size()];
	p->type = new char[t.size()];	

	equipPlayerWeapon( p, w );
	equipPlayerArmor( p, a);
	strcpy(p->name, n.c_str());
	strcpy(p->type, t.c_str());

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
