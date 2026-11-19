#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i;

    /* READ THE STRING BY USER */
    printf("Enter the First String:\n");
    scanf("%s",str1);

    printf("Enter the Second String:\n");
    scanf("%s",str2);

    /* COMPARING TWO STRINGS USING STRING FUNCTION */
    if( strcmp( str1,str2 ) == 0 )
    {
        printf("Given Strings are SAME\n");
    }

    else 
    {
        printf("Given Strings are NOT SAME\n");
    }

    return 0;
}