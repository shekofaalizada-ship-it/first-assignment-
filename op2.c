#include <stdio.h>
int main(void)
{

float celsius, fahrenheit;

printf("Enter temperature in celsius:");
scanf("%f", &celsius);

fahrenheit= (celsius*9/5)+32;

printf("%f celsius is equal to %f fahrenheit\n", celsius, fahrenheit);

return 0;
}

