#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoints = 25, ignores all
 * armor points if the armor is less than 30)
 */
class SimpleHammer : public Weapon {
public:
	SimpleHammer() : Weapon("Simple Hammer", 25.0) {
	// calls Weapon(name, hitpoints) constructor 
	}
	
	virtual ~SimpleHammer(){};
	virtual double hit(double armor); 
};
#endif /* SIMPLEHAMMER_H */
