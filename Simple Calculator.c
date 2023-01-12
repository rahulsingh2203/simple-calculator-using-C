#include<stdio.h>
#include<conio.h>

void main(){
	float a,b,c;
	int choice;
	char l;
	printf("\t\tSimple Calculator");
	printf("\nEnter first number:");
	scanf("%f",&a);
	printf("\nEnter second number:");
	scanf("%f",&b);
	
	do{
		printf("\n\nEnter your choice: \n\t1.Addition \n\t2.Substraction \n\t3.Multiplication \n\t4.Division \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				c = a+b;
				printf("Addition: %0.2f",c);
				break;
			case 2:
				c = a-b;
				printf("Substraction: %0.2f",c);
				break;
			case 3:
				c = a*b;
				printf("Multiplication: %0.2f",c);
				break;
			case 4:
				c = a/b;
				printf("Division: %0.2f",c);
				break;
			default:
				printf("you have entered wrong choice");
	}
	printf("\nDo you want to continue(y/n):");
	l = getch();
	}
	while(l == 'y');

	
	
	getch();
}
