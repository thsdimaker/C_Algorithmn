#include <stdio.h>
#include <stdlib.h>

void A();
void B();
void C();

int main(){

    printf("누구를 위한?\n");
    A();

    printf("무엇?\n");
    B();

    printf("어떻게?\n");
    C();
}

void A(){
    printf("C언어 입문자를 위한\n");
}

void B(){
    printf("C 언어 기본이 담긴 핵심 요약 집\n");
}

void C(){
    printf("일단 따라하고 그 다음에 복기 하자!");
}
