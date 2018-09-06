#include <iostream>

using namespace std;






int main ()
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
