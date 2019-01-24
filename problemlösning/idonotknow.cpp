#include <iostream>
#include <curses.h>
using namespace std;
int main()
{
	initscr();
	
	char ch;
	ch = getchar();
	
	cout << "klickat på " << ch << endl;
	
	
	return 0;
}
