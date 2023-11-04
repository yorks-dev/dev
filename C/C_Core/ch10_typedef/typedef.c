#include <stdio.h>

typedef struct {
    char *name;
    int age, roll;
}Student;

void change_name(Student *Student, char *new_name){
    Student->name = new_name; 
}

void change_roll(Student *Student, int roll){
    (*Student).roll = roll;
}

int main(){

    Student student1 = {.name = "Ayush", .age=20, .roll = 1};

    printf("Name : %s, Age : %d, Roll : %d\n", student1.name, student1.age, student1.roll);
    change_name(&student1, "Ayush Dutta");
    printf("Name : %s, Age : %d, Roll : %d\n", student1.name, student1.age, student1.roll);
    change_roll(&student1, 10);
    printf("Name : %s, Age : %d, Roll : %d\n", student1.name, student1.age, student1.roll);

}