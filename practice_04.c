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