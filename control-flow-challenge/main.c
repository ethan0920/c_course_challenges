#include <stdio.h>

int main()
{   
    int workHours = 0;
    float taxRate300 = .15;
    float taxRate150 = .20;
    float taxRateElse = .25;
    float payRate = 12.00;
    float overtimeRate = 1.5 * payRate;
    float overtimeHours = 0.0;
    float grossPay = 0.0;
    float taxes = 0.0;
    float netPay = 0.0;
    
    printf("Enter number of week hours: ");
    scanf("%i", &workHours);
    
    if (workHours > 40)
    {
        overtimeHours = workHours - 40;
        workHours -= overtimeHours;
        if (overtimeHours > 0) 
        {
            grossPay += overtimeHours * overtimeRate;
        }
    }
    
    grossPay += workHours * payRate;
    taxes = 300 * taxRate300;
    
    if (grossPay <= 300) 
    {
        taxes = grossPay * taxRate300;
    } else if (grossPay > 300 && grossPay <= 450)
    {
        taxes += (grossPay - 300) * taxRate150;
    } else 
    {
        taxes += (grossPay - 450) * taxRateElse;
    }
    
    netPay = grossPay - taxes;
    
    printf("Gross Pay $%.2f\n", grossPay);
    printf("Taxes $%.2f\n", taxes);
    printf("Net Pay $%.2f\n", netPay);
    
    return 0;
}
