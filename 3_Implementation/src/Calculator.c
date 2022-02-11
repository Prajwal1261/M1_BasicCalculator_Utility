/**
 * @file Calculator.c
 * @author Prajwal allitti(you@domain.com)
 * @brief Defining functions for each operations.
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include <stdio.h>
 #include "header.h"
 #include "assert.h"
float add(float a, float b) //addition operation
{
    float res;
    scanf("%f%f",&a,&b); // reading 2 variables
    //printf("%f",a+b);
    return (a+b);
}
float sub(float a, float b) //subtraction operation
{
    scanf("%f %f",&a,&b); // reading 2 variables
   // printf("%f",a-b);
    return (a-b);
}
float mul(float a, float b) //multiplication operation
{
    scanf("%f %f",&a,&b); // reading 2 variables
    printf("%f",a*b);
}
float div(float a, float b) //Division operation
{
    scanf("%f %f",&a,&b); // reading 2 variables
    printf("%f",a/b);
}
long power(int a, int b) //power operation
{
  long result = 1;
  scanf("%d %d",&a,&b); // reading 2 variables
  for(int i=1; i<=b; i++)
  {
    result=result*a;
  }
  printf("%ld",result);
}
int rem(int a, int b) //modulus operation
{
    scanf("%d %d",&a,&b); // reading 2 variables
    printf("%d",a%b);
}
int fact(int a) //factorial operation
{
    int i,fact=1;
    scanf("%d",&a); // reading 1 variable
    for(i=1; i<=a; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
int square(int a) //square operation
{
    scanf("%d",&a); // reading 1 variable
    printf("%d",a*a);
}
int cube(int a) //cube operation
{
    scanf("%d",&a); // reading 1 variable
    printf("%d",a*a*a);
}
