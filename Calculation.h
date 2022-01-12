#pragma once
#include "rlutil.h"
#include <stdlib.h>
using namespace std;
class Calculation{
	private:
		int num;
	public:
		Calculation();
		Calculation(int);
		void setNum(int);
		int getNum();
		void calculate();
};
