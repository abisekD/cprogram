#include <stdio.h>

int main()
{
int n,k=0;
printf("enter the number");
scanf("%d",&n);
while(n>0)
{
    n=n/10;
    k++;
}
printf("%d",k);
return 0;
}
