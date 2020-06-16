#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    int sum=0;
    int input_num=0;

    printf("1~n 까지의 합은?");
    scanf("%d", &input_num);

    for(int i=0;i<=input_num;i++){
        sum += i;
    }

    printf("%d", sum);


}
