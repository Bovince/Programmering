#include <iostream> 
#include <string>
#include <math.h>
#include <ncurses/ncurses.h>
#include <sys/select.h>
#include <unistd.h>

using namespace std;
	bool gameOver;
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

  /* Do not wait at all, not even a microsecond */
  tv.tv_sec=0;
  tv.tv_usec=0;

  /* Must be done first to initialize read_fd */
  FD_ZERO(&read_fd);

  /* Makes select() ask if input is ready:
   * 0 is the file descriptor for stdin    */
  FD_SET(0,&read_fd);

  /* The first parameter is the number of the
   * largest file descriptor to check + 1. */
  if(select(1, &read_fd,NULL, /*No writes*/NULL, /*No exceptions*/&tv) == -1)
    return 0;  /* An error occured */

  /*  read_fd now holds a bit map of files that are
   * readable. We test the entry for the standard
   * input (file 0). */
  
if(FD_ISSET(0,&read_fd))
    /* Character pending on stdin */
    return 1;

  /* no characters were pending */
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
		}



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
	
	
	
	
	
	

	
	if (action==1)
	{
		Setup();
		while(!gameOver)
		{
			Draw();
			Input();
			Logic();
			sleep(1);
			
		}
		
	}







	if (action==2)
	{
		system("/home/bovince/public_html/main/index.html");
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
			string type;
			
			cout << "Choose one of the equation types below." << endl;
			
			cout << endl;
			
			
			cin.ignore(256,'\n');
			getline(cin,type);
			
		
			if (type== "x+y" )
			{	
				cout << endl;
				cout << endl;
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
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
						cout << "Your unknown is" << tal3;
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
				
			}
			
			if (type=="x-y")
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type=="x²+yx+z")
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type=="x²-yx+z")
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type=="x²+yx-z")
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
			}
			
			if (type=="x²-yx-z")
			{
				cout << "Input values x or y and the summ on request" << endl;
				cout << "But first choose unknown term" << endl;
				cout << "x or y" << endl;
				
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
