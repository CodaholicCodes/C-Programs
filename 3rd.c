#include<stdio.h>

int main(){
int n;
printf("Enter the no of elements");
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the element to be searched");
int ele,posn;
scanf("%d",&ele);
	int found=0,low=0,high=n-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]==ele){
posn=mid+1;
printf("Element is found at: %d",posn);
printf("\n");
if(posn==1)
printf("Best Case");
else if(posn==n)
printf("Worst Case");
else
printf("Average Case");
return 0;
}
else if(arr[mid]>ele)
high=mid-1;
else
low=mid+1;
}
printf("Element not found");

return 0;
}
