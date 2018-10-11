#include <iostream> 
#include <string>
#include <math.h>

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
	cout << "2. Go to website" << endl;
	cout << "3. Use calculator" << endl << endl;
	
	int action;
	cin >> action;
	cout << endl;
	
	
	
	
	
	
	
	
	if (action==1)
	{
		
	}







	if (action==2)
	{
		system("</opt/google/chrome/chrome> https://google.se");
	}
	
	
	
	
	
	
	
	if (action==3)
	{
		
	int method;
	float tal1 , tal2 , tal3 , tal4;
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
	cout << "4:Division" << endl;
	cout << "5:Power" << endl;
	cout << "6:Squarerot" << endl;
	cout << "7:Solve equation" << endl << endl;
	
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
	
	
	
	
	
	if (method==5)
	{
		
		cout << "Enter term" << endl;
	cin >> tal1;
	
	cout << endl;
	cout << "Enter power" << endl; 
	cin >> tal2;
	
	cout << endl;
	
	cout << tal1; cout <<"^"; cout << tal2; cout << endl;
	
	cout << endl;
	
	tal3=pow(tal1 , tal2);
	
	cout << tal3;
	
	}
	
	
	
	
	
	if (method==6)
	{
		
		cout << "Enter number" << endl;
	cin >> tal1;
	
	cout << endl;
	
	cout <<"√"; cout << tal1; cout << "=";
	
	tal3=sqrt(tal1);
	
	cout << tal3;
	
	}
	
	
	
	
	
	if (method==7)
	{
		int type;
		cout << "Choose equation type" << endl;
		cout << "1:x+y" << endl;
		cout << "2:x-y" << endl;
		cout << "3:x²+yx+z" << endl;
		cout << "4:x²-yx+z" << endl;
		cout << "5:x²+yx-z" << endl;
		cout << "6:x²-yx-z" << endl;
		cout << endl;
		
		cin >> type;
		
			if (type==1)
			{	
				cout << endl;
				cout << endl;
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				cout << endl;
				
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2-tal1;
						cout << "Your unknown is" << tal3;
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2-tal1;
						cout << "Your unknown is " << tal3;	
					}
				
			}
			
			if (type==2)
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type==3)
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type==4)
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type==5)
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type==6)
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
	
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Do you wish to count again"; cout << endl;
	cout << "If so press \"y\", else press \"any\" buton but \"y\""; cout << endl;
	
	cin >> fortsatt;
}













	
	
	return 0;
}
}
