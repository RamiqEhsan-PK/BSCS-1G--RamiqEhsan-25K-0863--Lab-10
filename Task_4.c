#include <stdio.h>
#include <string.h>

// TASK 4

void encrypt(char message[]);
void decrypt(char message[]);

int main()
{

    char message[50];

    printf("Original: ");
    gets(message);

    printf("\n");

    encrypt(message);
    decrypt(message);

    return 0;
}

void encrypt(char message[])
{

    for (int i = 0; i < strlen(message); i++)
    {

        message[i] += 3;
    }

    printf("Encrypted: %s\n\n", message);
}

void decrypt(char message[])
{

    for (int i = 0; i < strlen(message); i++)
    {

        message[i] -= 3;
    }

    printf("Decrypted: %s", message);
}