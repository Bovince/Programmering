#include <iostream> 
#include <string>
#include <math.h>
#include <ncurses/ncurses.h>
#include <sys/select.h>
#include <unistd.h>

using namespace std;

float addition();
float subtraction();
float multiplication();
float division();
float power();
float squarerot();
float equation();


/*	bool gameOver;
	const int width(50);
	const int height(30);
	int x, y, fruitX, fruitY, score;
	char k;
	enum eDirecton { STOP = 0, LEFT, RIGHT, UP, DOWN};
	eDirecton dir;
	
	
	int kbhit(void)
{
  struct timeval tv;
  fd_set read_fd;

  
  tv.tv_sec=0;
  tv.tv_usec=0;

  
  FD_ZERO(&read_fd);

  
  FD_SET(0,&read_fd);

  
  if(select(1, &read_fd,NULL, NULL,&tv) == -1)
    return 0;  

  
  
if(FD_ISSET(0,&read_fd))
    
    return 1;

 
  return 0;
}
	
	
	

	void Setup()
		{
			gameOver = false;
			dir = STOP;
			x = width/2;
			y = height/2;
			fruitX = rand() % width;
			fruitY = rand() % height;
			score = 0;
		}
		
		void Draw()
		{
			system("clear");
			for( int i = 0; i < width+1; i++)
			{
				cout << "#";
			}
			for( int i = 0; i < height; i++)
			{
				for( int j = 0; j < width; j++)
				{
						if(j==0)
						{
							cout << "#";
						}
						if (i == y && j == x)
						{
							cout << "O";
						}
						else if( i == fruitY && j == fruitX)
						{
							cout << "f";
						}
						else
						{
						cout << " ";
						}
						
						if(j == width-1)
						{
							cout << "#";
						}
				}
				cout << endl;
			}
			for( int i = 0; i < width+2; i++)
			{
				cout << "#";
			}
			cout << endl;
			
			
		}
		
		void Input()
		{
			if(kbhit())
				switch(getch())
				{
					case 'a':
						dir = LEFT;
						break;
					case 'd':
						dir = RIGHT;
						break;
					case 'w':
						dir = UP;
						break;
					case 's':
						dir = DOWN;
						break;
					case 'x':
						gameOver = true;
						break;
				}
			
		}

		void Logic()
		{
			switch(dir)
			{
				case LEFT:
					x--;
					break;
					
				case RIGHT:
					x++;
					break;
					
				case UP:
					y++;
					break;
					
				case DOWN:
					y--;
					break;
					
				default:
					break;
			}
		*/



int main()
{
	
	
	cout << "Programming initiated" << endl;
	
	cout << "Software booting" << endl;
	cout << "_________________" << endl;
	cout << "Booting completed" << endl;
	cout << "A program by:" << endl << endl;
	
	cout << " BBBB     OOOO   VV       VV  II  NN    N   " << endl;
	cout << " B   B   OO  OO   VV     VV   II  N N   N    " << endl;
	cout << " BBBBB   O    O    VV   VV    II  N  NN N    " << endl;
	cout << " B    B  OO  OO     VV VV     II  N   N N     " << endl;
	cout << " BBBBB    OOOO       VVV      II  N    NN    " << endl << endl;
	
	
	
	cout << "Please enter your name" << endl;
	char name[20];
	cin >> name;
	cout << endl << endl;
	cout << "Welcome " << name << endl;
	
	cout << "Choose action" << endl << endl;
	cout << "1. Play snake" << endl;
	cout << "2. Go to website" << endl;
	cout << "3. Use calculator" << endl << endl;
	
	int action;
	cin >> action;
	cout << endl;
	
	
	/*
	if (action==1)
	{
		Setup();
		while(!gameOver)
		{
			Draw();
			Input();
			Logic();
		}
	}

	*/



	if (action==2)
	{
		
		
	}
	
	
	
	
	
	if (action==3)
	{
		
	int method;
	float tal1 , tal2 , tal3 , tal4;
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
	cout << "4:Division" << endl;
	cout << "5:Power" << endl;
	cout << "6:Squarerot" << endl;
	cout << "7:Solve equation" << endl << endl;
	
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
	
	
	
	
	
		if (method==5)
		{
		
			cout << "Enter term" << endl;
			cin >> tal1;
	
			cout << endl;
			cout << "Enter power" << endl; 
			cin >> tal2;
	
			cout << endl;
	
			cout << tal1; cout <<"^"; cout << tal2; cout << endl;
	
			cout << endl;
	
			tal3=pow(tal1 , tal2);
	
			cout << tal3;
	
		}
	
	
	
	
	
		if (method==6)
		{
		
			cout << "Enter number" << endl;
			cin >> tal1;
	
			cout << endl;
	
			cout <<"√"; cout << tal1; cout << "=";
	
			tal3=sqrt(tal1);
	
			cout << tal3;
	
		}
	
	
	
	
	
		if (method==7)
		{
			int type;
			
			cout << "Choose one of the equation types below." << endl;
			
			cout << "1. x+y=v" << endl << endl;
			cout << "2. x-y=v" << endl << endl;
			cout << "3. xy=v" << endl << endl;
			cout << "4. x/y=v" << endl << endl;
			cout << "5. x+y+z=v" << endl << endl;
			cout << "6. x+y-z=v" << endl << endl;
			cout << "7. x-y+z=v" << endl << endl;
			cout << "8. x-y-z=v" << endl << endl;
			cout << "9. xy+z=v" << endl << endl;
			cout << "10. xy-z=v" << endl << endl;
			cout << "11. x+yz=v" << endl << endl;
			cout << "12. x-yz=v" << endl << endl;
			cout << "13. x^y+z=v" << endl << endl;
			cout << "13. x^y-z=v" << endl << endl;
			
			
			
			cout << endl;
			
			cin >> type;
			
			cout << endl;
			
		
			if (type==1)
			{	
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y or v for (value)" << endl;
				cout << endl;
				
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2-tal1;
						cout << "Your unknown is " << tal3;
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2-tal1;
						cout << "Your unknown is " << tal3;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal3;	
					}
				
			}
			
			if (type==2)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal3;
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;										
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal1-tal2;
						cout << "Your unknown is " << tal3;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal1-tal2;
						cout << "Your unknown is " << tal3;	
					}
			}
			
			if (type==3)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2/tal1;
						cout << "Your unknown is " << tal3;
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;				
						cin >> tal2;
						cout << endl;
						tal3=tal2/tal1;
						cout << "Your unknown is " << tal3;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal1*tal2;
						cout << "Your unknown is " << tal3;	
					}
			}
			
			if (type==4)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal2*tal1;
						cout << "Your unknown is " << tal3;
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input summ" << endl;				
						cin >> tal2;
						cout << endl;
						tal3=tal1/tal2;
						cout << "Your unknown is " << tal3;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						tal3=tal1/tal2;
						cout << "Your unknown is " << tal3;	
					}
			}
			
			if (type==5)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal3-tal2-tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;					
						cin >> tal3;
						cout << endl;
						tal4=tal3-tal2-tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal3-tal2-tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal1+tal2+tal3;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==6)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal3+tal2-tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal3+tal2-tal1;
						cout << "Your unknown is " << tal4;				
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal3-tal2-tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal1+tal2-tal3;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==7)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal3-tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal1+tal2-tal3;									
						cout << "Your unknown is " << tal4;						
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal3+tal2-tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal4=tal1+tal2-tal3;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==8)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==9)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==10)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==11)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==12)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
			}
			
			if (type==13)
			{
				cout << endl;
				cout << "Input known variables (and/or the value of them) on request" << endl;
				cout << "But first choose the unknown" << endl;
				cout << "x, y, z or v for (value)" << endl;
				cout << endl;
				char unknown;
				
				cin >> unknown;
				
					if (unknown=='x')
					{
						cout << "Please input y" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='y')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='z')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input v" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
					
					if (unknown=='v')
					{
						cout << "Please input x" << endl;
						cin >> tal1;
						cout << endl;
						cout << "Please input y" << endl;
						cin >> tal2;
						cout << endl;
						cout << "Please input z" << endl;
						cin >> tal3;
						cout << endl;
						tal3=tal2+tal1;
						cout << "Your unknown is " << tal4;	
					}
			}
	
	
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Do you wish to count again"; cout << endl;
	cout << "If so press \"y\", else enter \"any\" buton but \"y\""; cout << endl;
	
	cin >> fortsatt;
}



	
	
	return 0;
}
}
