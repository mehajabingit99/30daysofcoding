#include<stdio.h>
int main()
{
	int i,arr[100],min,n,loc=1;
	
	
	printf("Enter size of array:-");
	scanf("%d",&n);
	
	
	
	printf("Enter an array numbers:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	min=arr[0];
	
	for(i=0;i<n;i++)
	{
		if(min > arr[i] )
		{
			min = arr[i];
			loc=i+1;
		}
	}
	
	printf("Minimum element is present at location %d and it's' value is %d.\n",loc,min);
	
	return 0;
}
