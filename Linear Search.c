#include<stdio.h>
int arr[10],search,n,i;
int main()
{
	printf("Enter The number of Elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter Your Index In %d:\n",i);
		scanf("%d",&arr[i]);
	}
	printf("Your Elements Are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("Enter The Number You want To search:\n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		printf("Your value %d is in the Index %d",search,i);
	}
	return 0;
}