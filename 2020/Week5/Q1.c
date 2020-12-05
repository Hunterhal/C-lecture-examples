#include <stdio.h>

int main(void)
{
    int x = 5;
    int product = 5; //Initial value important

    printf("Loop started\n");
    while(x < 20)
    {
        product *= x++;
        printf("Product: %d, x: %d\n", product, x);
    }

    return 0;
}

//Product overflows because of using integer, 
//change to long long from int in definition and 
//%lld in printf