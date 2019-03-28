#include <iostream>
#include <time.h>
#include <unistd.h>
#include <curses.h>
using namespace std;
int main()
{
	//initscr();
	
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
		cout << "To build a house enter in \"h\". To do any of these, you need atleast one free villager." << endl;
		cout << "To construct a villager enter in \"v\"." << endl;
		
		action = getchar();
		
		cout << endl;
		
		if (action==102)	//food
		{
			if (free_villagers>0)
			{
				food_villagers++;
				free_villagers--; 
				
				nfood=food+(1*food_villagers);
				nwood=wood+(1*wood_villagers);
				ngold=gold+(1*gold_villagers);
				nstone=stone+(1*stone_villagers);
			}
		}
			
		if (action==119)	//wood
		{
			if (free_villagers>0)
			{
				wood_villagers++;
				free_villagers--;
				
				nfood=food+(1*food_villagers);
				nwood=wood+(1*wood_villagers);
				ngold=gold+(1*gold_villagers);
				nstone=stone+(1*stone_villagers);
			}
		}
			
		if (action==103)	//gold
		{
			if (free_villagers>0)
			{
				gold_villagers++;
				free_villagers--;
				
				nfood=food+(1*food_villagers);
				nwood=wood+(1*wood_villagers);
				ngold=gold+(1*gold_villagers);
				nstone=stone+(1*stone_villagers);
			}
		}
			
		if (action==115)	//stone
		{
			if (free_villagers>0)
			{
				stone_villagers++;
				free_villagers--;
				
				nfood=food+(1*food_villagers);
				nwood=wood+(1*wood_villagers);
				ngold=gold+(1*gold_villagers);
				nstone=stone+(1*stone_villagers);
			}
		}
			
		if (action==104)	//house
		{
			if (free_villagers>0)
			{
				
				wood=wood-30;
				npop_max=npop_max+5;
				
				nfood=food+(1*food_villagers);
				nwood=wood+(1*wood_villagers);
				ngold=gold+(1*gold_villagers);
				nstone=stone+(1*stone_villagers);
			}
		}
		if (action==118)
		{
			if (food>=60)
			{
				food=food-60;
				npop++;
				
				nfood=food+(1*food_villagers);
				nwood=wood+(1*wood_villagers);
				ngold=gold+(1*gold_villagers);
				nstone=stone+(1*stone_villagers);
			}
		}
		/*
		sleep(1);
		
		nfood=food+(1*food_villagers);
		nwood=wood+(1*wood_villagers);
		ngold=gold+(1*gold_villagers);
		nstone=stone+(1*stone_villagers);
		*/
		else
		{
		nfood=food+(1*food_villagers);
		nwood=wood+(1*wood_villagers);
		ngold=gold+(1*gold_villagers);
		nstone=stone+(1*stone_villagers);
		}
		sleep(1);
		system("clear");
		
	}
	
	return 0;
	
	}
