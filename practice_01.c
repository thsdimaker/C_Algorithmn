C언어의 처음이자 끝은 printf(); 라고 할 정도로 많은 기초를 담고 있습니다.

다음과 같은 프로그램을 만들고자 합니다.

"사용자가 입력한 숫자 만큼 hello world를 출력해주는 프로그램"

생각해보기)
hello world를 5번 출력하고 싶습니다.

이때
printf("hello world");
printf("hello world");
printf("hello world");
printf("hello world");
printf("hello world");

과연 올바른 방법일까요? 만약에 100개 만약에 1000개 혹은 999999개가 된다면??.. 어떻게 처리할건가요?

------------------------------------------------------------------------






< 실 습 정 답 >

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_count;

    printf("몇 개를 출력 하시겠습니까?? ");
    scanf("%d", &user_count);

    for(int i=0;i<=user_count;i++){
        printf("hello world\n");
    }

    return 0;
}
