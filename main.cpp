//Daniel Camarda
#include <iostream>
#include "Weapon.h"
using namespace std;

int main()
{
	Weapon* test = createWeapon();
	showWeaponInfo(test);

	//pause 
	int a;
	cin >> a;

	destroyWeapon(test);
	return 0;
}