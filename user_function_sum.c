#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sum(int n1, int n2){
    int loc_sum;
    loc_sum = n1 + n2;

    return loc_sum;
}

int main(void){
    int num1, num2, main_sum;

    printf("숫자 1 : ");
    scanf("%d", &num1);

    printf("숫자 2 : ");
    scanf("%d", &num2);

    main_sum = sum(num1, num2);

    printf("결과 %d\n", main_sum);

    return 0;

}
