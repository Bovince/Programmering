// Vincent Bovin Te2a

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
// Uppgift 1
// /* 
{

  char gemen, versal;

  cout << "Mata in en gemen (liten bokstav)." << endl;

  cin >> gemen;

  versal=gemen-32;

  cout << endl;

  cout << "gemenens motsvarande versal är \""; cout << versal; cout << "\"";


  return 0;

}
// */


//Uppgift 2
/*
{
	double tal1, tal2, tal3, tal4;
	
	cout << "Vänligen mata in tre tal, även flyttal."; cout << endl;
	
	cin >>tal1; cout << endl;
	
	cin >>tal2; cout << endl;
	
	cin >>tal3; cout << endl;
	
	tal4=(tal1+tal2+tal3)/3;
	
	cout << "Talens medelvärde är " << fixed << setprecision(1) << tal4; cout << " med en desimals noggrannhet";
	
	
	return 0;
	
}
 */


//Uppgift 3
/*
{
	
	char tecken;
	
	cout << "Skriv en text"; cout << endl;
	
	string text; cout << endl;
	
	getline(cin, text); cout << endl;
	
	cout << "Skriv två bokstäver att söka efter"; cout << endl;
	
	cin >> tecken; cout << endl;
	
	int pos=text.find(tecken,0);
	
	int langd=4;
	
	int start=pos;
	
	string fyra=text.substr(start, langd);
	
	cout << "Dina sökta tecken och de två efterföljande är "; cout << fyra;
	
	
	return 0;
	
}
*/


// Uppgift 4
/*
{
	
	int timmar, minuter, sekunder;
	
	cout << "Mata in timmar, minuter och sekunder. Använd heltal.";cout << endl;
	
	cout << "Timmar:"; cin >> timmar; cout << endl;
	
	cout << "Minuter:"; cin >> minuter; cout << endl;
	
	cout << "Sekunder:"; cin >> sekunder; cout << endl;
	
	timmar=timmar+minuter/60;
	
	minuter=minuter%60+sekunder/60;
	
	sekunder=sekunder%60;
	
	cout << "Den inmatade tiden motsvaras av "; cout << timmar; cout << " timmar, "; cout << minuter; cout << " minuter "; cout << sekunder; cout << " och sekunder."; cout << endl;

	return 0;

}
*/
