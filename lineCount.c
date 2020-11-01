//
//  lineCount.c
//  
//
//  Created by Jeremy Schneider on 8/8/20.
//

#include <stdio.h>

int main()
{
    int c, nl;
    
    nl = 0;
    while ((c = getchar ()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
        
}

