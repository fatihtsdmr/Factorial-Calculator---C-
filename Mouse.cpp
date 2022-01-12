#include "Mouse.h"
#include "Button.h"

Mouse::Mouse(){
	this->x=10;
	this->y=10;
}
Mouse::Mouse(int x,int y){
	this->x=x;
	this->y=y;
}
int Mouse::getX(){
	return x;
}
int Mouse::getY(){
	return y;
}
void Mouse::active(Calculation &sayi){
	rlutil::setColor(0);
	rlutil::setBackgroundColor(8);
	rlutil::locate(x,y); 
	cout << 'X' << endl;
	while (true) {
		if (kbhit()) {
			int key = rlutil::getkey(); 
			rlutil::locate(x,y);
			cout << " "; 
			if (key == rlutil::KEY_LEFT){
				
				x--;
				Button b;
				b.create();
				rlutil::setColor(0);
				rlutil::setBackgroundColor(8);
			} 
			else if (key == rlutil::KEY_RIGHT){
			
				if(x<40)
					++x;
					
					Button b;
				b.create();
				rlutil::setColor(0);
				rlutil::setBackgroundColor(8);		
			} 
			else if (key == rlutil::KEY_UP) {
				--y;	
				Button b;
				b.create();
				rlutil::setColor(0);
				rlutil::setBackgroundColor(8);
				
			
			}
			else if (key == rlutil::KEY_DOWN){
				if(y<20)
					++y;	
					Button b;
				b.create();
				rlutil::setColor(0);
				rlutil::setBackgroundColor(8);
			} 
			else if (key == rlutil::KEY_ESCAPE) break;
			else if(key == rlutil::KEY_ENTER){
				if(x>=15 && x<=23 && y>=10 && y<=12)
					sayi.calculate();
			}
			rlutil::locate(x,y);
			cout << 'X'; 
			cout.flush();
		}
	}
}

