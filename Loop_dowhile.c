#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sum=0;
    int input_num=0;
    int i=0;

    printf("1~n 까지의 합은?");
    scanf("%d", &input_num);

    do{
        sum += i;
        i++;
    }
    while(i<=input_num);

    printf("%d", sum);


}
