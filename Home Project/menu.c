#include<stdio.h>

double ave(int grade[], int size)
{
    int sum = 0;
    for (int i=0; i<size; i++)
        sum+=grade[i];
    return (double)sum/size;
}

int high(int grade[],int size)
{
    int x = grade[0];
    for(int i=1; i<size; i++)
    {
        if(grade[1]>x)
            x=grade[i];
    }
    return x;
}

int low(int grade[], int size)
{
    int x=grade[0];
    for(int i=1; i<size; i++)
    {
        if(x>grade[i])
            x=grade[i];
    }
    return x;
}

int main()
{
    printf("Welcome to Student Grade Analysis!\n");
    printf("Enter the number of students: ");
    int num;
    scanf("%d", &num);

    int grade[num];
    printf("\nEnter the grades of the students:\n");

    for(int i=0; i<num; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%d", &grade[i]);
    }
    int choice = 0;
    while (choice != 4)
    {
        printf("\nMenu:\n");
        printf("1. Calculate average grade\n");
        printf("2. Find highest grade\n");
        printf("3. Find lowest grade\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nAverage grade of the class: %.2f\n", ave(grade, num));
        }
        else if (choice == 2)
        {
            printf("\nHighest grade in the class: %d\n", high(grade, num));
        }
        else if (choice == 3)
        {
            printf("\nLowest grade in the class: %d\n", low(grade, num));
        }
        else if (choice == 4)
        {
            printf("\nThank you for using Student Grade Analysis!\n");
        }
        else
        {
            printf("\nInvalid choice. Please choose again.\n");
        }
    }
}

