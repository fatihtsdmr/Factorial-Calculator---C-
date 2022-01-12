#include "Label.h"
Label::Label(){
	this->x=10;
	this->y=2;
	this->text="FACTORIAL CALCULATOR";
	this->size=20;
}
Label::Label(int x,int y,int size,string text){
	this->x=x;
	this->y=y;
	this->size=size;
	this->text=text;
}
string Label::getText(){
	return text;
}
void Label::create(){
	int i, j;
	int color = rand()%13+1;
	int tempX = x;
	int tempY = y;
	rlutil::locate(x,y);
	rlutil::setBackgroundColor(7);
	rlutil::setColor(3);
	for(i=0;i<3;i++){
		rlutil::locate(x,y);
		for(j=0;j<size;j++){
			cout<<" ";
		}
		y++;
		cout<<endl;
	}
	rlutil::locate(tempX,tempY+1);
	cout<<text;
}
