#include "Bieuthuc.h"
#include <vector>
#include <ctime>
#include <cstdlib>
// #include <random>

ostream& operator<<(ostream& out, Bieuthuc& bt)
{
	out << bt.a << bt.pheptoan << bt.b << " = ?";
	return out;
}

Bieuthuc::Bieuthuc(int level)
{
	char _op[3] = { '+','-','*' };
	// random_device rd;
	// mt19937 gen(rd());
	// uniform_int_distribution<> dis(level < 4 ? 1 : 10 , level < 4 ? 10 : 100); // truoc level 4 thi a , b thuoc (1, 10) con sau level 4 thì a , b thuoc (10, 100)
	// a = dis(gen);
	// b = dis(gen);
	a = rand() % (level < 4 ? 10 : 91) + (level < 4 ? 1 : 10);
	b = rand() % (level < 4 ? 10 : 91) + (level < 4 ? 1 : 10);
	if (level == 1) {
		pheptoan = _op[0];
	}
	else if (level == 2 || level == 4) {
		// char random = dis(gen) % 2;
		char random = rand() % 2;
		pheptoan = _op[random];

	}
	else if (level == 3 || level == 5) {
		// char random = dis(gen) % 3;
		char random = rand() % 3;
		pheptoan = _op[random];
	}
}

bool Bieuthuc::kiemtra(float traloi)
{
	return traloi == giatri();
}

float Bieuthuc::giatri()
{
	switch (pheptoan)
	{
	case '+':
		return a * 1.0 + b;
	case '-':
		return a * 1.0 - b;
	case '*':
		return a * 1.0 * b;
	}
}