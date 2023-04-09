#include<stdio.h>
void calcy()
{
	int n,n1,n2;
	do
	{
		printf("Enter your choice:.:");
		scanf("%d",&n);
		
		if(n==6)
		{
			printf("Exit!!");
		}
		if(n>=6)
		{
			printf("Enter Valid Number!!!");
		}
		if(n<6)
		{
			printf("Enter the first number =");
			scanf("%d",&n1);
			printf("Enter the second number =");
			scanf("%D",&n2);
			
			switch(n)
			{
				case 1:
				{
					printf("%d+%d = %d",n1,n2,n1+n2);
					break;	
				}
				case 2:
				{
					printf("%d-%d = %d",n1,n2,n1-n2);
					break;
				}
				case 3:
				{
					printf("%d*%d = %d",n1,n2,n1*n2);
					break;
				}
				case 4:
				{
					printf("%d/%d = %d",n1,n2,n1/n2);
					break;
				}
				case 5:
				{
					printf("%d%%d = %d",n1,n2,n1%n2);
					break;
				}
				default:
					printf("Enter the valid number");		
			}
		}
	}while(n<6);
}

main()
{
	printf("1-Addition\n");
	printf("2-Subtraction\n");
	printf("3-Multipoication\n");
	printf("4-Division\n");
	printf("5-Modules\n");
	printf("6-Exit\n");
	
	calcy();
}
