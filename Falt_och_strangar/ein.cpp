#include <iostream>
using namespace std;
int main()
{
  
    double talfalt [4];
    
    talfalt [2] = 2;
    cout << talfalt [2] << endl;

	talfalt [0] = 4;
	cout << talfalt [0] << endl;
	
	talfalt [4] = 8;
	cout << talfalt [4] << endl;

	
	int a[3];
	a[0]=0;
	a[1]=1;
	a[2]=2;
	
	// du kan tilldela fältet värden samtidigt som du deklarerar
	
	int b[3] = {1,2,3};
	
	cout << b[2];
	
	
  return 0;
}
