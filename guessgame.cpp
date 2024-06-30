#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned int)time(NULL));
	int number=(rand()%100)+1;
	int guess=0;
	cout<<"\t\tThis is a numbner guessing gamee!!!"<<endl;
	do{
		
		cout<<"Guess a number (1-100):";
		cin>>guess;
		if(guess > number)
		{
			cout<<"Guess lower!"<<endl;
		}
		else if(guess < number)
		{
			cout<<"Guess higher!"<<endl;
		}
		else
		{
			cout<<"\tYOU WON CONGRATS";
		}
	}
	while(guess != number);
	return 0;
}

