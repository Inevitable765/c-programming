#include<stdio.h>
int main()
{
    float basic_salary, dallowance, house_rent, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%f",&basic_salary);

    dallowance = 0.5 * basic_salary;
    house_rent = 0.2 * basic_salary;

    gross_salary = basic_salary + dallowance + house_rent;

    printf(" Basic Salary: %f\n",  basic_salary);
    printf(" Dearness Allowance: %f\n", dallowance);
    printf(" House Rent: %f\n", house_rent);
    printf(" Gross Salary: %f\n", gross_salary);

    return 0;
}
