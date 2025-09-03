#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter the no of rows of arr1");
	scanf("%d",&n1);
printf("Enter the no of columns of arr1");
scanf("%d",&n2);
int arr[n1][n2];
int i,j;
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		scanf("%d",&arr[i][j]);
	}
}
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}
int zeroes=0;
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
	if(arr[i][j]==0) zeroes++;
	}
}
printf("No of zeroes: %d",zeroes);
if(zeroes>=(n1*n2)/2) 
printf("sparse Matrix");
else
printf("Not a sparse matrix");
}
