#include <stdio.h>

int main() {
    int n = 0;

    // Input number of courses
    while (n <= 0) {
        printf("Enter number of courses (n): ");
        if (scanf("%d", &n) == 1) {
            if (n <= 0) {
                printf("Error: Number of courses must be greater than 0.\n");
            }
        } else {
            printf("Error: Invalid input. Please enter a valid integer.\n");
            while (getchar() != '\n'); // Clear invalid input buffer
        }
    }

    double totalCredits = 0.0;
    double totalWeightedPoints = 0.0;

    for (int i = 1; i <= n; i++) {
        printf("\nCourse %d\n", i);

        double Ci = -1;

        // Input course credit
        while (Ci <= 0) {
            printf("Enter credit (Ci): ");
            if (scanf("%lf", &Ci) == 1) {
                if (Ci <= 0) {
                    printf("Error: Credit must be greater than 0.\n");
                    Ci = -1;
                }
            } else {
                printf("Error: Invalid input. Please enter a valid number.\n");
                while (getchar() != '\n');
            }
        }

        double Gi = -1;

        // Input grade point
        while (Gi < 0 || Gi > 4.0) {
            printf("Enter grade point (Gi): ");
            if (scanf("%lf", &Gi) == 1) {
                if (Gi < 0 || Gi > 4.0) {
                    printf("Error: Grade point must be between 0.0 and 4.0.\n");
                    Gi = -1;
                }
            } else {
                printf("Error: Invalid input. Please enter a valid number.\n");
                while (getchar() != '\n');
            }
        }

        totalCredits += Ci;
        totalWeightedPoints += Ci * Gi;
    }

    double GPA = totalWeightedPoints / totalCredits;

    printf("\nTotal Credits = %.2f\n", totalCredits);
    printf("GPA = %.2f\n", GPA);

    return 0;
}
