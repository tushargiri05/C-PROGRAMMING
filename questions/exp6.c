#include <stdio.h>
int main() {
    char employee_name[50];
    float basic_salary, hra, da, gross_salary, income_tax, net_salary;

    printf("--- Employee Salary Calculator ---\n");
    printf("Enter Employee Name (single word): ");
    scanf("%s", employee_name); 
    
    printf("Enter Basic Salary: ");
    if (scanf("%f", &basic_salary) != 1 || basic_salary < 0) {
        printf("Invalid or negative basic salary.\n");
        return 1;
    }
    hra = 0.20 * basic_salary;
    da = 0.10 * basic_salary;
    gross_salary = basic_salary + hra + da;
    income_tax = 0.05 * gross_salary;
  net_salary = gross_salary - income_tax;
    printf("\n--- Salary Slip for %s ---\n", employee_name);
    printf("Basic Salary: %.2f\n", basic_salary);
    printf("HRA (20%%): + %.2f\n", hra);
    printf("DA (10%%): + %.2f\n", da);
    printf("----------------------------------------\n");
    printf("Gross Salary:   %.2f\n", gross_salary);
    printf("Income Tax (5%%): - %.2f\n", income_tax);
    printf("----------------------------------------\n");
    printf("NET SALARY:     %.2f\n", net_salary);
    printf("----------------------------------------\n");
    return 0;
}