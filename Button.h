#include "Label.h"
class Button:public Label{
	private:
		string text;
	public:
		Button();
		Button(int,int,int,string);
		void create();
};
