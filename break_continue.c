#include<stdio.h>
int main()
{
    int num,num1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

	for(int i=0;i<num;i++)
	{
	    printf("Enter number: ");
	    scanf("%d",&num1);
	    if(num1 == 0)
	    {
		break;
	    }
	    else if(num1 < 0)
	    {
		continue;
	    }
	    else
	    {
		sum=sum+num1;
	    }
	}
	printf("Sum is %d\n",sum);
return 0;
}

