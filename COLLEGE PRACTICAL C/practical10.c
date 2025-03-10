#include <stdio.h>
int main()
{
   float TotalMarks , percentage;
    printf("Enter the total marks: ");
    scanf("%f", &TotalMarks);
    percentage = (TotalMarks / 500) * 100;
    printf("The percentage is: %f\n", percentage);
    if (percentage >= 90)
    {
        printf("Grade A");
    }
    else if (percentage >= 80)
    {
        printf("Grade B");
    }
    else if (percentage >= 70)
    {
        printf("Grade C");
    }
    else if (percentage >= 60)
    {
        printf("Grade D");
    }
    else if (percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}