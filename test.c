/*****************************************************************************
* CMP_SC 1050H
* SP 2026
* Lab 6
* Section A
* By Andy Liu (allgm6)
* February 27, 2026
*****************************************************************************/

//uses functions to analyze numbers.
#include <stdio.h>

int countDigits(int n){ //Returns the number of digits in n. Treat 0 as having 1 digit.

    int counter = 0;

    while(n > 0){
        n /= 10; //truncate until == 0
        counter++;
    }
    
    return counter;
}

int sumDigits(int n){ //Returns the sum of digits of n. Example: sumDigits(402) = 6.

    int digit;
    int sum = 0;

    while(n > 0){
        digit = n % 10;
        n /= 10;
        sum += digit; //add single digit
    }
    return sum;
}

int reverseNumber(int n){ //Returns the digits of n reversed. Example: reverseNumber(1200) = 21
    
    int rev_num = 0;

    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    return rev_num;
}

int largestDigit(int n){ //Returns the largest digit in n. Example: largestDigit(48284) = 8.
    
    int max = 999;
    int n2 = 0;
    int n3 = 0;

    while(n > 0){
        n2 = n % 10;
        n /= 10;
        n3 = n % 10;
        if(n2 > n3 && n != 0){
            max = n2;
        }
        else if(n3 > n2 && n != 0){
            max = n3;
        }
    }
    printf("Largest digit: %d\n", max);
    return 1;
}

int isPalindrome(int n){ //Returns 1 if n is a palindrome, otherwise returns 0.
    
    int p = reverseNumber(n);
    if(p == n){
        return 1;
    }
    return 0;
}

int digitalRoot(int n){ //Repeatedly sums digits until the result is a single digit, and returns that digit.
    
    int sum = sumDigits(n);
    int final_sum;

    while(sumDigits(sum) >= 10){
        sumDigits(sum);
    }
    final_sum = sumDigits(sum);
    printf("Digital Root: %d\n", final_sum);
    return final_sum;
}

int isArmstrong(int n){ //An Armstrong number is a number that equals the sum of its own digits each raised to the power of the number of digits. Returns 1 if n is an Armstrong number, otherwise returns 0

    int pow = 0;
    int total = 0;
    int x_total = 0;
    int digits = countDigits(n);
    int sum = 0;
    int divis = n;

    while(divis > 0){
        pow = divis % 10;
        total = divis % 10;
        for(int i = 1; i < digits; i++){
            sum = (total*= pow);
        }
        x_total += sum; 
        divis /= 10;
    }

    if(x_total == n){
    return 1;
    }
    return 0;
}

int main(){

    int input;
    int rev;
    int sum;
    int count;

    do{
        printf("Enter a non-negative integer (-1 to quit): ");
        scanf("%d", &input);
        if(input < -1){ //error message if user input is negative but not -1
            printf("ERROR, Goodbye!\n");
            break;
        }
        if(input == -1){
            printf("Goodbye!\n");
            break;
        }
        rev = reverseNumber(input);
        sum = sumDigits(input);
        count = countDigits(input);
        printf("Digits: %d\n", count);
        printf("Sum of digits: %d\n", sum);
        printf("Reversed: %d\n", rev);
        largestDigit(input);
        if(isPalindrome(input) != 0){
            printf("Palindrome: Yes\n");
        }
        else{
            printf("Palindrome: No\n");
        }
        digitalRoot(input);
        if(isArmstrong(input) != 0){
            printf("Armstrong: Yes\n");
        }
        else{
            printf("Armstrong: No\n");
        }

    }while(input != -1); //until -1 is entered

    return 0;
}
