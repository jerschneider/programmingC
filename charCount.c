//
//  charCount.c
//  
//
//  Created by Jeremy Schneider on 8/8/20.
//

#include <stdio.h>
int main()
{
    double nc;
    
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
