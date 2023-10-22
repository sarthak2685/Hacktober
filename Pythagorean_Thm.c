# include <stdio.h>
# include <math.h>
int main() 
{
  float a,b;
  printf("Base= ");
  scanf("%f",&a);

  printf("Perpendicular= ");
  scanf("%f",&b);

  printf("Hypotenuse= %.2f",sqrt(a*a+b*b));
  return 0;
}
