#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {

        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    //To do
    if (number <= 1)
    {

      return false;
    }

    if (number == 2)
    {
        return true;
    }
    //checking if number is prime by dividing it by every number from 2
    //not including number itself
    for (int j = 2; j < number; j++)

   {
     if (number % j == 0)
     {
        return false;
     }
   }
   return true;

}
