/*
 * defines behavior of a bear claw, a weapon inspired by my dog.
 * (hitpoints = random integer between intensity levels 1-5  
 * multiplied by Bear's energy level.) Ignores 20% of Armor
 * if energy level is < 3. else, ignores all armor 
*/

#include <string>
#include "Weapon.h"
#include <stdlib.h>
#include <time.h>

#ifndef BEARCLAW_H
#define BEARCLAW_H

class BearClaw : public Weapon {
public:
	BearClaw();
	virtual ~BearClaw() {};
	virtual double hit(double armor);
};

#endif /* BEARCLAW_H */

