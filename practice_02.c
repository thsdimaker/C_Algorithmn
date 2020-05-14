#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_count;

    printf("몇개를 출력 할 까요?");
    scanf("%d", &user_count);

    user_count = user_count * 2;

    for(int i=0;i<=user_count;i++){
        printf("%d Hello World\n", i);
    }

    return 0;
}
