#include "Window.h"
class TextBox:public Window{
	private:
		int num;
		string text;
	public:
		TextBox();
		TextBox(int,int,int);
		void setNum(int);
		int getNum();
		string getText();
		void create();
};
