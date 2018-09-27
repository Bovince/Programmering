#include <iostream>
using namespace std;
int main()
{
	
	char eng[20];
	
	char swe[20];
	
	cout << "Skriv ett engelskt ord."; cout << endl;
	cin >> eng; cout << endl;
	cout << "Skriv ordets översättning på svenska."; cout << endl;
	cin >> swe; cout << endl;
	
	
	cout << "Det engelska ordet "; cout << eng; cout<<" betyder "; cout << swe; cout << " på svenska.";
	
	
	return 0;
	
}
