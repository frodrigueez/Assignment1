#include "BearClaw.h"

BearClaw::BearClaw(){
	srand(time(NULL));

	intensity = rand() % 5 + 1; 
	energy = rand() % 10 + 1;

	double myHP = intensity*energy;		
	Weapon("Bear claw", myHP);
}

double BearClaw::hit(double armor){
	double damage = hitPoints; 
	if(getEnergy() < 3) // ignores 20% of armor
		return (damage-(armor * 0.8));
	// else, goodluck!!!
	return damage; 

}
