#include "Window.h"
#include <string>
class Label:public Window{
	private:
		string text;
	public:
		Label();
		Label(int,int,int,string);
		string getText();
		void create();
};
