#include <stdio.h>
#include <string.h>
#include <time.h>
#include  <ctype.h>
#include <stdlib.h>
#include <windows.h>
#include <MMsystem.h>


void check_options(int user,int system);
int user_score = 0,system_score = 0;

int main(void)
{
	
	int user_choice,system_choice;
	int user,sytem;
	system("color 3");
	srand(time(0));//for random numbers
	printf("\t\t\t\t============##__Welcome To Rock_Paper_Scissor Game__##=================\n\n\n");
	
	while(user_choice != 4)
	{
	   printf("\t\t\t\t___Kindly Select Any One Option____\t\t\t\t\n\n");
	   printf(" \t\t\t\t1 ==> Scissor\n");
	   printf(" \t\t\t\t2 ==> Paper\n");
	   printf(" \t\t\t\t3 ==> Rock\n");
	   printf(" \t\t\t\t4 ==> Quit\n");	
	   scanf("%d", &user_choice);
            system_choice = (rand() % 3) + 1;//this is used to generate the random number between 1 to 3
	   check_options(user_choice,system_choice);
	}
		
	return 0;
}
void check_options(int user,int system)
{
	// 1 = scissor 2 = paper 3 = rock
	if(user == system)
	{
		printf(" ------------------------------------\n");
		printf("|           It's Tie                |\n");
		printf(" ------------------------------------\n");
	}
	else if(user == 1)
	{
	    if(system == 2)
	    {
	    	printf("-------------------------------------------\n");
	    	printf("|          You Won!                       |\n");
	    	printf("|   You: scissor                          |\n");
	    	printf("|   system: paper                         |\n");
	    	printf("-------------------------------------------\n");
	    	user_score++;
	    }
	    else
	    {
	        printf("-------------------------------------------\n");
	    	printf("|          You Loose!                       |\n");
	    	printf("|   You: scissor                            |\n");
	    	printf("|   system: Rock                            |\n");
	    	printf("-------------------------------------------\n");
	    	system_score++;
	    }	
	}
	else if(user == 2)
	{
		if(system == 1)
		{
		printf("-------------------------------------------\n");
	    	printf("|          You Loose!                       |\n");
	    	printf("|   You: paper                              |\n");
	    	printf("|   system: Scissor                         |\n");
	    	printf("-------------------------------------------\n");
			system_score++;
		}
		else
		{
		printf("-------------------------------------------\n");
	    	printf("|          You Won!                         |\n");
	    	printf("|   You: paper                              |\n");
	    	printf("|   system: Rock                            |\n");
	    	printf("-------------------------------------------\n");
			user_score++;
		}
	}
	else if(user == 3)
	{
		if(system == 1) 
		{
		printf("-------------------------------------------\n");
	    	printf("|          You Won!                       |\n");
	    	printf("|   You: Rock                             |\n");
	    	printf("|   system: scissor                       |\n");
	    	printf("-------------------------------------------\n");
			user_score++;
		}
		else
		{
		printf("-------------------------------------------\n");
	    	printf("|          You Loose!                       |\n");
	    	printf("|   You: Rock                               |\n");
	    	printf("|   system: paper                           |\n");
	    	printf("--------------------------------------------\n");
			system_score++;
		}
	}
	else if(user == 4)
	{
		Beep(620,500);
		if(user_score > system_score)
		{
			
			printf("\t\t\t\t____Congratulations! You Won_____\n");
			PlaySound(TEXT("C:\\Users\\nvarm\\Downloads\\mixkit-animated-small-group-applause-523.wav"),NULL,SND_SYNC);
			printf("\t\t\t\t___Your score = %d_______\n",user_score);
		         printf("\t\t\t\t___system score = %d_____\n",system_score);
		}
		else
		{
		       printf("\t\t\t\t_____You Loose!_____\n");
		       PlaySound(TEXT("C:\\Users\\nvarm\\Downloads\\loose.wav"),NULL,SND_SYNC);
		       printf("\t\t\t\t___Your score = %d______\n",user_score);
		       printf("\t\t\t\t___system score = %d____\n",system_score);
		}
	}
	
}
