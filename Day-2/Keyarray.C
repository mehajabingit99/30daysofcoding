#include<stdio.h>
int main()
{
 
 int i,n,a[100],toSearch,found = 0;
 
 	printf("Enter size of array :-");
	scanf("%d",&n);
	
	printf("Enter an array numbers:- ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
	
	printf("\n Enter element to search:-");
	scanf("%d",&toSearch);
	
	for(i=0;i<n;i++)
	{
		if(a[i] == toSearch)
		{
			found=1;
			break;
		}
	}
	
	if(found==1){
		printf("\n%d is found at position %d", toSearch, i+1);
	}
	else
	{
		printf("\n%d is not found in the array",toSearch);
	}
	
	return 0;
	
	
}
