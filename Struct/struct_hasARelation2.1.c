//Assignment No 31 : Struct : Has A Relation

#include<stdio.h>
#include<string.h>

struct student 
{
	int fID;
	char batchID [20];
	char name [20];
	int dist_travelled ;
 }; 
 struct placed_student
 {
 	 struct student s1;
	 char compName [20];
	 char desigation [20]; 
 };
 
 void main()
 {
 	struct placed_student pst1;
 	struct student s1;
 	
 	printf("Enter the ID of the Student : ");
 	scanf("%d",&pst1.s1.fID);
 	printf("Enter the Batch-Id of the Student : ");
 	fflush(stdin);
 	gets(pst1.s1.batchID);
 	printf("Enter the name of the Student : ");
 	fflush(stdin);
 	gets(pst1.s1.name);
 	printf("Enter the distance travelled by Student : ");
 	scanf("%d",&pst1.s1.dist_travelled);
 	printf("Enter the Company Name : ");
 	fflush(stdin);
 	gets(pst1.compName);
 	printf("Enter the Desigation in company : ");
 	fflush(stdin);
 	gets(pst1.desigation);
 	
 	printf("\n\nFirstBit Id Is : %d",pst1.s1.fID);
 	printf("\nBatch-Id Is : %s",pst1.s1.batchID);
 	printf("\nName of Student Is : %s",pst1.s1.name);
	printf("\ndistance travelld by student : %d km",pst1.s1.dist_travelled);
	printf("\nCompany Name is : %s",pst1.compName);
	printf("\nDesigation in Company : %s",pst1.desigation); 
 }
