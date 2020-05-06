< < 문 제 > >

다섯 자리의 정수 1개를 입력받아 각 자리별로 나누어 출력한다.

참고
scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
를 사용하면 1개의 숫자로 각각 구분되어 저장된다.

예시
읽어들인 값을 적당히 바꿔 출력하기 위해서

printf("[%d]", a*10000);

과 같은 방법도 가능하다.

< < 정 답 > >

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,d,e;

    scanf("%1d %1d %1d %1d %1d", &a, &b, &c, &d, &e);

    printf("%d\n", a * 10000);
    printf("%d\n", b * 1000);
    printf("%d\n", c * 100);
    printf("%d\n", d * 10);
    printf("%d\n", e);
}
