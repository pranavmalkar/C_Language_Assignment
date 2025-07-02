#include <stdio.h>
struct Student
{
    int id;
    char name[20];
    int age;
};
void display(struct Student);
struct Student accept(struct Student);
int main()
{
    struct Student s1 = {101, "Saifali", 21}; 
    s1 = accept(s1);
    display(s1);
    return 0;
}
struct Student accept(struct Student s1)
{
    printf("\n ------ Enter the student Details ---------- \n");
    printf("\n Enter the id : = ");
    scanf("%d",&s1.id);
    printf("\n Enter the name : = ");
    scanf("%s",&s1.name);
    printf("\n Enter the age : = ");
    scanf("%d",&s1.age);
    return s1 ;
}
void display(struct Student s1)
{
    printf("\n ------ the student Details ---------- \n");
    printf("\n the student id : = %d ", s1.id);
    printf("\n the student name  : = %s ", s1.name);
    printf("\n the student age : = %d ", s1.age);
}