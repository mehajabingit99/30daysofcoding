#include<stdio.h>
int main()
{
	int m,n,i,j,c=0,arr1[i],arr2[i];
	printf("Enter size of first array:-");
	scanf("%d",&m);
	
	printf("The first array:-");
	for(i=0;i<m;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("\n Enter size of second array:-");
	scanf("%d",&n);
	
	printf("The second array:-");
	for(i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}
	
	if(m==n){
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(arr1[i]==arr2[j])
				{
					arr2[j]='\n';
					c++;
					break;
				}
			}
		}
		if(c==m){
			printf("same");
		}
		else{
			printf("not same");
		}
	}
	else{
		printf("not same");
	}
	return 0;
	
}
