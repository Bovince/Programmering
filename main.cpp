#include <iostream> 

using namespace std;
int main()
{
	
	cout << "Programming initiated" << endl;
	
	cout << "Software booting" << endl;
	cout << "_________________" << endl;
	cout << "Booting completed" << endl;
	cout << "A program by:" << endl << endl;
	
	cout << " BBBB     OOOO   VV       VV  II  NN    N   " << endl;
	cout << " B   B   OO  OO   VV     VV   II  N N   N    " << endl;
	cout << " BBBBB   O    O    VV   VV    II  N  NN N    " << endl;
	cout << " B    B  OO  OO     VV VV     II  N   N N     " << endl;
	cout << " BBBBB    OOOO       VVV      II  N    NN    " << endl << endl;
	
	
	
	cout << "Please enter your name" << endl;
	char name[20];
	cin >> name;
	cout << endl << endl;
	cout << "Welcome " << name << endl;
	
	cout << "Choose action" << endl << endl;
	cout << "1. Play snake" << endl;
	cout << "2. Go to weebsite" << endl;
	cout << "3. Use calculator" << endl << endl;
	
	int action;
	cin >> action;
	cout << endl;
	
	
	
	
	
	
	
	
	if (action==1)
	{
		
	}










	if (action==2)
	{
		cout << "localhost/~Bovince"; 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	if (action==3)
	{
		
	int method , tal1 , tal2 , tal3;
	
	char fortsatt='y';
	
	while (fortsatt=='y')
	{
	
	cout << endl;
	cout << endl;
	
	cout << "Simple calculator, using integers" << endl;
	
	cout << "Choose aritmetical method" << endl;
	cout << "1:Addition" << endl;
	cout << "2:Subtraction" << endl;
	cout << "3:Multiplication" << endl;
	cout << "4:Division" << endl << endl;
	
	cin >> method;
	
	cout << endl;
	
	
	if (method==1)
	{
		cout << "Enter term" << endl;
	cin >> tal1;
	
	cout << endl;
	cout << "Enter second term" << endl; 
	cin >> tal2;
	
	cout << endl;
	
	cout << tal1; cout <<"+"; cout << tal2; cout << endl;
	
	cout << endl;
	
	tal3=tal1+tal2;
	
	cout << tal3;
	
	}
	
	
	
	
	
	
	
	
	
	if (method==2)
	{
		cout << "Enter term" << endl;
	cin >> tal1;
	
	cout << endl;
	cout << "Enter second term" << endl; 
	cin >> tal2;
	
	cout << endl;
	
	cout << tal1; cout <<"-"; cout << tal2; cout << endl;
	
	cout << endl;
	
	tal3=tal1-tal2;
	
	cout << tal3;
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	if (method==3)
	{
		cout << "Enter factor" << endl;
	cin >> tal1;
	
	cout << endl;
	cout << "Enter second factor" << endl; 
	cin >> tal2;
	
	cout << endl;
	
	cout << tal1; cout <<"*"; cout << tal2; cout << endl;
	
	cout << endl;
	
	tal3=tal1*tal2;
	
	cout << tal3;
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	if (method==4)
	{
		float tal3 , tal2;
		cout << "Enter numerator" << endl;
	cin >> tal1;
	
	cout << endl;
	cout << "Enter denominator" << endl; 
	cin >> tal2;
	
	cout << endl;
	
	cout << tal1; cout <<"/"; cout << tal2; cout << endl;
	
	cout << endl;
	
	tal3=tal1/tal2;
	
	cout << tal3;
	
	}
	
	
	
	
	
	
	
	
	
	cout << endl;
	cout << endl;
	cout << "Do you wish to count again"; cout << endl;
	cout << "If so press \"y\""; cout << endl;
	
	cin >> fortsatt;
}













	
	
	return 0;
}
}
