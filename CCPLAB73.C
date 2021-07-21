#include<stdio.h>
#include<conio.h>
void main()
{
char s[20],r[20];
int i,j,l=0;
clrscr();
printf("input a string\n");
gets(s);
while(s[I] !='\0')
I++;
j=I-1;
for(i=0;i<I;i++)
{
r[i]=s[j];
j--;
}
r[i]='\0';
printf("\n the reversed string is \n");
puts(r);
getch();
}
