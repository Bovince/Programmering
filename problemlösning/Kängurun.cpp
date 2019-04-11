#include <iostream>
using namespace std;
int x, y, z, totalVikt;
int funktion(int& z);
int main()
{
	
	cout << "En kängurumamma kan bära Y gram. Bestäm Y:";
	
	cin >> y;
	
	cout << endl << "Y=" << y << endl;
	
	cout << "Mamman har många barn och ska nu bära med sig några." << endl << "De första två väger X gram. Bestäm X:";
	
	cin >> x;
	
	cout << endl << "X=" << x << endl;
	
	cout << "Varje barn efter de två första väger lika mycket som de två föregående." << endl;
	
	cout << "Mamman kommer därför kunna bära " << funktion(z) << " av sina barn med sig" << endl;
	
	//cout << "Totalvikten blir " << totalVikt << endl;
	
	return 0;
	
}


int funktion(int& z)
{
	int barn[100];
	
	
	barn[0]=x;
	barn[1]=x;
	z=0;
	totalVikt=0;
	
	if (y > totalVikt)
		{
			totalVikt=totalVikt+barn[0];
			
			z++;
		}
		if (y > totalVikt)
		{
			totalVikt=totalVikt+barn[1];
			
			z++;
		}
	
	for (int n=2; n<103; n++)
	{
		barn[n]=barn[n-1]+barn[n-2];
	
		if (y >= totalVikt)
		{
			totalVikt=totalVikt+barn[n];
			
			z++;
		}
		else
		{
			z--;
		break;
		}
	}
	
	return z;
	
}
