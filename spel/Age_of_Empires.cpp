#include <iostream>
#include <time.h>
#include <unistd.h>
using namespace std;
int main()
{
	 int food, wood, gold, stone, pop, pop_max;
	 int nfood, nwood, ngold, nstone, npop, npop_max;
	 int food_villagers, wood_villagers, gold_villagers, stone_villagers, pop_villagers;
	 //int food_increase, wood_increase, gold_increase, stone_increase, pop_increase;
	 int free_villagers, soldiers;
	 int game_over;
	 char action;
	 
	 game_over=0;
	 food=100;
	 nfood=100;
	 wood=100;
	 nwood=100;
	 gold=100;
	 ngold=100;
	 stone=100;
	 nstone=100;
	 pop=4;
	 npop=4;
	 pop_max=10;
	 npop_max=10;
	 
	 
	 food_villagers=0;
	 wood_villagers=0;
	 gold_villagers=0;
	 stone_villagers=0;
	 pop_villagers=0;
	 soldiers=0;
	 
	 while(game_over==0)
	 {
		food=nfood;
		
		wood=nwood;
		
		gold=ngold;
		
		stone=nstone;
		
		pop=npop;
		
		pop_max=npop_max;
	
		free_villagers=pop-food_villagers-wood_villagers-gold_villagers-stone_villagers-soldiers;
		
	 
		cout << food << "   " << wood << "   " << gold << "   " << stone << "   " << pop << "/" << pop_max;
		
		cout << "          " << food_villagers << "   " << wood_villagers << "   " << gold_villagers << "   " << stone_villagers << "   " << pop_villagers << "   " << free_villagers << endl << endl;
	
		cout << "To alocate villagers enter in \"f\" or food, \"w\" for wood, \"g\" for gold or \"s\" for stone." << endl;
		cout << "To build a house enter in \"h\". To do this you need a free villager." << endl;
		
		cin >> action;
		
		cout << endl;
		
		if (action==102)	//food
		{
			food_villagers++;
			free_villagers--; 
		}
			
		if (action==119)	//wood
		{
			wood_villagers++;
			free_villagers--;
		}
			
		if (action==103)	//gold
		{
			gold_villagers++;
			free_villagers--;
		}
			
		if (action==115)	//stone
		{
			stone_villagers++;
			free_villagers--;
		}
			
		if (action==104)	//house
		{
			pop_villagers++;
			free_villagers--;
			wood=wood-30;
			npop_max=npop_max+5;
		}
		if (action==32){}
		
		sleep(1);
		
		nfood=food+(1*food_villagers);
		nwood=wood+(1*wood_villagers);
		ngold=gold+(1*gold_villagers);
		nstone=stone+(1*stone_villagers);
		
		
		
		system("clear");
		
	}
	
	return 0;
	
	}
