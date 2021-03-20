#include <stdio.h>
#include <unistd.h>
struct student{
char name[30];
int course;
float gpa;
};
int main()
{
struct student std;
struct student *ptr;
ptr= &std;
printf("Enter details of student: ");
printf("\nName: "); gets(ptr->name);
printf("course: "); scanf("%d", &ptr->course);
printf("gpa: "); scanf("%f",&ptr->gpa);
printf("\nEntered details: ");
printf("\nName:%s \ncourse: %d \ngpa: %.02f\n",ptr->name,ptr->course,ptr->gpa);
sleep (3);
return 0;
}