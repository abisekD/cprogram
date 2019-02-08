#include <stdio.h>

int main()
{
    char a;
    printf("enter variable");
    scanf("%d",&a);
    if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U')
    {
        printf("vowel");
    }
        else
        {
            printf("consonants");
        }
return 0;
}
