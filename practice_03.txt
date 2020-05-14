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