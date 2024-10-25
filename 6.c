#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,power,sq;
	char choice;
	
	printf("\n'+' ---> Addition");
	printf("\n'-' ---> Subtraction");
	printf("\n'*' ---> Multiplication");
	printf("\n'/' ---> Division");
	printf("\n'r' ---> Remainder");
	printf("\n's' ---> Square root");
	printf("\n'p' ---> power");
	printf("\n'2' ---> Square");
	printf("\n'c' ---> Cube");
	
	printf("\nEnter the character = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case '-' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe division of %d and %d is %d",num1,num2,num1/num2);
		break;
		case 'r' :
			printf("\nEnter the value of num1 = ");
			scanf("%d",&num1);
			printf("\nEnter the value of num2 = ");
			scanf("%d",&num2);
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		case 's' :
			printf("\nEnter any positive number to find the square root = ");
			scanf("%d",&num1);
			sq = sqrt(num1);
			printf("\nSquare root of %d is %d",num1,sq);
		break;
		case 'p' :
			printf("\nEnter any positive number as a base = ");
			scanf("%d",&num1);
			printf("\nEnter any positive number as an exponent = ");
			scanf("%d",&num2);
			power = pow(num1,num2);
			printf("\npower is = %d",power);
		break;
		case '2' :
			printf("\nEnter any positive number to find the square = ");
			scanf("%d",&num1);
			printf("\nSquare of %d is %d",num1,num1*num1);
		break;
		case 'c' :
			printf("\nEnter any positive number to find the cube = ");
			scanf("%d",&num1);
			printf("\nCube of %d is %d",num1,num1*num1*num1);
		break;
		default :
			printf("\nInvalid input!");
	}
	return 0;
}
