#include<stdio.h>
void main(){
	
char charArray[5];
	int i=0;
for(i=0;i<5;i++)
scanf("%c",&charArray[i]);
//	for(i=0;i<n-1;i++){
//		for(j=1;j<=n-1-i;j++){
//			if(arr[j-1]>arr[j]){
//				char temp=arr[j-1];
//				arr[j-1]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
	printf("Sorted Array: \n");
	for(i=0;i<5;i++)
	printf("%c",charArray[i]);
}
