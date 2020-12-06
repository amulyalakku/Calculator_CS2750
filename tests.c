#include <stdio.h>

#include <stdlib.h>

#include "addition.h"
#include "subtraction.h"
#include "multiplication.h"
#include "division.h"
#include "modulus.h"

void testAddition() 
{
    float firstNumber = 10;
    float secondNumber = 20;
    float expectedOutput = 30;
    float response = addition(firstNumber, secondNumber);
    if (expectedOutput != response)
    {
      fprintf(stderr, "testAddition has failed! actual: %f  expected %f", response, expectedOutput);
      exit(1);  
     }
     printf("Addition test Passed\n");
    return;
}

void testSubtraction() 
{
    float firstNumber = 10;
    float secondNumber = 20;
    float expectedOutput = -10;
    float response = subtraction(firstNumber, secondNumber);
    if (expectedOutput != response)
    {
      fprintf(stderr, "testSubtraction has failed! actual: %f  expected %f", response, expectedOutput);
      exit(1);  
     }
     printf("Subtraction test Passed\n");
    return;
}

void testMultiplication() 
{
    float firstNumber = 10;
    float secondNumber = 20;
    float expectedOutput = 200;
    float response = multiplication(firstNumber, secondNumber);
    if (expectedOutput != response)
    {
      fprintf(stderr, "testMultiplication has failed! actual: %f  expected %f", response, expectedOutput);
      exit(1);  
     }
     printf("Multiplication test Passed\n");
    return;
}

void testDivision() 
{
    float firstNumber = 10;
    float secondNumber = 20;
    float expectedOutput = 0.500000;
    float response = division(firstNumber, secondNumber);
    if (expectedOutput != response)
    {
      fprintf(stderr, "testDivision has failed! actual: %f  expected %f", response, expectedOutput);
      exit(1);  
     }
     printf("Division test Passed\n");
    return;
}

void testModulus() 
{
    float firstNumber = 10;
    float secondNumber = 20;
    float expectedOutput = 10;
    float response = modulus(firstNumber, secondNumber);
    if (expectedOutput != response)
    {
      fprintf(stderr, "testModulus has failed! actual: %f  expected %f", response, expectedOutput);
      exit(1);  
     }
     printf("Modulus test Passed\n");
    return;
}

void runTests() 
{
    testAddition();
    testSubtraction();
    testMultiplication();
    testDivision();
    testModulus();
}