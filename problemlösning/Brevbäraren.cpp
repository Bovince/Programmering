#include <iostream>
#include <time.h>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main()
{	
	srand(time(NULL));
	int antal_brev, langsta_strangen, k;
	char brev[26];
	bool Letter[26];
	cout << "Harry bär "<<(rand() % 16)+10 << " brev." << endl;
	langsta_strangen=0;
	k=(0);
	
	cin >> antal_brev;
	
	for ( int n = 0; n < (antal_brev); n++)
		{
		
		brev[n]=(rand() % 26)+65;
		
		if (Letter[-65+(brev[n])] != 1)
			{
			Letter[-65+(brev[n])] = 1;
			}
		else
			n--;
		}
	
	for ( int i = 0; i < (antal_brev); i++)
		{
		cout << brev[i];
		}
		
	cout << endl << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
		
		
	for ( int p = 0; p < 26; p++)
		{
		switch (brev[p])
			{
			case 'A':
				if(k<1){
				langsta_strangen++;
				k=1;
				}
			break;
			
			case 'B':
				if(k<2){
				langsta_strangen++;
				k=2;
				}
			break;
			
			case 'C':
				if(k<3){
				langsta_strangen++;
				k=3;
				}
			break;
			
			case 'D':
				if(k<4){
				langsta_strangen++;
				k=4;
				}
			break;
			
			case 'E':
				if(k<5){
				langsta_strangen++;
				k=5;
				}
			break;
			
			case 'F':
				if(k<6){
				langsta_strangen++;
				k=6;
				}
			break;
			
			case 'G':
				if(k<7){
				langsta_strangen++;
				k=7;
				}
			break;
			
			case 'H':
				if(k<8){
				langsta_strangen++;
				k=8;
				}
			break;
			
			case 'I':
				if(k<9){
				langsta_strangen++;
				k=9;
				}
			break;
			
			case 'J':
				if(k<10){
				langsta_strangen++;
				k=10;
				}
			break;
			
			case 'K':
				if(k<11){
				langsta_strangen++;
				k=11;
				}
			break;
			
			case 'L':
				if(k<12){
				langsta_strangen++;
				k=12;
				}
			break;
			
			case 'M':
				if(k<13){
				langsta_strangen++;
				k=13;
				}
			break;
			
			case 'N':
				if(k<14){
				langsta_strangen++;
				k=14;
				}
			break;
			
			case 'O':
				if(k<15){
				langsta_strangen++;
				k=15;
				}
			break;
			
			case 'P':
				if(k<16){
				langsta_strangen++;
				k=16;
				}
			break;
			
			case 'Q':
				if(k<17){
				langsta_strangen++;
				k=17;
				}
			break;
			
			case 'R':
				if(k<18){
				langsta_strangen++;
				k=18;
				}
			break;
			
			case 'S':
				if(k<19){
				langsta_strangen++;
				k=19;
				}
			break;
			
			case 'T':
				if(k<20){
				langsta_strangen++;
				k=20;
				}
			break;
			
			case 'U':
				if(k<21){
				langsta_strangen++;
				k=21;
				}
			break;
			
			case 'V':
				if(k<22){
				langsta_strangen++;
				k=22;
				}
			break;
			
			case 'W':
				if(k<23){
				langsta_strangen++;
				k=23;
				}
			break;
			
			case 'X':
				if(k<24){
				langsta_strangen++;
				k=24;
				}
			break;
			
			case 'Y':
				if(k<25){
				langsta_strangen++;
				k=25;
				}
			break;
			
			case 'Z':
				if(k<26){
				langsta_strangen++;
				k=26;
				}
			break;
			}
			
		}
	cout << endl << langsta_strangen;
	
	
	
	return 0;
	}
