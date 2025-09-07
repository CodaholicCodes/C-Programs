#include <stdio.h>
int factorialCalculator(int n){
    if(n==0 || n==1) return 1;
    return n*factorialCalculator(n-1);
}
int main(){
    int n;
    printf("Enter the number to calculate factorial");
    scanf("%d",&n);
    int fact=factorialCalculator(n);
     printf("Factorial of %d is %d",n,fact);
    return 0;
}