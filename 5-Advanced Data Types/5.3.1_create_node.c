/* You would like to store student data (for each student, their name and age) in a linked list of students

Your first task is to write a function createStudent() that takes as inputs a string (namely a student's 
name) and an integer (their age) and that returns a pointer to a struct student which stores this 
information. Your function should dynamically allocate the memory required for this struct student 
and then write the student's name and age into this newly allocated memory. 
*/

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
void copyString(char source[], char destination[]);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student * createStudent(char studentName[], int studentAge){
    
    struct student * ptr;

    ptr = (struct student *) malloc(sizeof(struct student));
    copyString(studentName,ptr->name);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}

void copyString(char source[], char destination[]){

    int i = 0;

    while (source[i]!= '\0'){
        destination[i] = source[i];
        i++;
    }
    destination[i]='\0';
}
