#include <stdio.h>

int main() {
    int total_departments;
    printf("Entrez le nombre total de d�partements dans l'entreprise : ");
    scanf("%d", &total_departments);

    double total_salary = 0;

    for (int i = 1; i <= total_departments; i++) {
        int num_employees;
        printf("\nD�partement %d :\n", i);
        printf("Entrez le nombre d'employ�s : ");
        scanf("%d", &num_employees);

        double department_salary = 0;

        for (int j = 1; j <= num_employees; j++) {
            double salary;
            printf("Entrez le salaire mensuel de l'employ� %d : ", j);
            scanf("%lf", &salary);
            department_salary += salary;
        }

        printf("La masse salariale du d�partement %d est : %.2f\n", i, department_salary);
        total_salary += department_salary;
    }

    printf("\nLa masse salariale mensuelle de l'entreprise est : %.2f\n", total_salary);

    return 0;
}
