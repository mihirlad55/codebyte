#include <stdio.h>
#include <string.h>


void FirstFactorial(int num[]) {
    unsigned long long res = num;
    for (unsigned long long i = res - 1; i > 1; i--) {
        res *= i;
    }
    printf("%llu", res);    
}

int main(void) { 
   
  // keep this function call here
  FirstFactorial(gets(stdin));
  return 0;
    
}
