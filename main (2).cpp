#include <iostream>
#include "Button.h"
#include "TextBox.h"
#include "Mouse.h"

int main() {
	rlutil::hidecursor();
	Window w;
	Window *w2, *w3, *w4;
	Label l;
	TextBox tb;
	Button b;
	w2 = &l;
	w3 = &tb;
	w4 = &b;
	w.create();
	w2->create();
	w3->create();
	w4->create();
	Label l1(2,15,18,"The factorial is: ");
	l1.create();
	
	rlutil::locate(36,6);
	int x;
	cin>>x;

	Calculation c(x);
	Mouse m;
	m.active(c);
	rlutil::locate(1,25);
	rlutil::setColor(15);
	rlutil::setBackgroundColor(0);
	
	return 0;
}
