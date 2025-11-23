#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Task 7

typedef struct
{
    char Name[4][50]; // The index is the student ID representing each student
    int CourseCount[4];
    int physics[4];
    int English[4];
    int Math[4];

} Form;

int main()
{
    int Command;
    Form List;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter Student %d's Name: ", i + 1);

        gets(List.Name[i]);

        printf("\nDoes Student %d's take:\n", i + 1);

        printf("MATHEMATICS.  (1) yes (2) no: ");
        scanf(" %d", &List.Math[i]);

        printf("PHYSICS (1 yes/ 0 no): ");
        scanf(" %d", &List.physics[i]);

        printf("ENGLISH (1 yes / 0 no): ");
        scanf(" %d", &List.English[i]);

        getchar();

        List.CourseCount[i] = List.physics[i] + List.Math[i] + List.English[i];

        printf("\n\n");
    }

    while (true)
    {

        printf("\n\nEnter command:\n\n");
        printf("1. Show each students registered courses.\n");
        printf("2. Find students taking a specific course.\n");
        printf("3. Identify overloaded students.\n");
        printf("4. Exit Program.\n\n");
        printf("Command: ");
        scanf(" %d", &Command);

        switch (Command)
        {

        case 1:

            for (int i = 0; i < 4; i++)
            {

                printf("\n\nStudent %s is enrolled in:\n", List.Name[i]);
                if (List.Math[i] == 1)
                {
                    printf("Math.\n");
                }

                if (List.physics[i] == 1)
                {
                    printf("Physics.\n");
                }

                if (List.English[i] == 1)
                {
                    printf("English.\n");
                }
            }
            break;

        case 2:
            printf("\nChoose course: 1 for Math, 2 for physics, 3 for English.\n");
            scanf(" %d", &Command);

            for (int i = 0; i < 4; i++)
            {

                if (Command == 1 && List.Math[i] == 1)
                {

                    printf("%s is enrolled.\n", List.Name[i]);
                }

                if (Command == 2 && List.physics[i] == 1)
                {

                    printf("%s is enrolled.\n", List.Name[i]);
                }

                if (Command == 3 && List.English[i] == 1)
                {

                    printf("%s is enrolled.\n", List.Name[i]);
                }
            }

            break;

        case 3:

            printf("\n\n");

            for (int i = 0; i < 4; i++)
            {

                if (List.CourseCount[i] > 2)
                {

                    printf("%s is overloaded.\n", List.Name[i]);
                }
            }
            break;

        case 4:
            return 0;
        }
    }
}
