#include "Window.h"
Window::Window(){
	this->x=0;
	this->y=0;
	this->size=40;
}
Window::Window(int x,int y,int size){
	this->x=x;
	this->y=y;
	this->size=size;
}
void Window::setVariables(int x,int y,int size){
	this->x=x;
	this->y=y;
	this->size=size;
}
int Window::getX(){
	return x;
}
int Window::getY(){
	return y;
}
int Window::getSize(){
	return size;
}
void Window::create(){
	int i, j;
	rlutil::setConsoleTitle("Factorial Calculator");
	rlutil::locate(x,y);
	rlutil::setBackgroundColor(8);
	for(i=0;i<size/2;i++){
		for(j=0;j<size;j++){
			cout<<" ";
			x++;
		}
		y++;
		cout<<endl;
	}
}
