#include<stdio.h>
void binSearch(int *arr,int ele,int *posn,int low,int high,int *found){
int mid=(low+high)/2;
if(arr[mid]==ele){
*posn=mid+1;
*found=1;
return;
}
if(arr[mid]>ele)
binSearch(arr,ele,posn,low,mid-1,found);
else
binSearch(arr,ele,posn,mid+1,high,found);
}
int main(){
	int n;
printf("Enter the no of elements");
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int ele;
printf("Enter the element to be searched");
scanf("%d",&ele);
int *posn;

int *found=0;
binSearch(arr,ele,posn,0,n-1,found);
if(*found==1)
printf("Element is found at : %d",*posn);
else
printf("Element not found");
}

