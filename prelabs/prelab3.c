#include<stdio.h>
//fizzbuzz
int main(){

    int count = 1;

    while(count < 50){

        /*if(count % 3 == 0){
            if(count % 5 == 0){
                printf("Fizz Buzz, ");
            }
        }*/
        if(count % 3 == 0 && count % 5 == 0){
            printf("Fizz buzz, ");
        }
        else if(count % 3 == 0){
            printf("Fizz, ");
        }
        else if(count % 5 == 0){
            printf("Buzz, ");
        }
        else{
            printf("%d, ", count);
        }
        count = count + 1;
    }
    //printf("%d", count);
        if(count % 3 == 0){
        if(count % 5 == 0){
            printf("Fizz Buzz");
        }
    }
    else if(count % 3 == 0){
        printf("Fizz");
    }
    else if(count % 5 == 0){
        printf("Buzz");
    }
    else{
        printf("%d", count);
    }
    printf("\n");

    return 0;
}
