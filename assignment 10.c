//program to calculate cut off marks 
#include<stdio.h>
int main()
{
    float mathematics, physics,chemistry,entrance_examination,cut_off_marks;
    printf("Enter marks of mathematics out of 200\n");
    scanf("%f", & mathematics);
    printf("Enter marks of physics out of 200\n");
    scanf("%f", & physics);
    printf("Enter marks of chemistry out of 200\n");
    scanf("%f", & chemistry);
    printf("Enter marks of entrance_examination out of 100\n");
    scanf("%f", &entrance_examination);
    cut_off_marks=(mathematics+physics+chemistry)/2+entrance_examination;
    printf("cut_off_marks=%f\n", cut_off_marks);
    return 0;
    }