#include<stdio.h>
void main(){
char c[100];
printf("Enter the string1");
scanf("%s",&c);
char rev[100];
int i=0,len=0;
while(c[i]!='\0'){
	i++;
	len++;
}
int j=0;
i--;
while(j<len){
	rev[j]=c[i];
	i--;
	j++;
}
printf("%s",rev);
}
