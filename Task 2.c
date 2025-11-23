#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// TASK 2

void DomainExtract(char email[]);

int main()
{

    char email[50] = {0};
    int Num;

    printf("Enter amount of emails to extract from: ");

    scanf(" %d", &Num);

    printf("Email Domain Extraction:\n\n");
    getchar();

    for (int i = 0; i < Num; i++)
    {
        printf("Email: ");
        fgets(email, sizeof(email), stdin);

        email[strcspn(email, "\n")] = '\0';

        DomainExtract(email);
    }

    return 0;
}

void DomainExtract(char email[])
{
    bool IsValid = false;

    printf("Domain: ");

    for (int i = 0; email[i] != '\0'; i++)
    {
        if (i > 0 && email[i - 1] == '@') // i>0 so that when its run i-1 doesnt crash the program.
        {
            IsValid = true;
            for (int j = i; email[j] != '\0'; j++)
            {
                printf("%c", email[j]);
            }
        }
    }

    if (IsValid == false)
    {
        printf("Invalid email");
    }

    printf("\n\n");
}
