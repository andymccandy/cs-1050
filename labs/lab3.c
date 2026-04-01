/*****************************************************************************
* CMP_SC 1050H
* SP 2026
* Lab 3
* Section A
* By Andy Liu (allgm6)
* February 6, 2026
*****************************************************************************/
#include<stdio.h>

//This program asks for user input for a range of numbers, then goes through all the numbers from either start to end or end to start
//depending on user input. It then checks if the number is divisable by 3 and 5 which prints "TrumanTiger", or just 3, printing "Tiger", or
// only 5 which prints "Truman". It then checks if the number is odd or even, printing "*" and the number if even and "!" and the number
// if odd.
int main()
{
    
    int start;
    int end;
    int counter;

    printf("Enter the start value for the loop: "); //ask user for starting value
    scanf("%d", &start);
    printf("Enter the end value for the loop: "); //ask user for ending value
    scanf("%d", &end);
    printf("Enter -2 to count down from end to start, 2 to count up from start to end: "); //ask user which way they want to count from
    scanf("%d", &counter);

    if(counter == 2)
    {
    while(start !=end) //loop until starting value increases until it reaches end value
    {
        if(start % 3 == 0 && start % 5 == 0) //if number is divisable by both 3 and 5, then check if num is odd or even
        { 
            printf("TrumanTiger");
            if(start % 2 == 0){
                printf("*%d ", start);
            }
            else{
                printf("!%d ", start);
            }
        }
        else if(start % 3 == 0) //if number is only divisable by 3, then check if num is odd or even
        {
            printf("Tiger");
            if(start % 2 == 0){
                printf("*%d ", start);
            }
            else{
                printf("!%d ", start);
            }
        }
        else if(start % 5 == 0) //if number is only divisable by 5, then check if num is odd or even
        {
            printf("Truman");
            if(start % 2 == 0){
                printf("*%d ", start);
            }
            else{
                printf("!%d ", start);
            }
        }
        else //if number is not divisable by 3 or 5, then check if num is odd or even
        {
            if(start % 2 == 0){
                printf("*%d ", start);
            }
            else{
                printf("!%d ", start);
            }
        }
        start = start+1;//increasing the starting value by 1
    }
}

    if(counter == -2)
    {
    while(end !=start) //loop until end value decreases until it reaches start value
    {
        if(end % 3 == 0 && end % 5 == 0) //if number is divisable by both 3 and 5, then check if num is odd or even
        { 
            printf("TrumanTiger");
            if(end % 2 == 0){
                printf("*%d ", end);
            }
            else{
                printf("!%d ", end);
            }
        }
        else if(end % 3 == 0) //if number is only divisable by 3, then check if num is odd or even
        {
            printf("Tiger");
            if(end % 2 == 0){
                printf("*%d ", end);
            }
            else{
                printf("!%d ", end);
            }
        }
        else if(end % 5 == 0) //if number is only divisable by 5, then check if num is odd or even
        {
            printf("Truman");
            if(end % 2 == 0){
                printf("*%d ", end);
            }
            else{
                printf("!%d ", end);
            }
        }
        else //if number is not divisable by 3 or 5, then check if num is odd or even
        {
            if(end % 2 == 0){
                printf("*%d ", end);
            }
            else{
                printf("!%d ", end);
            }
        }
        end = end-1; //decrease the ending value by 1
    }
}
    if(start % 3 == 0 && start % 5 == 0) //if number is divisable by both 3 and 5, then check if num is odd or even
    { 
        printf("TrumanTiger");
        if(start % 2 == 0){
            printf("*%d\n", start);
        }
        else{
            printf("!%d\n", start);
        }
    }
    else if(start % 3 == 0) //if number is only divisable by 3, then check if num is odd or even
    {
        printf("Tiger");
        if(start % 2 == 0){
            printf("*%d\n", start);
        }
        else{
            printf("!%d\n", start);
        }
    }
    else if(start % 5 == 0) //if number is only divisable by 5, then check if num is odd or even
    {
        printf("Truman");
        if(start % 2 == 0){
            printf("*%d\n", start);
        }
        else{
            printf("!%d\n", start);
        }
    }
    else //if number is not divisable by 3 or 5, then check if num is odd or even
    {
        if(start % 2 == 0){
            printf("*%d\n", start);
        }
        else{
            printf("!%d\n", start);
        }
    }

    return 0;
}
