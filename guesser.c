#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){

    srand(time(NULL));

    int num1 = (rand()%99)+1;
    int num2;
    int lives = 4;

    printf("Guess the number: \n");

  //aqui verifica minhas vidas
    while(lives >= 0){
        scanf(" %i", &num2);

        if (num2 > num1) {
            printf("Your number is greater than mine. Try again\n");
            lives --;
        } else if(num2 < num1) {
            printf("Your number is less than mine. Try again\n");
            lives --;
        } else {
            printf("You guessed it right. it was %i\n", num1);
            break; //interrompe o loop
        };

        if(lives < 0){
            printf("You ran out of lives, the number was %i\n", num1);
        } else if(lives > 1) {
            printf("You have %i lives remaining. \n", lives);
        } else{
            printf("You have %i life remaining. \n", lives);
        }
    }

    return 0;

}
