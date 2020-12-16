#include <stdio.h>
#include "example.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#define KORENI(A) sqrt(A)


enum varlist{
    ONE,
    TWO,
    THREE
};


void foo()
{ int a = 1;
  int b = 2;
  int c = 3;
}




#define byte char

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

    //-----------------------

        int* name = malloc(sizeof(int));

        int* array = calloc(64, sizeof(int));
        *(array + 3) = var;

        int intValue = 11;
        float floatValue = (float)intValue;
        byte charValue = (byte)intValue;
        printf("\n%d\n%f\n", intValue, floatValue);
        printf("%c\n", charValue);

        printf("%d", *(array + 3));

        free(name);
        free(array);





        int* num = malloc(sizeof(int));
        num = 11;
        printf("--\n%d\n", num);
        free(num);


/////// homework 16.12 down here
double* massive = calloc(32, sizeof(double)); // 1

int *ironWoodKid;
int eveningStar = 10;
ironWoodKid = &eveningStar;              // 2
printf("%d\n", *ironWoodKid);
free(ironWoodKid);


int *thirdProblem = calloc(10, sizeof(int));
int i;
int number;
i = 0;
while( i < 10){                                                               // 3
    number = rand() % 100;
    thirdProblem[i] = number;
    i++;
}
 printf("massiv : ");
for(i = 0; i < 10; i++)
    printf("%d ", thirdProblem[i]);






uint64_t* fourthProblem = calloc(32, sizeof(uint64_t));
int n;

int fact(int n)
{
int i,f;
for( i = f = 1; i <= n; i++ )
f *= i;                                                              // 4
return f;
}

for( i = 0; i < 32; i++)
{
   fourthProblem[i] = fact(rand() % 10);
   i++;
}

printf("\nFourth problem massive(wrong btw) : ");
for( i = 0; i < 32; i++)
printf("%d ", fourthProblem[i]);




int fraza[] = {72, 101, 108, 108, 111, 44, 32, 67, 111, 110, 116, 105, 110, 117, 101, 33 };
byte* newFraza = (byte*)fraza;
printf("\n");
for( int i = 0; i < 16; i++)                                                                     // 5
    printf("%c", fraza[i]);



float sixthProblem = 38991.5681179;
int novoeZnacenie = (int)sixthProblem;    // 6
printf("%d", novoeZnacenie);
















    return 0;
}


