#include<stdio.h>
int main()
{
	int start,end,i,j,count=0,choice;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);//5
	printf("\nEnter the nding number = ");
	scanf("%d",&end);//15
	
	printf("\nEnter 1 to print prime numbers");
	printf("\nEnter 2 to print non prime numbers");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			for(i=start;i<=end;i++)
			{	
				count = 0;	
				for(j=2;j<i/2;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count==0)
				{
					printf("%d ",i);
				}
			}
		break;
		case 2 :
			for(i=start;i<=end;i++)
			{	
				count = 0;	
				for(j=2;j<i/2;j++)
				{
					if(i%j==0)
					{
						count++;
					}
				}
				if(count!=0)
				{
					printf("%d ",i);
				}
			}
		break;
	}
	return 0;
}