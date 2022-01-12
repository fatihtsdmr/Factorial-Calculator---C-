#include "rlutil.h"
#include "Calculation.h"
using namespace std;
class Mouse{
	private:
		int x, y;
	public:
		Mouse();
		Mouse(int,int);
		int getX();
		int getY();
		void active(Calculation &c);
};

