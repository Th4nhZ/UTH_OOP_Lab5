#pragma once
#include "Bieuthuc.h"

class BieuthucNhan : public Bieuthuc
{
public:
	BieuthucNhan(int level) : Bieuthuc(level) {
		pheptoan = '*';
	};
	bool kiemtra(float traloi);
	float giatri();
};

