#include <stdio.h>

struct Student{
  char name[50];
  int rollno;
  char department[30];
  int age;
  float marks;
  };

  int main(){
  struct Student s[5];
  int i;

  printf("Enter 5 Student Details\n");

  for(i=0;i<5;i++){
     printf("\nStudent%d Details\n",i+1);

     printf("Enter Name: ");
     scanf("%s", s[i].name);

     printf("Enter Roll Number:");
     scanf("%d", &s[i].rollno);

     printf("Enter Department:");
     scanf("%d", &s[i].department);

     printf("Enter Age:");
     scanf("%d", &s[i].age);

     printf("Enter Marks:");
     scanf("%d", &s[i].marks);
     }

     printf("\n---Student Details---\n");

     for(i=0;i<5;i++){
     printf("\nStudent%d\n",i+1);
     printf("Name: %s\n", s[i].name);
     printf("Roll No: %d\n", s[i].rollno);
     printf("Department: %s\n",
 s[i].department);
     printf("Age: %d\n", s[i].age);
     printf("Marks: %.2d\n", s[i].marks);
     }

     return 0;
     }



