#include<stdio.h>
#include<stdlib.h>
int* twosum(int* nums,int numsize,int target,int* returnsize);
int main()
{
    int a[]={2,7,11,15};
    int rs,target=9;
    int *p=NULL;
    p=twosum(a,sizeof(a)/sizeof(a[0]),target,&rs);
    if(rs==0)
    {
	printf("Target not found\n");
    }
    else
    {
	printf("Target found at indices %d and %d\n",p[0],p[1]);
	free(p);
    }

    return 0;
}

int* twosum(int* nums,int numsize,int target,int* returnsize)
{
    int i,j;
    int *ret_arr=(int*)malloc(2 * sizeof(int));
    if(ret_arr == NULL)
    {
	*returnsize=0;
	return 0;
    }
    
    for(i=0;i<numsize;i++)
    {
	for(j=i+1;j<numsize;j++)
	{
	    if(nums[i]+nums[j]==target)
	    {
		*returnsize=2;
		ret_arr[0]=i;
		ret_arr[1]=j;
		return ret_arr;
	    }
	}
    }
    *returnsize=0;
    free(ret_arr);
    return 0;
}


