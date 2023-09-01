#include<stdio.h>
int main()
{
	int i,j=0,temp,arr[i],n;
	
	printf("Enter size of array:-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Reverse array will be shown like this:-");
	
	for(i=n-1;i>=0;i--){
		printf("%d\n", arr[i]);
	}
	return 0;
}
