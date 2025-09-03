#include<stdio.h>
int binSearch(int *arr,int ele,int low,int high){
	if(low>high) return -1;
int mid=(low+high)/2;
if(arr[mid]==ele){
return mid+1;
}
if(arr[mid]>ele)
return binSearch(arr,ele,low,mid-1);
else
return binSearch(arr,ele,mid+1,high);
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
int posn=binSearch(arr,ele,0,n-1);
if(posn!=-1){

printf("Element is found at : %d",posn);
printf("/n");
if(posn==1)
printf("Best Case");
else if(posn==n)
printf("Worst Case");
else
printf("Average Case");
}
else
printf("Element not found");

}

