#include <stdio.h>

int main()
{
char ch;
printf("enter the variable");
scanf("%c",&ch);
if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
printf("Alphabetet");
else
printf("No");
return 0;
}
