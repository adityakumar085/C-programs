#include <stdio.h>
#include <string.h> // Include the string.h header file for strcpy()

// Define a structure named 'Student' to hold student information
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    // Declare a variable 'student1' of type 'Student'
    struct Student student1;

    // Assign values to the members of 'student1'
    student1.rollNumber = 101;
    strcpy(student1.name, "John Doe"); // Corrected line
    student1.marks = 85.5;

    // Print the information of 'student1'
    printf("Student Information:\n");
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    return 0; // Return success code
}