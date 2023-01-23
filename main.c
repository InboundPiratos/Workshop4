#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* This function should return 1 if x is prime and 0 otherwise */
int isPrime(int x){
    {
        if (x <= 1) return 0;
        if (x % 2 == 0 && x > 2) return 0;
        for(int i = 3; i < x / 2; i+= 2)
        {
            if (x % i == 0) {
                printf("not prime\n");
                return 0;
            }
        }
        printf("prime!\n");
        return 1;
    }

}

/* This function should return 1 if gcd(x,2)=1 and 0 otherwise */
int isGcd1(int x){
int gcd = 0;

    for(int i = 1; i <= x && i <= 2; i++){

        if(x%i==0 && 2%i==0)
            gcd = i;

        if(i == 1)
            return 1;
        else
            return 0;

    }


}

/* This function should return 1 if 9^x-2 mod 5 = 2 and 0 otherwise */
int is2mod5(int x) {
    if ((((9^x) -2) % 5) == 2){
        printf("modulus is'2'\n" /*((9 ^ x)-2) % 5)*/);
        return 1;
    }
    else{
        printf("modulus is 'not 2'\n" /*((9 ^ x)-2) % 5)*/);
        return 0;
    }
}


int main(void){
  int x;
  int p, q, r;

  printf("What number do you want to test?\n");
  scanf("%d", &x);
  printf("x is %d\n", x);

  p = isPrime(x);
  q = isGcd1(x);
  r = is2mod5(x);

  if ((p && !r) || !(p || !q || r) || (!p && !q && r)){
        printf("You have found a valid x\n");
        printf("p is %d, q is %d, and r is %d\n", p,q,r);
  }
  else {
        printf("p is %d, q is %d, and r is %d\n", p,q,r);
        printf("Try again!\n");
  }

  return EXIT_SUCCESS;
}