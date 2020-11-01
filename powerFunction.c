//
//  powerFunction.c
//  
//
//  Created by Jeremy Schneider on 8/9/20.
//

#include <stdio.h>
#include <math.h>

/* declaration made here */
double pow(double m, double n);

int main()
{
    int i;
    
    for (i = 0; i < 10; ++i)
        printf("%d %d %d\n", i, pow(2,i), pow(-3,i));
    return 0;
}
