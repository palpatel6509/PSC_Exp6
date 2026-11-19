#include<stdio.h>
#include<string.h>
int main()
{
    char mainString[200],subString[100];
    int i,j;
    int mainLen,subLen;
    int foundIndex = 0;

    /* READ MAIN STRING FROM USER */
    printf("Enter the Main String:\n");
    scanf(" %[^\n]",mainString);

    /* READ SUB STRING FROM USER */
    printf("Enter the Sub String:\n");
    scanf(" %[^\n]",subString);

    mainLen = strlen(mainString);
    subLen = strlen(subString);

    for(  i = 0; i <= mainLen - subLen; i++ )
    {
        for( j = 0; j < subLen; j++ )
        {
            if( mainString[ i + j ] != subString[j] )
            {
                break;
            }
        }

        if( j == subLen )
        {
            printf("Sub String found at index: %d \n",i);
            foundIndex++;
        }
    }

    if( foundIndex == 0 )
    {
        printf("Sub String NOT found\n");
    }
       
    return 0;
}