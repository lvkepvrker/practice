/* Elementary 5: Summation of numbers from 1 to N
*/

#include <stdio.h>

int main() {

  unsigned long long int N, i, sum=0;

  printf("Enter a positive integer: ");
  scanf("%llu", &N);

  for (i=1; i<=N; i++) {
    sum += i;
  }

  printf("The sum of natural numbers from 1 to %llu", N);
  printf(" is %llu\n", sum);

  return 0;
}
