#include<stdio.h>
#include<conio.h>

int main()
{
    float english, nepali, maths, science, socialStudies, computerScience, optionalMathematics, environmentScience;
    float totalScoredMarks, percentage, gpa;
    char studentName[50];
    printf("Enter Name of Student:\n");
    scanf("%s", &studentName);
    printf("Enter marks obtained by %s in English: ", studentName);
    scanf("%f", &english);
    if (english<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in English: ", studentName);
        scanf("%f", &english);
    }
    printf("Enter marks obtained by %s in Nepali: ", studentName);
    scanf("%f", &nepali);
    if (nepali<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in Nepali: ", studentName);
        scanf("%f", &nepali);
    }
    printf("Enter marks obtained by %s in Mathematics: ", studentName);
    scanf("%f", &maths);
    if (maths<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in Mathematics: ", studentName);
        scanf("%f", &maths);
    }
    printf("Enter marks obtained by %s in Science: ", studentName);
    scanf("%f", &science);
    if (science<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in Science: ", studentName);
        scanf("%f", &science);
    }
    printf("Enter marks obtained by %s in Social Studies: ", studentName);
    scanf("%f", &socialStudies);
    if (socialStudies<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in Social Studies: ", studentName);
        scanf("%f", &socialStudies);
    }
    printf("Enter marks obtained by %s in Computer Science: ", studentName);
    scanf("%f", &computerScience);
    if (computerScience<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in Computer Science: ", studentName);
        scanf("%f", &computerScience);
    }
    printf("Enter marks obtained by %s in Optional Mathematics: ", studentName);
    scanf("%f", &optionalMathematics);
    if (optionalMathematics<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in Optional Mathematics: ", studentName);
        scanf("%f", &optionalMathematics);
    }
    printf("Enter marks obtained by %s in Environmental Science: ", studentName);
    scanf("%f", &environmentScience);
    if (environmentScience<0)
    {
        printf("Sorry User, the input you've entered is invalid.");
        printf("\nEnter marks obtained by %s in Environmental Science: ", studentName);
        scanf("%f", &environmentScience);
    }
    totalScoredMarks=english+nepali+maths+science+socialStudies+computerScience+optionalMathematics+environmentScience;
    percentage=(totalScoredMarks/800)*100;
    gpa=(percentage/25);
    printf("Therefore,\n");
    printf("\tTotal Marks Scored by %s = %.2f", studentName, totalScoredMarks);
    printf("\n\tPercentage Scored by %s = %.2f%%", studentName, percentage);
    printf("\n\tGPA Scored by %s = %.2f", studentName, gpa);
    if (percentage>40 && gpa>2.8)
    {
        printf("\nCongratulations, %s has passed this Examination.", studentName);
    }
    else
    {
        printf("\nSorry, %s you have failed this Examination.\nBetter Luck Next Time.", studentName);
    }
    getch();
    return 0;
}