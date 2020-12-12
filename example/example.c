#include "example.h"

void itsMyPrint()
{

      OUT("Hello, %d", MATH(NUMBER, 10));
      return;
      OUT("\r\nPower is %.2f", POWER(3, 3));
      OUT("\r\n%s\r\n", STROKA);
      my();
      prgrm();

}

float koreni(float A)
{
    float rezultat = sqrt(A);

    return rezultat;

}
