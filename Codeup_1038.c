< < 문 제 > >

정수 2개를 입력받아 합을 출력하는 프로그램을 작성해보자.
(단, 입력되는 정수는 -1073741824 ~ 1073741824 이다.)

< < 정 답 > >

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    printf("%d", n1+n2);


    return 0;
}