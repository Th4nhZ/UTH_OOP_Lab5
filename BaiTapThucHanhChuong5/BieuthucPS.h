#pragma once
#include "Bieuthuc.h"
#include "Fraction.h"
#include <cmath>

class BieuthucPS : public Bieuthuc
{
protected:
	Fraction a, b;
public:
	BieuthucPS(int level);
	friend ostream& operator<<(ostream& out, BieuthucPS bt);
	bool kiemtra(float traloi);
	float giatri();
};


