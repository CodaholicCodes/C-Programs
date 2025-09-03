#include<stdio.h>
int main(){
int n;
printf("Enter the no of elements");
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n-1;i++)
scanf("%d",&arr[i]);
printf("Enter the position and element to insert");
int pos,ele;

scanf("%d",&pos);
scanf("%d",&ele);
i=n-1;
while(i>=pos){
arr[i]=arr[i-1];
i--;
}
arr[pos-1]=ele;
for(i=0;i<n;i++)
printf("%d  ",arr[i]);
printf("\n");
if(posn==1)
printf("Best Case");
else if(posn==n)
printf("Worst Case");
else
printf("Average Case");
	return 0;
}

