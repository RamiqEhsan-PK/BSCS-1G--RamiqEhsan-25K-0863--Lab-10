#include <stdio.h>
#include <string.h>

// TASK 5

typedef struct
{

    char Name[100][50];
    int Marks[100];

} Students;

int main()
{

    int Num, Highest = 0, HighestScorerID;
    float Average = 0.0, Sum = 0.0;
    Students List;

    printf("Enter number of students: ");
    scanf(" %d", &Num);

    for (int i = 0; i < Num; i++)
    {

        printf("\nStudent %d Name: ", i + 1);
        getchar();
        gets(List.Name[i]);

        printf("Student %d Marks: ", i + 1);
        scanf(" %d", &List.Marks[i]);

        if (List.Marks[i] > Highest)
        {

            Highest = List.Marks[i];
            HighestScorerID = i;
        }
        Sum += List.Marks[i];
        Average = Sum / (i + 1);
    }

    printf("\nStudent Marks:\n\n");
    printf("Name        Marks\n");
    printf("-----------------\n");

    for (int i = 0; i < Num; i++)
    {
        printf("%s      %d\n", List.Name[i], List.Marks[i]);
    }

    printf("\nHighest Scorer: %s with %d marks", List.Name[HighestScorerID], List.Marks[HighestScorerID]);
    printf("\nAverage Marks: %.2f", Average);

    return 0;
}
