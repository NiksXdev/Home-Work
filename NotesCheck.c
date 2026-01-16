#include <stdio.h>
int main() {
    int num;
    int note500=0, note200=0, note100=0, note50=0;
    int note20=0, note10=0;
    int coin5=0, coin2=0, coin1=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive amount.");
        return 0;
    }

    note500 = num / 500; 
    num = num % 500;
    if(note500 > 0) 
    printf("\n500rs Note = %d", note500);

    note200 = num / 200; 
    num = num % 200;
    if(note200 > 0) 
    printf("\n200rs Note = %d", note200);

    note100 = num / 100; 
    num = num % 100;
    if(note100 > 0) 
    printf("\n100rs Note = %d", note100);

    note50 = num / 50;
    num = num % 50;
    if(note50 > 0) 
    printf("\n50rs Note = %d", note50);

    note20 = num / 20; 
    num = num % 20;
    if(note20 > 0) 
    printf("\n20rs Note = %d", note20);

    note10 = num / 10; 
    num = num % 10;
    if(note10 > 0) 
    printf("\n10rs Note = %d", note10);

    coin5 = num / 5; 
    num = num % 5;
    if(coin5 > 0) 
    printf("\n5rs Coin = %d", coin5);

    coin2 = num / 2; 
    num = num % 2;
    if(coin2 > 0) 
    printf("\n2rs Coin = %d", coin2);

    coin1 = num;
    if(coin1 > 0) 
    printf("\n1rs Coin = %d", coin1);

}
