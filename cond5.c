#include <stdio.h>

int main()
{
    int age, student;
    int ticketPrice;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Are you a student? (1 for Yes, 0 for No): ");
    scanf("%d", &student);

    if (age < 12)
    {
        ticketPrice = 50;
    }
    else if (age <= 60)
    {
        if (student == 1)
        {
            ticketPrice = 80;
        }
        else
        {
            ticketPrice = 100;
        }
    }
    else
    {
        ticketPrice = 60;
    }

    printf("Ticket price = %d\n", ticketPrice);

    return 0;
}
