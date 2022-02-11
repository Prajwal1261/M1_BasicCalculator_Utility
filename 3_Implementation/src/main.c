 /**
 * @file main.c
 * @author Prajwal Allitti(you@domain.com)
 * @brief main function to get the result
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

 #include <stdio.h>
 #include "header.h"
int main()
{
    int choice;
    float a,b;
    while(1)
    {
    printf("\nSelect the operations:");
    printf("\n1.Addition \n2.Subtraction \n3.Multiply \n4.Division \n5.Power \n6.Remainder \n7.Factorial of a number \n8.Square of a number \n9.cube of a number \n10.Exit");
    printf("\nEnter the choice =");
    scanf("%d",&choice); //read the choice 
   switch(choice)
   {
    case 1:
        printf("Enter the values of a and b =");
        add(a,b);    //calling a addition function
    break;
    case 2:
        printf("Enter the values of a and b =");
        sub(a,b);    //calling a subtraction function
    break;
    case 3:
        printf("Enter the values of a and b =");
        mul(a,b);     //calling a multiplication function
    break;
    case 4:
        printf("Enter the values of a and b =");
        div(a,b);     //calling a division function
    break;
    case 5:
        printf("Enter the values of a and b =");
        power(a,b);   //calling a power function
    break;
     case 6:
        printf("Enter the values of a and b =");
        rem(a,b);    //calling a modulus function
    break;
      case 7:
        printf("Enter the value of a =");
        fact(a);     //calling a factorial function
    break;
    case 8:
        printf("Enter the value of a =");
        square(a);   //calling a square function
    break;
     case 9:
        printf("Enter the value of a =");
        cube(a);    //calling a cube funtion
    break;
    case 10:
      return 0;
    default:
        printf("invalid choice");
   }
    }
    return 0;
}