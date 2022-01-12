#include "Button.h"
Button::Button(){
	this->x=15;
	this->y=10;
	this->size=9;
	this->text="Calculate";
}
Button::Button(int x,int y,int size,string text){
	this->x=x;
	this->y=y;
	this->size=size;
	this->text=text;
}
void Button::create(){
	Label obj(x,y,size,text);
	obj.create();
}
