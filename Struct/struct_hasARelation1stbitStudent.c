//Assignment 31:Struct::Has a relationship

#include<stdio.h>
#include<string.h>

	struct student
	{
		int fID;
		char batchID [20];
		char name [20];
		int dist_travel ;
	};
	typedef struct placed_student
	{
		int fID;
		char batchID [20];
		char name [20];
		int dist_travel ;
		char compName [30];
		char desiganation [30];	
	}placed_stu;
	
	void main()
	{
		printf("Struct :FirstBit Student 1\n");
		
		struct student st1 ;
		
		st1.fID = 31012013;
		strcpy(st1.batchID,"02Java2023");
		strcpy(st1.name,"Rohit");
		st1.dist_travel = 287;
		
		printf("\nFirstBit Student ID : %d",st1.fID);
		printf("\nBatch ID of FirstBit : %s",st1.batchID);
		printf("\nName of Student : %s",st1.name);
		printf("\nDistance Travelled by Student : %d km\n",st1.dist_travel);
		
		struct student st2 ;
		
		printf("\nEnter the FirstBit ID FRN: ");
		scanf("%d",&st2.fID);
		fflush(stdin);
		printf("Enter the Batch ID of FirstBit : ");
		gets(st2.batchID);
		fflush(stdin);
		printf("Enter the name of student : ");
		gets(st2.name);
		printf("Enter the distance Travelled by Student : ");
		scanf("%d",&st2.dist_travel);
		
		printf("\nStruct:FirstBit Student 2\n\n");
		
		printf("\nStudent FirstBit ID : %d",st2.fID);
		printf("\nFirstBit Batch ID : %s",st2.batchID);
		printf("\nName of student : %s",st2.name);
		printf("\nDistance Travelled By Student : %d km",st2.dist_travel);
		printf("\n\n***********************************************************\n");
		
		placed_stu pst1;
		
		printf("\nStruct : Placed FirstBit Student 1\n\n");
		
		pst1.fID = 22042022;
		strcpy(pst1.batchID,"22Apr2022");
		strcpy(pst1.name,"Abhijeet");
		pst1.dist_travel = 200 ;
		strcpy(pst1.compName,"TCS");
		strcpy(pst1.desiganation,"Java Developer");
		
		printf("\nFirstBit Student ID : %d",pst1.fID);
		printf("\nBatch ID of FirstBit : %s",pst1.batchID);
		printf("\nName of Student : %s",pst1.name);
		printf("\nDistance Travelled by Student : %d",pst1.dist_travel);
		printf("\nCompany Placed at : %s",pst1.compName);
		printf("\nDesigation in Company : %s\n",pst1.desiganation);
		
		placed_stu pst2 ;
		
		printf("\nEnter the FirstBit ID FRN: ");
		scanf("%d",&pst2.fID);
		fflush(stdin);
		printf("Enter the Batch ID of FirstBit : ");
		gets(pst2.batchID);
		fflush(stdin);
		printf("Enter the name of student : ");
		gets(pst2.name);
		printf("Enter the distance Travelled by Student : ");
		scanf("%d",&pt2.dist_travel);
		fflush(stdin);
		printf("Enter the company name student placed at :");
		gets(pst2.compName);
		fflush(stdin);
		printf("Enter the desiganation of student in company : ");
		gets(pst2.desiganation);
		
		printf("\nStruct : Placed Student 2\n");
		printf("\nFirstBit Student ID : %d",pst2.fID);
		printf("\nBatch ID of FirstBit : %s",pst2.batchID);
		printf("\nName of Student : %s",pst2.name);
		printf("\nDistance Travelled by Student : %d",pst2.dist_travel);
		printf("\nCompany Placed at : %s",pst2.compName);
		printf("\nDesigation in Company : %s",pst2.desiganation);		
	}
