//Assignment 29 :Srtuct
#include<stdio.h>
#include<string.h> 
struct player
{
	char pName[20];
	int matchPlayed;
	int runs;
	int wicket;	
};
void storePlayer(struct player*,int);
void displayPlayer(struct player*,int);
void maxRun(struct player*,int);
void maxWicket(struct player*,int);
void main()
{
	printf("Struct :Array of struct player variable\n");
	int num;
	printf("Enter the number of players to store in struct : ");
	scanf("%d",&num);
	
	struct player prr[num];
	
	storePlayer(prr,num);
	displayPlayer(prr,num);
	maxRun(prr,num);
	maxWicket(prr,num);
}
void storePlayer(struct player* arr,int no)
{
	int i,j;
	for(i=0,j=1;i<no,j<=no;i++,j++)
	{
		fflush(stdin);
		printf("\nEnter the name of player %d : ",j);
		gets(arr[i].pName);
		printf("Enter the match played by player :");
		scanf("%d",&arr[i].matchPlayed);
		printf("Enter the runs scored by player :");
		scanf("%d",&arr[i].runs);
		printf("Enter the wicket taken by player :");
		scanf("%d",&arr[i].wicket);
	}
}
void displayPlayer(struct player* plr,int no)
{
	int i,j;
	for(i=0,j=1;i<no,j<=no;i++,j++)
	{
		printf("\n*******Record-%d********",j);
		printf("\nName of the player : %s",plr[i].pName);
		printf("\nMatch played by player : %d",plr[i].matchPlayed);
		printf("\nRun scored by player : %d",plr[i].runs);
		printf("\nWicket taken by player : %d",plr[i].wicket);
		printf("\n");
	}
}
void maxRun(struct player* plr,int no)
{
	int i ;
	int max_run = plr[0].runs;
	
	for(i=0;i<no;i++)
	{
		if(plr[i].runs>max_run)
		{
			max_run = plr[i].runs;
			break;
		}
	}
		printf("\nPlayer with maximum runs");	
		printf("\nName of the player : %s",plr[i].pName);
		printf("\nMatch played by player : %d",plr[i].matchPlayed);
		printf("\nRun scored by player : %d",plr[i].runs);
		printf("\nWicket taken by player : %d\n\n",plr[i].wicket);
}
void maxWicket(struct player* plr,int no)
{
	int i;
	int max_wic = plr[0].wicket;
	for(i=0;i<no;i++)
	{
		if(plr[i].wicket>max_wic)
		{
			max_wic = plr[i].wicket;
			break;
		}	
	}
		printf("\nPlayer with maximum wicket");	
		printf("\nName of the player : %s",plr[i].pName);
		printf("\nMatch played by player : %d",plr[i].matchPlayed);
		printf("\nRun scored by player : %d",plr[i].runs);
		printf("\nWicket taken by player : %d",plr[i].wicket);
}
