#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "modulus.h"
#include "tests.h"

void calculator_operations()
{
    printf("\n             Welcome to C calculator \n\n");
    printf("usage: ./calculatorOps [-h] [-t] [-a <arg1> <arg2>] \n \t [-s <arg1> <arg2>] [-m <arg1> <arg2>] \n \t [-d <arg1> <arg2>] [-p <arg1> <arg2>]\n");
    printf("Options:\n\t -h\t        to display help for the calculatorOps\n\t -t\t        to run testcases for the calculatorOps\n\t -a\t        to perform addition in calculatorOps\n\t -s\t        to perform subtraction in calculatorOps\n\t -m\t        to perform multiplication in calculatorOps\n\t -d\t        to perform division in calculatorOps\n\t -p\t        to perform modulus in calculatorOps\n\t <arg1>\t    integer value\n\t <arg2> \t   integer value\n\t ");
}

int main(int argc, char** argv)
{

  float num1 = 0;
  float num2 = 0;
  int option = 0;
  float result = 0;

  if (argc < 2) 
  {
    fprintf(stderr,"main: no argument specified\n");
    exit(1);
  }
    //Specifying the expected options
    //The two options l and b expect numbers as argument
    while ((option = getopt(argc, argv,"thasmd:p:")) != -1) 
    {
        switch (option) {
             case 't' : 
                 runTests();
                 break;
             case 'h' : 
                 calculator_operations();
                 break;
             case 'a' : 
                  if (argc != 4) 
                    {
                      fprintf(stderr, "Bad Input! Enter two numbers");
                      return EXIT_FAILURE;
                    }
                 num1 = atoi(argv[2]);
                 num2 = atoi(argv[3]);
                 result = addition(num1, num2);
                 printf("Addition value is %f\n", result);
                 break;
             case 's' : 
                 if (argc != 4) 
                    {
                      fprintf(stderr, "Bad Input!");
                      return EXIT_FAILURE;
                    }
                 num1 = atoi(argv[2]);
                 num2 = atoi(argv[3]);
                 result = subtraction(num1, num2);
                 printf("Subtraction value is %f\n", result);
                 break;
             case 'm' : 
                  if (argc != 4) 
                    {
                      fprintf(stderr, "Bad Input!");
                      return EXIT_FAILURE;
                    }
                 num1 = atoi(argv[2]);
                 num2 = atoi(argv[3]);
                 result = multiplication(num1, num2);
                 printf("Multiplication value is %f\n", result);
                 continue;
             case 'd' : 
                if (argc != 4) 
                    {
                      fprintf(stderr, "Bad Input!");
                      return EXIT_FAILURE;
                    }
                 num1 = atoi(argv[2]);
                 num2 = atoi(argv[3]);
                 result = division(num1, num2);
                 printf("Division value is %f\n", result);
                 break;
             case 'p' : 
                if (argc != 4) 
                    {
                      fprintf(stderr, "Bad Input!");
                      return EXIT_FAILURE;
                    }
                 num1 = atoi(argv[2]);
                 num2 = atoi(argv[3]);
                 result = modulus(num1, num2);
                 printf("Modulus value is %d\n", (int)result);
                 break;
             default: 
                 printf("unknown option: %d\n", option);   
                 exit(EXIT_FAILURE);
        }
    }
return EXIT_SUCCESS;
}