#include<stdio.h>
int main()
{
    char str[1000];
    int i = 0;
    int len = 0;

    /* READ A STRING FROM USER */
    printf("Enter a String:\n");
    scanf("%s",str);

    /* CONVERTING THE STRING */
    while( str[i] != '\0')
    {
        if( str[i] >= 'a' && str[i] <= 'z' )
        {
            str[i] -= 32; // LOWERCASE TO UPPERCASE
        }

        else if ( str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] += 32; // UPPERCASE TO LOWERCASE
        }

        len++;
        i++;
    }
    
    /* PRINTING THE STRING AFTER CONVERTION */
    printf("\nConverted String: %s\n",str);

    /* PRINTING NUMBERS OF CHARACTER OF A GIVEN STRING*/
    printf("Numbers of a Character of a given String: %d\n",len);

    return 0;
}