#include<stdio.h>

struct Student
{
    int roll_no;
    char Name;
    float marks;
};
int main(){
    struct Student students[5]={
        {1, "Alice", 85.5},
        {2, "Bob", 76.0},
        {3, "Charlie", 92.5},
        {4, "David", 68.5},
        {5, "Eve", 79.0}
    };
    for (int i = 0; i < 5; i++)
    {
        printf("Roll: %d , Name: %c , Marks: %.1f\n", students[i] .roll_no, students[i] .Name, students[i] .marks );
    }
    return 0;   
    
    
}
