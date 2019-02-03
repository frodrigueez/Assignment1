#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
	double damage = hitPoints;
	if(armor < 30){ // will ignore all armor points
		return damage; 
	} 
	return (damage-armor);
}
