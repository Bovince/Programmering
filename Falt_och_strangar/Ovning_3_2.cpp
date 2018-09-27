#include <iostream>
using namespace std;
int main0()
///*
{
	
	int input[3];
	
	int x;
	
	cout << "Skriv tre tal med \"Enter\" mellan varje tal"; cout << endl;
	
	cin >> input[0];
	
	cout << endl;
	
	cin >> input[1];
	
	cout << endl;
	
	cin >> input[2];
	
	cout << endl;
	
	
	
	x = input [0];
	
	input [0] = input [2];
	
	input [2] = x;
	
	
	
	cout<<input[0];
	
	cout<<"  ";
	
	cout<<input[1];
	
	cout<<"  ";
	
	cout<<input[2];
	
	cout << endl;
	
	cout << "Tal 1 och 3 har bytt plats";
	
	return 0;
	
}
//*/
int main1()
{
	
	char abc[3]={'A','B','C'};
	
	cout << abc[0];
	
	cout << ' ';
	
	cout << abc[1];
	
	cout << ' ';
	
	cout << abc[2];
	
	cout << endl;
	
	char temp = abc[0];
	
	abc[0]=abc[2];
	
	abc[2]=temp;
	
	cout << abc[0]; cout << ' '; cout << abc[1]; cout << ' ';cout << abc[2];
	
	
	return 0;
	
}
