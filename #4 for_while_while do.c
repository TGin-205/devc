#include <stdio.h>

int main() {
    // For
    printf("Vong lap for:\n");
    for (int i = 1; i <= 5; i++) {    // khi khai báo int i ngay trong vòng lặp for thì i chỉ có thể sử dụng trong khu vực dấu {} của vòng for
        printf("%d ", i);
    }
    printf("\n");

    // While
    printf("Vong lap while:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // Do-while
    printf("Vong lap do-while:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");

    // Break va Continue
    printf("Su dung break va continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3) continue;  // Bo qua so 3
        if (i == 8) break;     // Dung tai so 8
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}