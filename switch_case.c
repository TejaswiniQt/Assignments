#include<stdio.h>
int main()
{
    char c;
    double first,second,sum=0,diff=0;
    printf("Enter the operation to perform 'a' for addition 's' for subtraction: ");
    scanf("%c",&c);
    printf("Enter two operands: ");
    scanf("%lf %lf",&first,&second);
    switch(c)
    {
	case 'a':
	    sum=first+second;
	    printf("The sum is.. %.1lf\n",sum);
	    break;
	case 's':
	    diff=first-second;
	    printf("The difference is.. %.1lf\n",diff);
	    break;
	default:
	    printf("default case-noaction:\n");
	    return 0;
    }
    return 0;
}

