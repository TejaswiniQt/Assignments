#include<stdio.h>
int main()
{
    int a[50],size,pos,i;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter the array elements: ");
    for(i=0;i<size;i++)
    {
	scanf("%d",&a[i]);
    }
    printf("Enter the postion you want to delete: ");
    scanf("%d",&pos);
    if(pos<=0 || pos>size)
    {
	printf("Invalid positon\n");
    }
    else
    {
	for(i=pos-1;i<size-1;i++)
	{
	    a[i]=a[i+1];
	}
	size--;
    }
    printf("array after deletion\n");
    for(i=0;i<size;i++)
    {
	printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
