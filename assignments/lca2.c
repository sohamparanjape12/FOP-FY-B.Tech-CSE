#include <stdio.h>

int main() {

    struct Student {
        char name[50];
        int roll_number;
        float m1, m2, m3, m4, m5;
        float result;
    };

    struct Student students[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);   
    
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Marks for 5 subjects: ");
        scanf("%f %f %f %f %f", &students[i].m1, &students[i].m2, &students[i].m3, &students[i].m4, &students[i].m5);
        
        students[i].result = (students[i].m1 + students[i].m2 + students[i].m3 + students[i].m4 + students[i].m5) / 5;
    }

    printf("\nResults:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll_number);
        printf("Result: %.2f\n\n", students[i].result);
    }

    return 0;
}