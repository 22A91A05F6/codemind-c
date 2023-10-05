#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int p;
    scanf("%[^
]s",st);
    p=strlen(st);
    if (p==10)
    printf("Valid");
    else
    printf("Invalid");
}