#include<stdio.h>
int main()
{
	int i,a[100],max,n;
	max=a[0];
	
	
	printf("Enter size of array :-");
	scanf("%d",&n);
	
	printf("Enter an array numbers:- ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<n;i++){
		if(a[i] > max)
		{
			max = a[i];
			
		}
	}
	printf("Max no in given array is:- %d\n",max);
	
	
}
