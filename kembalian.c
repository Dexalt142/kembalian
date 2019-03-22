#include <stdio.h>

int main() {
    int cash, change;
    printf("Cash: ");
    scanf("%d", &cash);

    // Change Due
    change = cash;
    if(change >= 100000) {
        printf("100.000 x%d\n", change / 100000);
        change = change % 100000;
    }

    if(change >= 50000) {
        printf("50.000 x%d\n", change / 50000);
        change = change % 50000;
    }

    if(change >= 20000) {
        printf("20.000 x%d\n", change / 20000);
        change = change % 20000;
    }

    if(change >= 10000) {
        printf("10.000 x%d\n", change / 10000);
        change = change % 10000;
    }

    if(change >= 5000) {
        printf("5.000 x%d\n", change / 5000);
        change = change % 5000;
    }

    if(change >= 2000) {
        printf("2.000 x%d\n", change / 2000);
        change = change % 2000;
    }

    if(change >= 1000) {
        printf("1.000 x%d\n", change / 1000);
        change = change % 1000;
    }

    if(change >= 500) {
        printf("500 x%d\n", change / 500);
        change = change % 500;
    }

    if(change >= 200) {
        printf("200 x%d\n", change / 200);
        change = change % 200;
    }

    if(change >= 100) {
        printf("100 x%d\n", change / 100);
        change = change % 100;
    }

}
