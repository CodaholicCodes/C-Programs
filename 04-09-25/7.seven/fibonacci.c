#include <stdio.h>
int fibo(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
int n;
printf("\nEnter the posn upto which series you need");
scanf("%d",&n);
printf("0 , 1 ,");
for(int i=2;i<n;i++){
    printf("%d , ",fibo(i));
}
 return 0;
}