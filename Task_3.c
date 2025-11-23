#include <stdio.h>
#include <string.h>

// TASK 3

int main()
{

    char str[50];
    int Vowels = 0, Consonents = 0, Digits = 0, Spaces = 0, length;

    printf("Text: ");
    gets(str);

    length = strlen(str);

    for (int i = 0; i < length; i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {

            str[i] -= 32;
        }

        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            Consonents++;
        }

        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

            Vowels++;
        }

        if (str[i] >= '0' && str[i] <= '9')
        {
            Digits++;
        }

        if (str[i] == ' ')
        {
            Spaces++;
        }
    }

    printf("\n\nStatistics:\n");
    printf("Vowels: %d\n", Vowels);
    printf("Consonents: %d\n", Consonents);
    printf("Digits: %d\n", Digits);
    printf("Spaces: %d\n", Spaces);
    printf("Total Characters: %d", length);

    return 0;
}