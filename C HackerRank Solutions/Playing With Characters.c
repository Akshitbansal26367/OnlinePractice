#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() 
{
    char ch,s[CHAR_MAX],a[50],b[50],c[50];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",s);
    printf("%s\n",s);
    scanf("%s%s%s",a,b,c);
    printf("%s %s %s",a,b,c);
    return 0;
}
