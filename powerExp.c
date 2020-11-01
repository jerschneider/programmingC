#include <stdio.h>

int power(int base, int n){
  int p=1;
  for(n; n>0; n--){
  p = p * base;
  }
  return p;
}
int main(){
  int base, n;
  printf("Enter a base number >> ");
  scanf("%d", &base);
  printf("Enter a power to raise the base >> ");
  scanf("%d", &n);
  int res = power(base, n);
  printf("awnser = %d\n", res);
  return 0;
}

  
