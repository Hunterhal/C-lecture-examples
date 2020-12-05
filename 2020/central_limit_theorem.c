#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define DICE_MAX 6

int roll_dice(int times)
{
    int result = 0;
    for(int i = 0; i < times; i++)
        result += 1 + rand() % DICE_MAX;
    return result;
}

int main(void)
{
    srand( time(0) );
    int number_of_dices = 2;
    int number_of_trials = 1e4;
    int stars_max = 0;
    int roll;
    int scaler = number_of_trials/(50 * number_of_dices);
    int *bins, *stars;
    printf("Scaler is %d\n", scaler);

    //Dynamically create buffers
    bins = malloc(sizeof(int) * number_of_dices * DICE_MAX); 
    stars = malloc(sizeof(int) * number_of_dices * DICE_MAX); 

    //Clear roll counter buffer
    for(int i = 0; i < number_of_dices * DICE_MAX; i++)
        bins[i] = 0;

    //Roll and count
    for(int i = 0; i < number_of_trials; i++)
    {
        roll = roll_dice(number_of_dices);
        bins[roll - 1] ++;
    }

    //Calculate how many stars needed and maximum number of stars
    for(int i = 0; i < number_of_dices * DICE_MAX; i++)
    {
        printf("Roll: %d ", i + 1);
        printf("Bins: %d ", bins[i]);
        stars[i] = bins[i] / scaler;
        printf("Stars: %d\n", stars[i]);
        //Find the maximum number of stars
        if(stars[i] > stars_max) 
            stars_max = stars[i];
    }

    printf("%d\n", stars_max);
    
    //Print stars in descending order, starting from stars_max
    for(int i = stars_max; i >= number_of_dices - 1; i--)
    {
        //For every level check if that result has star
        for(int j = number_of_dices -1; j < number_of_dices * DICE_MAX; j++)
        {
            if(stars[j] == i)
            {
                //Print star and reduce star level
                stars[j]--;
                printf("*   ");
            }
            else
            {
                //Print blank
                printf("    ");
            }
            
        }
        printf("\n");
    }

    //x axis labels number of dices to max roll number
    for(int i=number_of_dices; i <= number_of_dices * DICE_MAX; i++)
    {
        printf("%d  ", i);
        //If one digit number is printed, add one more space
        if(i < 10)
            printf(" ");
    }

    return 0;
}