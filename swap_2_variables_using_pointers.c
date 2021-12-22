#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("Before swapping:\n");
    printf("value of a=%d\n",a);
    printf("value of b=%d\n",b);
    *p=*p ^ *q;
    *q=*p ^ *q;
    *p=*p ^ *q;
    printf("After swapping:\n");
    printf("value of a=%d\n",a);
    printf("value of b=%d\n",b);
    return 0;
}
