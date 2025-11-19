#include <stdio.h>

int controle(int bag, float motor) {
  if (motor / bag <= 5.6)
    return 1;
  else
    return 0;
}
int main() {
  int bag = 2;
  float motor;

  printf("hvor mange motoerer er der?:  ");
  scanf("%d", &bag);
  printf("hvor mange tasker er der? ");
  scanf("%f", &motor);
  printf("%d\n", controle(bag, motor));

  if (controle(bag, motor))
    printf("ja den kan godt holden\n");
  else
    printf("nej den kan ikke holde\n");
}