#include<stdio.h>
void main(){
	int n;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements\n");
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=1;j<=n-1-i;j++){
			if(arr[j-1]>arr[j]){
				int temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sorted Array: \n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
}
