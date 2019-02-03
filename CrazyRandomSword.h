#include <string>
#include "Weapon.h"
#include <stdlib.h> /* rand */
#include <time.h>   /* time */

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/*
 * defines behavior of a crazy random sword (hitpoint = random integer
 * number between 7 and 100. ignores a random amount of integer armor 
 * points ranging from 2 to a third of the armor the weapon hits)
*/

class CrazyRandomSword : public Weapon {
public:
	CrazyRandomSword();
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);
};

#endif /* CRAZYRANDOMSWORD_H */
