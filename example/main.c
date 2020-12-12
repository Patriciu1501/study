#include <stdio.h>
#include "example.h"
#include <stdbool.h>
#define KORENI(A) sqrt(A)


enum varlist{
    ONE,
    TWO,
    THREE
};



int main(int argc, char* argv[])
{


   printf("%s ", argv[4]);
   printf("%s ", argv[7]);
   printf("%s ", argv[3]);
   printf("%s\n", argv[8]);

   int var = 4;
   printf("%.2f\n", KORENI(4));

   printf("%.2f\n", koreni(var));

    itsMyPrint();

    return 0;
}


