#include <stdio.h>
int AckerMannFunction(int m, int n){
    if(m==0) return n+1;
    else if( m>0 && n==0) return AckerMannFunction(m-1,1);
    else if(m>0 && n>0) return AckerMannFunction(m-1,AckerMannFunction(m,n-1));
    return 0;
}
int main(){
    int m,n;
    printf("Enter the value of m and n");
    scanf("%d %d",&m,&n);
  int result=AckerMannFunction(m,n);
  printf("The reuslt of the function is : %d ",result);
  return 0;
}