// Matrix addition using function

#include <stdio.h> 
#define MAX 10 

int addition(int a[][MAX],int b[][MAX],int n,int m) 
{
	int c[MAX][MAX];
	int i,j, count=0;
	
	for (i=0;i<n;i++) 
	{ 
		for (j=0;j<m;j++) 
		{ 
			c[i][j]=a[i][j]+b[i][j];
      count++;
		} 
	} 
  printf("Total counts to perform addition is: %d", count);
  printf("\n");
	printf("Sum of the matrix is: \n");
	
	for (i=0;i<n;i++) 
	{ 
		for (j=0;j<m;j++) 
		{ 
			printf("%d\t",c[i][j]);
			if (j==m-1) 
				printf("\n"); 
		} 
	} 
} 

int main() 
{ 
	int a[MAX][MAX],b[MAX][MAX];
	int i,j,n,m;
	
	printf("Enter the number of rows and columns: "); 
	scanf("%d%d",&n,&m); 
	printf("Enter the elements of the first matrix: \n"); 
	
	for (i=0;i<n;i++) 
	{ 
		for (j=0;j<m;j++) 
		{ 
			scanf("%d",&a[i][j]);
		} 
	} 
	printf("Enter the elements of the second matrix: \n"); 
	
	for (i=0;i<n;i++) 
	{ 
		for (j=0;j<m;j++) 
		{ 
			scanf("%d",&b[i][j]);
		} 
	} 
	addition(a,b,n,m); 
	
	return 0; 
}