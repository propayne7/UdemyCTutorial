#include <stdio.h>

/* Challenge -> create a C program that calculates your weekly pay
    - program should ask the user to enter # of hours worked in a week via keyboard
    - program should display as output the gross pay, the taxes, and the net pay
    - following assumptions:
        - basic pay rate = $12.00/hr
        - Overtime (in excess of 40 hours) = time and a half
        - Tax rate:
            - 15% of the first $300
            - 20% of the next $150
            - 25% of the rest
 */

int main ()
{
    int hourlyWage, hoursWorked, overtimeWage, weeklyGrossPay, weeklyOverTimePay;
    double taxRate1, taxRate2, taxRate3, taxes, weeklyNetPay;

    hourlyWage = 12;
    overtimeWage = hourlyWage * 1.5;

    taxRate1 = .15;
    taxRate2 = .2;
    taxRate3 = .25;

    printf("Enter the number of hours worked this week: ");
    scanf("%d", &hoursWorked);

    // determine if overtime is applicable, calc overtime rate if true
    weeklyOverTimePay = hoursWorked > 40 ? (hoursWorked - 40) * overtimeWage : 0;

    // determine gross weekly pay
    weeklyGrossPay = hoursWorked <= 40 ? (hoursWorked * hourlyWage) : 40 * hourlyWage + weeklyOverTimePay;

    printf("weeklyOverTimePay: %d\n", weeklyOverTimePay);
    printf("weeklyGrossPay: %d\n", weeklyGrossPay);

    // calculate the taxes
    if (weeklyGrossPay <= 300)
    {
        taxes = weeklyGrossPay * taxRate1;
        weeklyNetPay = weeklyGrossPay - taxes;
    } else if (weeklyGrossPay > 300 && weeklyGrossPay <= 450)
    {
        taxes = (300 * taxRate1) + ((weeklyGrossPay - 300) * taxRate2);
        weeklyNetPay = weeklyGrossPay - taxes;
    }
    else {
        taxes = (300 * taxRate1) + (150 * taxRate2) + ((weeklyGrossPay - 450) * taxRate3);
        weeklyNetPay = weeklyGrossPay - taxes;
    }

    printf("Weekly hours: %d\n", hoursWorked);
    printf("- Gross Pay: %d\n", weeklyGrossPay);
    printf("- Taxes: %.2f\n", taxes);
    printf("- Net Pay: %.2f\n", weeklyNetPay);

    return 0;
}