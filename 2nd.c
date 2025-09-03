#include<stdio.h>
int main(){
int n;
printf("Enter the no of elements");
scanf("%d",&n);
int arr[n],i;
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter the position of the element to be deleted");
int posn;
scanf("%d",&posn);
i=posn-1;
while(i<n-1){
arr[i]=arr[i+1];
i++;
}
for(i=0;i<n-1;i++)
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

