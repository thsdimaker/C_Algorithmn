프로그래밍적 마인드

hello world를 3번 출력하고 싶어?

int main(){

printf("hello world\n");
printf("hello world\n");
printf("hello world\n");

return 0;
}


이렇게 3개로만 하면 끝날까?
만약 10번 혹은 100번 혹은 1000번 혹은 그 이상 이라면?

그래서 반복문이라는게 필요

int main(){
    for(int i=0;i<=3;i++){
        printf("Hello world!\n");     
    }
    return 0;
}

Tip)
    * 처음 단계에서는 일단 이러한 노가다성 불편함들을 직접겪어 보는것도 괜찮다.
      직접 겪어보고 불편함을 느끼는 과정속에서 필요성을 느끼게 되면 그때 습득해도 괜찮으니 일단 기본적인 마인드 정립을하고 가자.

    * 이론은 한 두번 읽고 본인이 직접 코딩 해볼 것. 그리고 다시 복기하고 다시 프로그래밍 하는 작업이 필요하다.
      이론만 하는 짓은 마치 수영교본을 보고 수영을 배웠다고 하는것과 다름이 없다.


    