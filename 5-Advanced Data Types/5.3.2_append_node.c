/* 
Your new task is to write a function append() which takes as input two pointers: the first pointer holds 
the address of the current end of the linked list of students, the second pointer points to a newly 
created student. Your function should append this new student to the linked list and return the address 
(a struct student *) of the new end of the list. 
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
struct student * append(struct student *end, struct student *newStudptr);

int main(void) {
    struct student *start. *newStudptr, *end, *tmp;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);
    start = create ("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printf("%s is %d years old.\n", start->name, start->age);
    printf("%s is %d years old.\n", start->next->name, start->next->age);
    printf("%s is %d years old.\n", start->next->next->name, start->next->next->age);
    
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

