//Daniel Camarda
#include <iostream>
#include "game.h"
#include "player.h"
#include "weapon.h"
#include "armor.h"
using namespace std;

int main()
{
	srand (time(NULL));
	//possibilities for player name and type
	string name[5] {"Onyx","Draven","Talon","Rykin","Swyft"};
	string type[5] {"Warlock","Archer","Druid","Ranger","Barbarian"};

	Weapon* w1 = createWeapon();
	Armor* a1 = createArmor();
	Player* p1 = createPlayer( name[rand()%5].c_str(), type[rand()%5].c_str(), w1, a1);
	//showPlayerInfo(p1);

	Weapon* w2 = createWeapon();
	Armor* a2 = createArmor();
	Player* p2 = createPlayer( name[rand()%5].c_str(), type[rand()%5].c_str(), w2, a2);
	//showPlayerInfo(p2);

	doBattle(p1, p2);
	cout << "The Battle is over!!!" << endl;
	
	cout << "Murdering the Players" << endl;
	destroyPlayer(p1);
	destroyPlayer(p2);

	cout << "Destroying Weapons" << endl;
	destroyWeapon(w1);
	destroyWeapon(w2);

	cout << "Destroying the Armor" << endl;
	destroyArmor(a1);
	destroyArmor(a2);
	
	pause();
	
	return 0;
}