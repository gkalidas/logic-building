// Accept one character from user and convert case of that number with using built-in library.

#include<stdio.h>
#include<ctype.h>

void DisplayConvert(char cValue)
{
    if(islower(cValue))
    {
        printf("%c", toupper(cValue));
    }
    else if(isupper(cValue))
    {
        printf("%c", tolower(cValue));
    }
    else
    {
        printf("Given character is not an alphabet.");
    }
}

int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf(" %c", &cValue);
    DisplayConvert(cValue);
    return 0;
}
