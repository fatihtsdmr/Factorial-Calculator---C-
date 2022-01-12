#include "TextBox.h"
TextBox::TextBox(){
	this->x=5;
	this->y=6;
	this->size=30;
	this->text="Please input an integer number";
}
TextBox::TextBox(int x,int y,int size){
	this->x=x;
	this->y=y;
	this->size=size;
}
string TextBox::getText(){
	return text;
}
void TextBox::setNum(int num){
	this->num=num;
}
int TextBox::getNum(){
	return num;
}
void TextBox::create(){
	int i, j;
	int tempX = x;
	int tempY = y;
	rlutil::locate(x,y);
	rlutil::setBackgroundColor(7);
	rlutil::setColor(2);
	for(j=0;j<size;j++){
		cout<<" ";
	}
	rlutil::locate(tempX,tempY);
	cout<<text;
}
