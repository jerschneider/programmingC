//
//  forFtoC.c
//  
//
//  Created by Jeremy Schneider on 8/7/20.
//

#include <stdio.h>
/*print Fahr to Celcius table */
int main()
{
    int fahr;
    
    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
