/*****************************************************************************
* CMP_SC 1050H
* SP 2026
* Lab 2
* Section A
* By Andy Liu (allgm6)
* January 30, 2026
*****************************************************************************/
#include <stdio.h>

int main(){
    //creating two integer variables
    int num1;
    int num2;

    printf("Please input an integer: "); //asking for user input for first value
    scanf("%d", &num1); //reads user input of the first integer to put into variable
    printf("Please input a second integer: "); //asking for input for second value
    scanf("%d", &num2); //reads user input of the second integer to put into variable
    printf("Your first integer was %d and your second was %d\n", num1, num2); //prints values of both variables to user
    printf("The product of the two = %d\n", num1*num2); //multiplies and prints the product of the first and second variable
    printf("Dividing the first by the second = %d\n", num1/num2); //divides the first by the second variable, prints the answer
    printf("The crazy equation value = %d\n", ((num2-2)*num1)); //prints the result of the equation (Y-2)*X, X being the first variable and Y being the second
    printf("Your first integer was %d and your second was %d\n", num1, num2); //repeats the values of the variables showing they didn't change
    //honors extension
    printf("The remainder of dividing the second by the first = %d\n", num2%num1); //prints the remainder of dividing the second by the first variable
    printf("The remainder from the honors equation = %d\n", (num1+3)%num2); //prints the remainder of dividing the first variable plus three by the second variable

return 0;

}
