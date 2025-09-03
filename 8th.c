#include<stdio.h>
void main(){
char c[100];
printf("Enter the string1");
scanf("%s",&c);
printf("Enter another string");
char c1[10];
scanf("%s",&c1);
int i=0,k=0;
char cString[100];
while(c[i]!='\0'){
	cString[k]=c[i];
	k++;
	i++;
}
int j=0;
while(c1[j]!='\0'){
	cString[k]=c1[j];
	k++;
	j++;
}
cString[k]='\0';
printf("Concatenated String : %s",cString);
}
