#include "armor.h"


Armor* createArmor()
{
	Armor* a = new Armor();
	a->armorClass = rand()%10;
	

	string adjective[5] = {"Bad Ass","Sacred","Enlightened","Ancient","Awesome"};
	string type[5] = {"Shield","Helm","Gauntlets","Breast Plate","Greaves"};
	string adjective2[5] = {"of the Trinity","from the Deep","of the Ages","of the Mist","of Light"};
	
	string text = adjective[rand()%5] + ' ' + type[rand()%5] + ' ' + adjective2[rand()%5];
	int s = text.size();
	a->name = new char[s];

	strcpy(a->name, text.c_str());

	return a;
}

void showArmorInfo( Armor *a )
{

	//cout << "The name of the Armor is: " << a->name << endl;
	cout << "The Armor's class is: " << a->armorClass << endl;
}

void destroyArmor( Armor *a )
{
	delete[] a->name;
	delete a;
}
