#include<stdio.h>
main()
{
	int i,n;
	int a[n];
	
	printf("Enter the array size:");
	scanf("%d",&n);
	
	printf("Enter array's elements:\n");
	for(i=0;i<=n;i++){
		
			printf("Enter a[%d]:",i);
			scanf("%d",&a[i]);
		}
	printf("Negative elements from an array:");	
	for(i=0;i<=n;i++){
		if(a[i]<0) printf("%d ",a[i]);
	}
 	
}

