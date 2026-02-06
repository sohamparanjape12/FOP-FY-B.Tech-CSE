#include <stdio.h>
void main () {

    // Assignment 04
    /*
        Program to calculate salary of an employee given base salary.
        Calculate gross salary and net salary.
        HRA = 10% of base salary
        TA = 5% of base salary
        Profession Tax = 2% of total salary
    */

    float basicPay, hra, ta, grossSalary, professionTax, netSalary;

    printf("Base Salary: ");
    scanf("%f", &basicPay);

    hra = 0.10 * basicPay;
    ta = 0.05 * basicPay;
    grossSalary = basicPay + hra + ta;
    professionTax = 0.02 * grossSalary;
    netSalary = grossSalary - professionTax;
    
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);
}