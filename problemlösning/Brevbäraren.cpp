#include <iostream>
#include <time.h>
#include <cstdlib>
#include <unistd.h>
using namespace std;
int main()
{	
	srand(time(NULL));
	int antal_brev, langsta_strangen,k;//, brev1, brev2, brev3, brev4, brev5, brev6, brev7, brev8, brev9, brev10, brev11, brev12, brev13, brev14, brev15, brev16, brev17, brev18, brev19, brev20, brev21, brev22, brev23, brev24, brev25, brev26;
	char brev[26];
	cout << "Harry bär "<<(rand() % 16)+10 << " brev." << endl;
	langsta_strangen=0;
	k=0;
	int p=0;
	cin >> antal_brev;
	
	for ( int n = 0; n < (antal_brev); n++)
		{
		
		//cout << (rand() % 26)+65;
		brev[n]=(rand() % 26)+65;
		}
	
	for ( int i = 0; i < antal_brev; i++)
		{
		cout << brev[i];
		}
	for ( int u = 0; u < antal_brev; u++)
		{
		switch (brev[k])
			{
			case p==0:
			langsta_strangen++;
			p=1;
			break;
			
			case 'B':
			langsta_strangen++;
			p=2;
			break;
			
			case 'C':
			langsta_strangen++;
			p=3;
			break;
			
			case 'D':
			langsta_strangen++;
			p=4;
			break;
			
			case 'E':
			langsta_strangen++;
			p=5;
			break;
			
			case 'F':
			langsta_strangen++;
			p=6;
			break;
			
			case 'G':
			langsta_strangen++;
			p=7;
			break;
			
			case 'H':
			langsta_strangen++;
			p=8;
			break;
			
			case 'I':
			langsta_strangen++;
			p=9;
			break;
			
			case 'J':
			langsta_strangen++;
			p=10;
			break;
			
			case 'K':
			langsta_strangen++;
			p=11;
			break;
			
			case 'L':
			langsta_strangen++;
			p=12;
			break;
			
			case 'M':
			langsta_strangen++;
			p=13;
			break;
			
			case 'N':
			langsta_strangen++;
			p=14;
			break;
			
			case 'O':
			langsta_strangen++;
			p=15;
			break;
			
			case 'P':
			langsta_strangen++;
			p=16;
			break;
			
			case 'Q':
			langsta_strangen++;
			p=17;
			break;
			
			case 'R':
			langsta_strangen++;
			p=18;
			break;
			
			case 'S':
			langsta_strangen++;
			p=19;
			break;
			
			case 'T':
			langsta_strangen++;
			p=20;
			break;
			
			case 'U':
			langsta_strangen++;
			p=21;
			break;
			
			case 'V':
			langsta_strangen++;
			p=22;
			break;
			
			case 'W':
			langsta_strangen++;
			p=23;
			break;
			
			case 'X':
			langsta_strangen++;
			p=24;
			break;
			
			case 'Y':
			langsta_strangen++;
			p=25;
			break;
			
			case 'Z':
			langsta_strangen++;
			p=26;
			break;
			}
			
		k++;
		}
	cout << endl << langsta_strangen;
	
	
	
	return 0;
	}
