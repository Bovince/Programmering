#include <iostream>
using namespace std;
int main()
{
	
	int *p; // En pepare till en int. Kan innehålla adressen till ett ställe i RAM-minnet där man kan förvara en int.
	p = new int;   // Skapas
	cout << &(*p) << endl;
	
	int *pp; // En pepare till en int. Kan innehålla adressen till ett ställe i RAM-minnet där man kan förvara en int.
	pp = p;
	
	*p = 100;  // platsen som p pekar på innehåller värdet 100, tilldelas värdet 100
	
	cout << *p << endl;
	cout << *pp << endl;

	
	*p = -4;
	
		
	cout << *p << endl;
	cout << *pp << endl;
	
	int p2 = *p;
	cout << p2 << endl;
	
	delete p;
	cout << *p << endl;
	cout << *pp << endl;
	
	*p = 50;
	cout << *p << endl;
	cout << &(*p) << endl;
    char s;
    cin >> s;
	
	return 0;
	
}
