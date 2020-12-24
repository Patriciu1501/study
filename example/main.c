#include <stdio.h>
#include "example.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <math.h>

#define KORENI(A) sqrt(A)

#define byte char

static int val = 0;

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


int fact(int n) // -
{
    if(n <= 0) return 1;
    return n * fact(n - 1);
}

void oldHomeWork()
{
    uint64_t* fourthProblem = calloc(32, sizeof(uint64_t));
    int i;


    for( i = 0; i < 32; i++)
    {
       int randomValue = rand() % 32;
       fourthProblem[i] = fact(randomValue);
       printf("value = %d : fact = %d\n", randomValue, fourthProblem[i]);
    }


//       printf("%s ", argv[4]);
//       printf("%s ", argv[7]);
//       printf("%s ", argv[3]);
//       printf("%s\n", argv[8]);

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
        double* massive = calloc(32, sizeof(double)); // 1 где фри на массив?

        int *ironWoodKid;
        int eveningStar = 10;
        ironWoodKid = &eveningStar;              // 2 +/-
        printf("%d\n", *ironWoodKid);
        free(massive);


        int *thirdProblem = calloc(10, sizeof(int));
        //int i;
        int number;
        i = 0;
        while( i < 10){                                                               // 3 +/- где фри на массив? где фри на массив? где фри на массив? где фри на массив?где фри на массив?где фри на массив?
            number = rand() % 100;
            thirdProblem[i] = number;
            i++;
        }
         printf("massiv : ");
        for(i = 0; i < 10; i++)
            printf("%d ", thirdProblem[i]);

        // у тебя выделена память, она не сотрется пока оперативную память полностью от питания не уберешь, за третью я ставлю половину плюса

        free(thirdProblem);


        int fraza[] = {72, 101, 108, 108, 111, 44, 32, 67, 111, 110, 116, 105, 110, 117, 101, 33};
        byte newFraza[16];
        for(i = 0; i < 16; i++)                                                                     // 5 +\-
            newFraza[i] = (byte)fraza[i];
        newFraza[16] = '\0';
        printf("\nString %s\n", newFraza);



        float sixthProblem = 38991.5681179;
        int novoeZnacenie = (int)sixthProblem;    // 6 +
        printf("%d", novoeZnacenie);
}


int setFunctor(int value)
{
    int functor = 0;
    return functor; // после возвращения значения functor будет удален !!!
}

static int func = 0;

int functor(int value)
{
    static int functor = 0;

    if(value != NULL)
        functor = value;

    return functor;
}


void thirdHomework_firstZadacha();
void thirdHomework_secondZadacha();
void thirdHomework_thirdZadacha();
void thirdHomework_fourthZadacha();
void thirdHomework_fifthZadacha();
void thirdHomework_eighthZadacha();
int thirdHomework_ninthZadacha(const int firstArument, const int secondArgument);
void thirdHomework_tenthZadacha();
double thirdHomework_twelfthZadacha(double* second, double* index, double* frequency);
void thirdHomework_eleventhZadacha();
void other();
void otherT();
int primerRaboti (int * perviyArgument);
void output(char* text);





int increment(int value)
{
    if(value < 200)
    value += 5;

    if(value >= 200)
    return value;

    return increment(value);


}



void printer(char *format, ...)
{
       va_list arg;
       char *name, *city, *telephone;
       int years;
       char *other = 0;

       va_start(arg, format);
       while(*format)
       {
           switch(*format++)
           {
           case 'n':
               name = va_arg(arg, char*);
               break;
           case 'c':
               city = va_arg(arg, char*);
               break;
           case 'y':
               years = va_arg(arg, int);
               break;
           case 't':
               telephone = va_arg(arg, char*);
               break;
           default:
               other = va_arg(arg, char*);
               break;
           }
       }
       va_end(arg);


 printf("%s\n%d\n%s\n%s\n", name, years, city, telephone);

  if(other != 0)
      printf("error string %s\n", other);
}


int main(int argc, char** argv)
{

    output(argv[1]);
    int newVar = 8;
    printf("%d\n", primerRaboti(&newVar));
    printf("%d\n", newVar);

    void (*myfunc[2]) (void) = {other, otherT};
    // returnType (*name) (argType); != type *name (argType)
    // аргументы функции всегда должны быть одинаковы
    // возвр тип всегда должен быть одинаков

    myfunc[0]();
    myfunc[1]();
    printer("ncyt", "Patric", "Settlement", 13, "+3 782 521 521");

    int n = 2; //10000010 = 11111101
    int g = 10; // 00000010 AND 00001010 = 00000010 == 2
                // 00000010 OR 00001010 = 00001010 == 10
                // 00000010 XOR 00001010 = 00001000 == 8
    int inv = 5;

    const unsigned int val = 0xF;
    int value = 65;
    value &=val;


//    n >>= 1;
    //n <<= 2;
    printf("%o\n", value);


//    functor(60);
//    setFunctor(90);
//    //int value = inc();
//    printf("%d\n%d\n", functor(NULL), 5);

    char symbol = 't';
    switch (symbol)
    {
    case 116:

        printf("Little argc!\n");
        break;

    default:
        printf("Very many argc!\n");
        break;
    }

printf("increment %d\n", increment(inv));

printf("result is %d\n", degree(2, 4));
output(argv[1]);

thirdHomework_firstZadacha();
thirdHomework_secondZadacha();
thirdHomework_thirdZadacha();
thirdHomework_fourthZadacha();
thirdHomework_fifthZadacha();
thirdHomework_eighthZadacha();

double second = 156893221;
double index = 5;
double frequency = 37 ;
for(int i = 0; i < 500; i++)
{
printf("\nhuetaua ceea cu frequency = %f", thirdHomework_twelfthZadacha(&second, &index, &frequency));
}
thirdHomework_eleventhZadacha();



return 0;


}


int degree(int value, int degreeValue)
{
    if(value == 0) return 1;
    if(degreeValue == 0) return 1;

    int result = value;
    int iterator;
    for( iterator = 0; iterator < degreeValue -1; iterator++)
    {
        result *= value;
    }





    return result;
}


int stepeni( int oneArg, int twoArg)
{
    if( oneArg == 0) return 1;
    if(twoArg == 1) return oneArg;
    int result = 0;
    result += pow(oneArg, twoArg);

    return result;


}



int exampleFunction(int * exampleValue)
{
    *exampleValue /= 2;
}


int secondExample( int * newExampleValue)
{
    *newExampleValue = 8000;
}



void thirdHomework_firstZadacha()
{
    int massive[64];
    int i;
    *massive = malloc(sizeof(int));
    for( i = 0; i < 64; i++)
       massive[i] = rand() % 64;
    printf("massiv: ");
    for(i = 0; i < 64; i++)
        printf("%d ", massive[i]);
}


void thirdHomework_secondZadacha()
{
   int firstArray[16];
   char* secondArray = "The toilet World";
   for( int i = 0; i < 16; i++){

       firstArray[i] = rand() % 16;

   }


}

void thirdHomework_thirdZadacha()
{
    int peremennaya = 230;
    int *thePointer = &peremennaya;
    printf("\n%c\n", *thePointer);

}

void thirdHomework_fourthZadacha()
{
    int fourthMassive[8];
    int number = 1;
    for( int i = 0; i < 8; i++)
        fourthMassive[i] = number <<= 1;
    printf("fourth massive: ");
    for( int i = 0; i < 8; i++)
        printf("%d ", fourthMassive[i]);
}

void thirdHomework_fifthZadacha(int valoare)
{
   static increment = 1;
   valoare += increment;
}


void thirdHomework_sixthZadacha()
{
          char firstNumber = '243';
          char secondNumber =  '81';
          int firstInt = (int)firstNumber;
          int secondInt = (int)secondNumber;
          printf("%d", firstNumber - secondNumber);
}


void thirdHomework_seventhZadacha()
{
   int* seventhUkazateli = malloc(sizeof (int));
   printf("%p", *seventhUkazateli);
   printf("%d", sizeof (*seventhUkazateli));
}



void thirdHomework_eighthZadacha()
{   char* fraza = "My house is fine";
    void * badPointer = fraza;
    char * goodPointer = (char*) badPointer;

    printf("Vivod %s", goodPointer);



}





int thirdHomework_ninthZadacha(const int firstArument, const int secondArgument)
{
   int rezultatul = firstArument + secondArgument;
   return rezultatul;
}



void thirdHomework_tenthZadacha()
{
    printf("Size: uint32_t = %d, int = %d", sizeof (uint32_t), sizeof (int));
}



void thirdHomework_eleventhZadacha()
{
    float firstOperand;
    float secondOperand;
    float rezultat;
    char operation;
    printf("\nintrodu operatia = ");
    scanf("%c", &operation);
    switch(operation)
    {

    case '+':
        printf("\nintroduce firstOperand and secondOperand = ");
        scanf("%f %f", &firstOperand, &secondOperand);
        rezultat = firstOperand + secondOperand;
        break;
    case '-':
        printf("\nintroduce firstOperand and secondOperand = ");
        scanf("%f %f", &firstOperand, &secondOperand);
        rezultat = firstOperand - secondOperand;
        break;
    case '/':
        printf("\nintroduce firstOperand and secondOperand = ");
        scanf("%f %f", &firstOperand, &secondOperand);
        rezultat = firstOperand / secondOperand;
        break;
    case '*':
        printf("\nintroduce firstOperand and secondOperand = ");
        scanf("%f %f", &firstOperand, &secondOperand);
        rezultat = firstOperand * secondOperand;
        break;
    case '^':
        printf("\nintroduce firstOperand and secondOperand = ");
        scanf("%f %f", &firstOperand, &secondOperand);
        rezultat = pow(firstOperand, secondOperand);
        break;
    case 'm':
        printf("\nintroduce operandul = ");
        scanf("%f", &firstOperand);
        rezultat = abs(firstOperand);
        break;
    case 'f':
        printf("\nintroduce operandul = ");
        scanf("%f", &firstOperand);
        rezultat = fact(firstOperand);
        break;

    default: printf("invalid operator");


    }
    printf("The result is %f", rezultat);
}







double thirdHomework_twelfthZadacha(double* second, double* index, double* frequency)
{



    if(*index < *frequency)
        *index+=1;

    if(*index >= *frequency)
    {
      *index = 0;
      *second+=1;
    }

        return *second + (*index / *frequency);
}





void other()
{
    printf("I true am Sweet and i am true Shreek!");
}

void otherT()
{
    printf("Second function");
}



int primerRaboti (int * perviyArgument)
{
      return *perviyArgument /= 2;
}


void output(char* text)
{
    char buffer[512];
    FILE* file = fopen("./file.txt", "w+"); // r - shistivanie, w - zapisi, r+/w+ odnovremenno

    fseek(file, 0, SEEK_SET);
    fprintf(file, text); // zapisi v fail
    //--------------------------------------------
    rewind(file);
    fgets(buffer, 8, file); // iz faila buddet shitano 8 simvolv i zapisano v buffer
    //--------------------------------------------
    rewind(file);
    fscanf(file, "%s", buffer); // iz faila budet shitano n-simvolov do razdelitelea ili kontza faila


    fclose(file);

    printf("String from file: %s\n", buffer);
}







