#include <stdio.h>

int main(void)
{
    int x = 3, y = 4, z = 0;
    printf("----- Part A ----- \n");
    //Assign the sum of x and y to z and increment the value of x by 1 after the calculation. 
    printf("x: %d, y: %d, z: %d\n", x, y, z);
    z = (x++) + y;
    printf("x: %d, y: %d, z: %d\n", x, y, z);

    printf("----- Part B ----- \n");
    //Multiply the variable product by 2 using the *= operator. 
    z = 4;
    printf("z: %d\n", z);
    z *= 2;
    printf("z: %d\n", z);
    
    printf("----- Part C ----- \n");
    //Multiply the variable product by 2 using the = and * operators.
    z = 4;
    printf("z: %d\n", z);
    z = z * 2;
    printf("z: %d\n", z);

    printf("----- Part D ----- \n");
    //Test if the value of the variable count is greater than 10. If it is, print “Count is greater than 10.” 
    int counter = 7;
    while(counter < 14)
    {
        if(counter < 10)
            printf("Counter is greater then 10\n");

        counter += 1;
    }

    printf("----- Part E ----- \n");
    //Decrement the variable x by 1, then subtract it from the variable total. 
    x = 10;
    printf("x: %d\n", x);
    x -= (--x);             //do not think like x = x - (x-1)
    printf("x: %d\n", x);

    printf("----- Part F ----- \n");
    //Add the variable x to the variable total, then decrement x by 1. 
    x = 10;
    printf("x: %d\n", x);
    x += (x--);         
    printf("x: %d\n", x);

    printf("----- Part G ----- \n");
    //Calculate the remainder after q is divided by divisor and assign the result to q. 
    //Write this statement two different ways. 
    int q = 10;
    int d = 3;
    printf("q: %d\n", q);
    q %= d;        
    printf("q: %d\n", q);
    printf("Second time\n");
    q = 10;
    printf("q: %d\n", q);
    q = q - (q/d) * d;        
    printf("q: %d\n", q);

    printf("----- Part H ----- \n");
    //Print the value 123.4567 with 2 digits of precision. What value is printed? 
    float val = 123.4567;
    printf("Value is %f, 2 digits %.2f\n", val, val); //Note that value is rounded

    printf("----- Part I ----- \n");
    //Print the floating-point value 3.14159 with three digits to the right of the decimal point. What value is printed?
    val = 3.14159;
    printf("Value is %f, 2 digits %.3f\n", val, val);

    return 0;
}

//Product overflows because of using integer, change to long long from int in definition and lld in printf