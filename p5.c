#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char temp;
    int len,i;

    /* READ STRING FROM USER */
    printf("Enter the string:\n");
    scanf("%s",str);

    len = strlen(str);

    for( i = 0; i < len/2; i++ )
    {
        temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }

    /* PRINTING THE REVERSED STRING */
    printf("Reversed string is %s\n",str);

    return 0;
}