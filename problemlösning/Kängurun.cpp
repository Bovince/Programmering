#include <iostream>
using namespace std;
int x, y, z;
int funktion(int& z);
int main()
{
	
	cout << "En kängurumamma kan bära Y gram. Bestäm Y:";
	
	cin >> y;
	
	cout << endl << "Y=" << y << endl;
	
	cout << "Mamman har många barn och ska nu bära med sig några. De första två väger X gram. Bestäm X:";
	
	cin >> x;
	
	cout << endl << "X=" << x << endl;
	
	cout << "Varje barn efter de två första väger lika mycket som de två föregående." << endl << "Mamman kommer därför kunna bära " << funktion(z) << " st av sina barn med sig";
	
	
	return 0;
	
}


int funktion(int& z)
{
	int barn[100];
	int totalVikt = 0;
	
	barn[0]=x;
	barn[1]=x;
	
	for (int n=2; n<103; n++)
	{
		barn[n]=barn[n-1]+barn[n-2];
		z=n-1;
		if (y > totalVikt)
		{
			totalVikt=totalVikt+barn[n];
		}
		else
		{
		break;
		}
	}
	if (z==2 && totalVikt==x)
	{	
		z--;
	}
	
	return z;
}
