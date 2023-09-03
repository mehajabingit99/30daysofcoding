#include<stdio.h>
int main()
{
	int i,a[100],j,n,flag=0;
	
	
	
	printf("Enter size of array :-");
	scanf("%d",&n);
	
	printf("Enter an array numbers:- ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=i+1; j<n; j++)
		{
			if(a[i]==a[j])
			{
				flag++;
			}
			
		}
	}
	printf("duplicate element is:- %d\n",flag);
	
	
}
