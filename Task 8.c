#include <stdio.h>
#include <string.h>

//TAsk 8

void DisplayMenu(char Appetizer[3][50], char MainCourse[3][50], char Desserts[3][50], float Prices[9]);

int main()
{

    char Appetizer[3][50] = {"Sliced apple  ", "Dates         ", "Chicken strips"};
    char MainCourse[3][50] = {"Steak ", "Burger", "Roll  "};
    char Desserts[3][50] = {"Icecream", "Cake    ", "Custard "};

    float Prices[9] = {1.5, 2.0, 5.0, 15, 9, 8, 9, 15, 12};

    printf("Hi, Welcome to FAST CAFE:\n\n");
    DisplayMenu(Appetizer, MainCourse, Desserts, Prices);

    return 0;
}

void DisplayMenu(char Appetizer[3][50], char MainCourse[3][50], char Desserts[3][50], float Prices[9])
{

    printf("     ***Menu***\n");
    printf("----------------------\n\n");
    printf("APPETIZERS:\n");
    printf("-----------------------\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%s    %.2f\n", Appetizer[i], Prices[i]);
    }

    printf("\n-----------------------\n\n");
    printf("MAIN COURSE:\n");
    printf("-----------------------\n\n");

    for (int i = 0, j = 3; i < 3; i++, j++)
    {
        printf("%s            %.2f\n", MainCourse[i], Prices[j]);
    }

    printf("\n-----------------------\n\n");
    printf("DESSERTS:\n");
    printf("-----------------------\n\n");

    for (int i = 0, j = 6; i < 3; i++, j++)
    {
        printf("%s          %.2f\n", Desserts[i], Prices[j]);
    }

    printf("\n-----------------------\n\n");
    printf("BUDGET OPTIONS:\n");
    printf("-----------------------\n\n");

    printf("Appetizers:\n");
    for (int i = 0; i < 3; i++)
    {
        if (Prices[i] < 10)
        {
            printf("%s    %.2f\n", Appetizer[i], Prices[i]);
        }
    }

    printf("\n");

    printf("MainCourse:\n");
    for (int i = 0, j = 3; i < 3; i++, j++)
    {
        if (Prices[j] < 10)
        {
            printf("%s            %.2f\n", MainCourse[i], Prices[j]);
        }
    }

    printf("\n");

    printf("Desserts:\n");
    for (int i = 0, j = 6; i < 3; i++, j++)
    {
        if (Prices[j] < 10)
        {
            printf("%s          %.2f\n", Desserts[i], Prices[j]);
        }
    }
}

