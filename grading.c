#include <stdio.h>

int main()
{
    int marks;
    char grade;
    printf("Input your marks\n");
    printf("Enter Marks:  ");
    scanf("%d", &marks);

    // 85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F

    if (85 <= marks && marks <= 100) //check range of grade between 85 - 100 if true than it will execute
    {
        grade = 'A';
    }
    else if (70 <= marks && marks <= 84) //check range of grade between 70 - 84 if true than it will execute
    {
        grade = 'B';
    }
    else if (55 <= marks && marks <= 69) //check range of grade between 55 - 69 if true than it will execute
    {
        grade = 'C';
    }
    else if (40 <= marks && marks <= 54) //check range of grade between 40 - 54 if true than it will execute
    {
        grade = 'D';
    }
    else //will execute when all if conditions are false that is grade less than 40
    {
        grade = 'F';
    }

    printf("Your grade: %c", grade);
    return 0;
}
