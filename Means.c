#include <math.h>
#include <stdio.h>
int main() {
double sum = 0., product = 1.;
int number = 0;
for (double value; scanf("%lg", &value) == 1; ++number) {
sum += value;
product *= value; }
printf("%lg %lg\n", sum / number, pow(product, 1. / number));
return 0; }
