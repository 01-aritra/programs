/*Q: Write a C program that uses a pointer to a structure to store
information about a student, including their name, age, and GPA. 
The program should prompt the user to enter this information, 
and then display it back to the user using the pointer.*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() {
    struct Student *ptr;

    // Allocate memory for the structure
    ptr = (struct Student*) malloc(sizeof(struct Student));

    // Prompt the user for information
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter age: ");
    scanf("%d", &ptr->age);
    printf("Enter GPA: ");
    scanf("%f", &ptr->gpa);

    // Display the information back to the user
    printf("\nStudent Information:\n");
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("GPA: %.2f\n", ptr->gpa);

    // Free the allocated memory
    free(ptr);

    return 0;
}
