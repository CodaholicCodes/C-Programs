#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter the no of rows of arr1");
	scanf("%d",&n1);
printf("Enter the no of columns of arr1");
scanf("%d",&n2);
int arr[n1][n2];
printf("Enter the columns of arr2");
int col;
scanf("%d",&col);
int arr2[n2][col];
int i,j,k;
printf("Enter the elements of arr1 %d",n1*n2);
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		scanf("%d",&arr[i][j]);
	}
}
printf("Enter the elements of arr2 %d ",n2*col);
for( i=0;i<n2;i++){
	for( j=0;j<col;j++){
		scanf("%d",&arr2[i][j]);
	}
}
int result[n1][col];
for(i=0;i<n1;i++){
	for(j=0;j<col;j++){
		result[i][j]=0;
	}
}
for(i=0;i<n1;i++){
	for(j=0;j<col;j++){
		for(k=0;k<n2;k++){
			result[i][j]+=(arr[i][k]*arr2[k][j]);
		}
	}
}
for( i=0;i<n1;i++){
	for( j=0;j<col;j++){
		printf("%d ",result[i][j]);
	}
	printf("\n");
}
}
