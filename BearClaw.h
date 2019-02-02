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

