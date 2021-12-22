#include<stdio.h>
int main()
{
    int arr_odd[50],arr_even[50];
    int j=0,k=0;
    for(int i=1;i<=100;i++)
    {
	if(i % 2 != 0)
	{
	    arr_odd[k] = i;
	    k++;
	}
	else
	{
	    arr_even[j] = i;
	    j++;
	}
    }
    printf("Even numbers are: ");
    for(int i=0;i<50;i++)
    {
	printf("%d ",arr_even[i]);
    }
    printf("\nOdd numbers are: ");
    for(int i=0;i<50;i++)
    {
	printf("%d ",arr_odd[i]);
    }
    printf("\n");
    return 0;
}

