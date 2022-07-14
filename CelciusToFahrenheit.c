#include <stdio.h>

int main ()
{
float fahr, celcius;
fahr = 0;

printf("%s %s", "Fahrenheit ", " Celcius\n");
printf("----------  ----------\n");

while ( fahr <= 451)
  {
    celcius = (5.0/9.0) * (fahr-32.0);
    printf("%6.f %5s %6.4f\n", fahr, "|", celcius);
    fahr = fahr + 20;
  }
}