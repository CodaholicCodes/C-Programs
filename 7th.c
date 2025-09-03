#include<stdio.h>
void main(){
char c[10];
printf("Enter the string");
scanf("%s",&c);
char *ptr=c;
int vowels=0,consonant=0,i=0;
while(c[i]!='\0')
{
	if(c[i]=='a' || c[i]=='i' || c[i]=='e' || c[i]=='o' || c[i]=='u')
	vowels++;
	else
	consonant++;
	i++;
}
printf("No of vowels : %d\n",vowels);
printf("No of consonants : %d",consonant);
}
