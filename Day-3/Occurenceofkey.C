#include<stdio.h>
int main()
{
	int i,a[100],pos=0,n,num;
	
	printf("Enter size of array :-");
	scanf("%d",&n);
	
	printf("Enter an array elements:- ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter an element to search:-");
	scanf("%d",&num);
	
	for(i=0;i<n;i++){
		if(a[i] == num)
		{
			printf("%d found at position %d",num,i+1);
			return 0;
			
		}
	}
	printf("%d not found,",num);
	return 0;
	
	
}
