#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char temp;
    int i,j,len;

    /* RAED STRING FROM USER */
    printf("Enter the String:\n");
    scanf("%[^\n]",str);

    len = strlen(str);

    for( i = 0; i < len-1; i++ )
    {
        for( j = 0; j < len-1-i; j++ )
        {
            if( str[j] > str[j+1] )
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }

    /* PRINTING THE SORTED STRING */
    printf("\nSorted String is \"%s\"\n",str);

    return 0;
}