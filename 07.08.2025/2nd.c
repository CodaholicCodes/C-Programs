#include<stdio.h>
void main(){
	printf("Enter the number of elements");
	int n;
	scanf("%d",&n);
char arr[n];
	int i,j;
for(i=0;i<n;i++)
scanf(" %c",&arr[i]);
	for(i=0;i<n-1;i++){
		for(j=1;j<=n-1-i;j++){
			if(arr[j-1]>arr[j]){
				char temp=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Sorted Array: \n");
	for(i=0;i<n;i++)
	printf("%c",arr[i]);
}
