#include "rlutil.h"
#include <stdlib.h>
#pragma once
using namespace std;
class Window{
	protected:
		int x, y;
		int size;
	public:
		Window();
		Window(int,int,int);
		void setVariables(int,int,int);
		int getX();
		int getY();
		int getSize();
		virtual void create();
};
