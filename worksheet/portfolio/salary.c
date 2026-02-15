
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Ismail Patel
 * ID: 201805034
 */

int main( void ) {
    // define and initialise variables for the problem data 
   float total_salary, NI, tax_rate;
   total_salary = 36250;
   NI = 0.08;
   tax_rate = 0.15;
   float take_home = total_salary;

    // calculate the deductions and final take-home salary
   float NI_contribution = total_salary * NI;
   take_home -= NI_contribution;
   
   float tax_contribution = 0;
   if (take_home > 12500)
   {
      tax_contribution = (take_home - 12500) * tax_rate;
   }
   take_home -= tax_contribution;

   // Use only these print statement with appropriate formatting and variable names
   printf("Salary £%.2f\n",total_salary);
   printf("NI contribution £%.2f\n",NI_contribution);
   printf("Tax contribution £%.2f\n",tax_contribution);
   printf("Take home salary £%.2f\n",take_home);
   return 0;
 }