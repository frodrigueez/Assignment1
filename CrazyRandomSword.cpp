#include "CrazyRandomSword.h"

CrazyRandomSword::CrazyRandomSword(){
	// init random seed
	srand(time(NULL));

	int random = rand() % 100 + 7;
	Weapon("Crazy random sword", random); 
}

double CrazyRandomSword::hit(double armor){
	srand(time(NULL));

	int randomArmorPoints = rand() % (armor/3) + 2; 
	
	double damage = hitPoints - randomArmorPoints; 
	return damage;
}
