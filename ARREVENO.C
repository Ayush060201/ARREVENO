#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
int a[100],n,i,j=0,k=0,e[100],o[100];
clrscr();
printf("Enter the size of array =");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("Enter the %dst element =",j+1);
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ if(a[i]%2==0)
    e[j++]=a[i];
  else
    o[k++]=a[i];
}
printf("Even elements of the array are = \n");
for(i=0;i<j;i++)
printf("%d\n",e[i]);
printf("Odd elements of the array are = \n");
for(i=0;i<k;i++)
printf("%d\n",o[i]);
getch();
}