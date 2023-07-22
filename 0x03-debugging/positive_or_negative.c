#include "main.h" 


/* more headers goes there */

void positive_or_negative(int i)
{
        
        /* your code goes there */
        if (i < 0)
        {
                printf("%d is %s\n", i, "negative");
        }
        else if (i > 0)
        {
                printf("%d is %s\n", i, "positive");
        }
        else 
        {
                printf("%d is %s\n", i, "zero");
        }
        return ;
}
