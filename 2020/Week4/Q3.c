#include <stdio.h>

int main(void)
{
    //Else gives error message only no error for if statement
    /*
    int age = 40;
    if ( age >= 65 );     
        printf( "Age is greater than or equal to 65\n" );    
    else         
        printf( "Age is less than 65\n" );
    */

    //Total uninitialized
    /*
    int x = 1, total;     
    printf("%d\n", total);
    while ( x <= 10 ) 
    {          
        total += x;          
        ++x;     
    }
    printf("%d\n", total);
    */

    //While uppercase and ++x wont work only single line works after statements
    /*
    int x = 5;
    While ( x <= 100 )          
        total += x;         
            ++x;
    */

    // y goes infinity and when int overflows at 2^31 becomes negative
    /*
    int y = 3;
    while ( y > 0 ) 
    {            
        printf( "%d\n", y );            
        ++y;     
    } 
    printf( "Ended %d\n", y ); 
    */
    return 0;
}