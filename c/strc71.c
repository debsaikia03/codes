#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
    
};

int main() {
    int i;
    struct Student students[50];

    for (i = 0; i < 50; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
 
    }
    printf("Grade Details:\n");
    for (i = 0; i < 50; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
       
        printf("\n");
    }

   return 0;
}
