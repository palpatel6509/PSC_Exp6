#include<stdio.h>
#include<string.h>
int main()
{
    char a = 't';
    char str[30];
    int len;
    int left,right;

    /* READ STRING FROM USER */
    printf("Enter the String:\n");
    scanf("%s",str);

    len = strlen(str);
    left = 0;
    right = len-1;

    /* CHECK THE STRING */
    while( left < right && a == 't' )
    {
        if( str[left] != str[right] )
            a = 'f';

        left++;
        right--;
    }

    if( a == 't' )
    {
        printf("\nThe String %s is Palindrome\n",str);
    }
    else
    {
        printf("\nThe String %s is NOT Palindrome\n",str);
    }

    return 0;
}