/* 
Your new task is to write a function printStudents() which takes as input a pointer that holds the address 
of the start of a linked list of students. Your function should then print this list of students to the 
screen as specified in the example below. Your function should not return anything.
*/

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[50], int studentAge);
struct student * append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
void copyString(char source[], char destination[]);

int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;

    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    tmp = start->next;

    free(start);

    start = tmp;
    tmp = start->next;

    free(start);
    free(tmp);

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

struct student * append(struct student *end, struct student *newStudptr){

    end->next = newStudptr;
    end = newStudptr;
    return(end);
}

void printStudents(struct student *start){
    struct student *ptr = start;
    while(ptr != NULL){
        printf("%s is %d years old.\n", ptr->name, ptr->age);
        ptr = ptr->next;
    }
    
}