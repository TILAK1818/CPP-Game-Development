#include <iostream>
#include <cstdlib>
#include <ctime>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int player=0;
	int ai=0;
	bool draw=false;
	do
	{
		cout<<"\tROCK PAPER and SCISSORS GAME"<<endl;
		cout<<"Select your choice"<<endl;
		cout<<"1. Rock"<<endl;
		cout<<"2. Paper"<<endl;
		cout<<"3. Scissor"<<endl;
		cout<<"Select"<<endl;
		cin>>player;
		cout<<endl;
		ai=(rand() % 3)+1;
		if(ai==ROCK)
		{
			cout<<"AI throws ROCK"<<endl;
		}
		else if(ai==PAPER)
		{
			cout<<"AI throws PAPER"<<endl;
		}
		else if(ai==SCISSORS)
		{
			cout<<"AI throws SCISSORS"<<endl;
		}
		draw=false;
		if(player==ai)
		{
			draw=true;
			cout<<"DRAWW Try again"<<endl;
		}
		else if(player==ROCK && ai==SCISSORS)
		{
			cout<<"ROCK beats SCISSORS      YOU WIN!"<<endl;
		}
		else if(player==ROCK && ai==PAPER)
		{
			cout<<"PAPER beats ROCK      YOU LOSE"<<endl;
		}
		else if(player==PAPER && ai==ROCK)
		{
			cout<<"PAPER beats ROCK      YOU WIN!"<<endl;
		}
		else if(player==PAPER && ai==SCISSORS)
		{
				cout<<"SCISSORS beats PAPER     YOU LOSE"<<endl;
		}
		else if(player==SCISSORS && ai==PAPER)
		{
				cout<<"SCISSORS beats PAPER      YOU WIN!"<<endl;
		}
		else if(player==SCISSORS && ai==ROCK)
		{
				cout<<"ROCK beats SCISSORS     YOU LOSE"<<endl;
		}
		cout<<endl;

	}while(draw);
	
	return 0;
}
