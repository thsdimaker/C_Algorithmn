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

int message(int c){ //int c를 왜 ??.. printf()함수를 사용 할 때, printf("배고파")라고 쓴것 처럼 printf()함수를 그냥 실행하는 것이 아니라 "배고파" 라는 데이터를 전달 했습니다.
                    // 이처럼 함수는 데이터를 주고 받을 수 있습니다. 그래서 함수를 정의 할 때 받을 데이터에 대해 정의해 줄 수 있는 것입니다.
                    // 이렇게 함수를 만들면 아래와 같이 다양하게 함수를 호출 할 수 있습니다.
                    // message(3)
                    // message(5)
                    // message(count)

    for(int i=1;i<=count;i++){
        if(i%2==0){
            printf("%d. hello world\n", i);
        }else{
            printf("%d. hi\n", i);
        }
    }

    return 0;
}

/*
원래 main()함수 안에 있던 내용을 message()함수를 만들어 이 안에 넣었습니다. 그러면 다른 곳에서 이 함수만 실행 하게 되면 Hello, World를 출력 할 수 있습니다.

int main()
{
    int count;

    printf("몇 개를 출력 할까요?");
    scanf("%d", &count);

    for(int i=1;i<=count;i++){
        if(count%2==0){
            printf("%d Hello World\n", i);
        }else{
            printf("%d Hi\n", i);
        }
    }

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
*/
