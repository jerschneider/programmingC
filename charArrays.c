#include <stdio.h>A
#define MAXLINE 1000 /* this declares max input line size */

rammingC % ./charArrays.o
noelle is super cute
123456 3453460 934583945
im going to get a husky with you and or a shiba inu 
boop
the longest line is >> 
im going to get a husky with you and or a shiba inu
jeremy@mbair programmingC % int BWKgetline(char line[], int lim);
void copy(char to[], char from[]);

/* print longest input lines */
int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    
    while((len = BWKgetline(line, MAXLINE)) > 0)
      if (len > max)
	{
	max = len;
	copy(longest, line);
      }
    if (max > 0)
      printf("the longest line is >> \n%s", longest);
}

/* getline */
int BWKgetline(char s[], int lim)
{
  int c,i;

  for(i=0; i<lim-1 && (c=getchar())!=EOF && c !='\n'; ++i)
    s[i] = c;
  
  if (c == '\n')
    {
    s[i] = c;
    ++i;
    }
  s[i] = '\0';
  return i;
  
}

/* copy for storage purposes */

void copy(char to[], char from[])
{
  
  int i;
  i = 0;
  
  while ((to[i] = from[i]) != '\0')
    ++i;
}
