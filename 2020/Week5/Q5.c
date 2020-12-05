#include <stdio.h>
#include <limits.h>

//Write a program that takes 10 integers from the user and prints out the largest two integers entered by the user.
//Largest value taken as INT_MIN or (1<<31) or 0x80000000

int main(void)
{
    int largest = INT_MIN, second_largest = INT_MIN, value;

    for(int i=0; i <5; i++)
    {
        printf("Enter value: ");
        scanf("%d", &value);
        if(value > largest) 
        {
            second_largest = largest;
            largest = value;
        }
        else if (value > second_largest && value != largest)
        {
            second_largest = value;
        }
    }

    printf("Largest value is %d and second largest is %d", largest, second_largest);

    return 0;
}