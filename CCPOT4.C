/*WAP TO FIND SIMPLE INTEREST*/
#include<stdio.h>
#include<conio.h>
main()
{
float si,p,t,r;
clrscr();
printf("enter ptr values\n");
scanf("%f%f%f",&p,&t,&r);
si=0.01*p*t*r;
printf("simple interest=%f",si);
return 0;
}