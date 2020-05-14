/*
작성자 : 장 동 근
작성날짜 : 2020/05/15
프로그램 목적 : 사용자에게 입력받은 수만큼 인사를 출력하는 프로그램
*/

#include <stdio.h>
#include <stdlib.h>

int count;
int message(int c);

int main()
{
    printf("몇개를 출력 할 것인가요?");
    scanf("%d", &count);
    message(count);

    return 0;
}

int message(int c){

    for(int i=1;i<=count;i++){
        if(i%2==0){
            printf("%d. hello world\n", i);
        }else{
            printf("%d. hi\n", i);
        }
    }

    return 0;
}