#include<stdio.h>
void main(){
	int n1,n2;
	printf("Enter the no of rows of arr1");
	scanf("%d",&n1);
printf("Enter the no of columns of arr2");
scanf("%d",&n2);
int arr[n1][n2];
int arr2[n1][n2];
int i=0,j=0;
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		scanf("%d",&arr[i][j]);
	}
}
printf("\n");
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}
printf("\n");
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		scanf("%d",&arr2[i][j]);
	}
}
printf("\n");
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		
		printf("%d ",arr2[i][j]);
	}
	printf("\n");
}
printf("\n");
int res[n1][n2];
for( i=0;i<n1;i++){
	for( j=0;j<n2;j++){
		
		printf("%d ",arr[i][j]+arr2[i][j]);
	}
	printf("\n");
}

}
