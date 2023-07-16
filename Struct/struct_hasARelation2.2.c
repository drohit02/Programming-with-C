//Assignment No 31 : Struct : Has A Relation
#include<string.h>
#include<stdio.h>
struct player
{
	int runs;
	char name [20];
	int match_played ;
	char style [20];
};
struct retired_player
{	
	struct player p1;
	char country [20];
	char retired [20];
};
void main()
{
	struct retired_player rp1;
	printf("Enter the Runs Scored By player : ");
	scanf("%d",&rp1.p1.runs);
	printf("Enter the name of player : ");
	fflush(stdin);
	gets(rp1.p1.name);
	printf("Enter the match played by the player : ");
	scanf("%d",&rp1.p1.match_played);
	printf("Enter the style of the player : ");
	fflush(stdin);
	gets(rp1.p1.style);
	printf("Enter the name of country : ");
	fflush(stdin);
	gets(rp1.country);
	printf("Whether the player is retired or not (yes/no): ");
	fflush(stdin);
	gets(rp1.retired);
	
	printf("\nName of the Player is : %s",rp1.p1.name);
	printf("\nRuns Scored by Player is : %d",rp1.p1.runs);
	printf("\nRuns Scored by Player is : %d",rp1.p1.match_played);
	printf("\nPlayer style : %s",rp1.p1.style);
	printf("\nCountry of the player is : %s",rp1.country);
	printf("\nPlayer is retired or not ? : %s",rp1.retired);
}
