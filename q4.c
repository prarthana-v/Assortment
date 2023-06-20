#include<stdio.h>
main()
{
	int a[3][3];
    int i,j;
	printf("Enter the elements of array:\n");
    for(i=0;i<=2;i++){
    	for(j=0;j<=2;j++){
    		printf("Enter a[%d][%d]:",i,j);
    	    scanf("%d",&a[i][j]);
		}
    }
	int x;
	int sum=0;
	printf("Enter row number:");
	scanf("%d",&x);
	printf("Elements of row:");
		for(j=0;j<=2;j++){
		printf("%d ",a[x][j]);
		sum+=a[x][j];	
		}
	printf("\nthe sum of elements of row is:%d",sum);
		
	int y;
	int add=0;
	printf("\nEnter column number:");
	scanf("%d",&y);
	printf("Elements of column:");
		for(i=0;i<=2;i++){
		printf("%d ",a[i][y]);
		add+=a[i][y];	
		}
	printf("\nthe sum of elements of column is:%d",add);

}
