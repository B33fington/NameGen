#include "game.h"

void attack( Player* attacker, Player* victim)
{
	int attackPower = rand()%(attacker->wpn->maxDamage + 1 - attacker->wpn->minDamage) + attacker->wpn->minDamage;
	int damage = 0;
	if(attackPower >= victim->amr->armorClass)
		damage = attackPower - victim->amr->armorClass;
		
	//display the attack's information (eg who hits who, weapons and armor, damage done)
	cout << endl << endl << attacker->name << " the " << attacker->type << " weilds the " <<
		attacker->wpn->name << " against " << victim->name << " the " << victim->type << 
		"'s " << victim->amr->name << ", and does " << damage << " of damage." << endl;
	
	victim->health -= damage;
	cout << victim->name << " the " << victim->type << " has " << victim->health << " hp left." << endl;
}

void doBattle( Player* p1, Player* p2)
{
	cout << "** FIRST PLAYER **" << endl;
	showPlayerInfo( p1 );
	cout << "** SECOND PLAYER **" << endl;
	showPlayerInfo( p2 );

	pause();

	int round = 1;
	int first = 0, second = 0;
	while(p1->health > 0 && p2->health > 0){
		cout << "**** ROUND " << round << " ****" << endl;
		do{
			first = rand()%10;
			second = rand()%10;
		}while(first == second);

		if(first > second){
			attack(p1, p2);
			if(p2->health > 0)
				attack(p2, p1);
		}
		else{
			attack(p2, p1);
			if(p1->health > 0)
				attack(p1, p2);
		}

		round++;
		pause();
	}
	if(p1->health > 0){
		cout << p2->name << " the " << p2->type << " seems to be the student, while " 
		<< p1->name << " the " << p1->type << " is clearly the master!" << endl << endl;
	}
	else{
		cout << p1->name << " the " << p1->type << " seems to be the student, while " 
		<< p2->name << " the " << p2->type << " is clearly the master!" << endl << endl;
	}

}

void pause(){
	cout << endl << "Press Enter to Continue" << endl << endl;
	cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
}