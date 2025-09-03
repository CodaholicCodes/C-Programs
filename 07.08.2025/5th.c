#include<stdio.h>
void main(){
	int n1,n2,i,j;
	printf("Enter the no of rows of arr1");
	scanf("%d",&n1);
printf("Enter the no of columns of arr1");
scanf("%d",&n2);
int arr[n1][n2];
printf("Enter the elements of arr1 %d",n1*n2);
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		scanf("%d",&arr[i][j]);
	}
}
for(i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}
int arr2[n2][n1];
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		arr2[j][i]=arr[i][j];
	}
}
printf("Transpose of matrix \n\n");
for( i=0;i<n2;i++){
	for( j=0;j<n1;j++){
		printf("%d ",arr2[i][j]);
	}
	printf("\n");
}
}

