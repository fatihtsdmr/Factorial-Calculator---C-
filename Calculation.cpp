#include "Calculation.h"
Calculation::Calculation(){
	this->num=0;
}
Calculation::Calculation(int num){
	this->num=num;
}
void Calculation::setNum(int num){
	this->num=num;
}
int Calculation::getNum(){
	return num;
}
void Calculation::calculate(){
	int i, fact=1;
	for(i=num;i>0;i--){
		fact=fact*i;
	}
	rlutil::setBackgroundColor(7);
	rlutil::locate(30,16);
	rlutil::setColor(0);
	cout<<" "<<fact<<" ";
}
