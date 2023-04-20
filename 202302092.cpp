#include <stdio.h>
#include <stdlib.h>

int InputEvent1(void) // 정수 입력 이벤트 
{
    int s; 
    printf(">>정수를 입력하시오. \nnr1.c\\User>");
    scanf("%d", &s); // 정수 입력 받음 
    return s; // 입력 받은 정수 반환 
}

int EndCycleEvent1(void); // 종료 분기점 이벤트 

int funk1(void) 
{
    int x = InputEvent1(); // 정수 입력 이벤트 발생 
    for (int i = 0; i < x; i++)  //순환문: 입력 받은 정수를 길이로 설정-반  
    {
        for (int l = 0; l < i + 1; l++)
        {
            printf("*"); // * 출력 
        }
        printf("\n"); // 줄바꿈 
    }
    return EndCycleEvent1(); // 순환문 종료 분기 이벤트 발생 
}

int funk2(void) {
    int x = InputEvent1();
    for (int i = 0; i < x; i++)
    {
        for (int l = i; l < x; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk3(void) {
    int x = InputEvent1();
    for (int i = 0; i < x; i++)
    {
        for (int l = i; l < x - 1; l++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk4(void) {
    int x = InputEvent1();
    for (int i = 0; i < x; i++)
    {
        for (int l = 0; l < i; l++)
        {
            printf(" ");
        }
        for (int l = i; l < x; l++)
        {
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk5(void) {
    int x = InputEvent1();
    for (int i = 0; i < x; i++)
    {
        for (int l = i; l < x - 1; l++)
        {
            printf(" ");
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk6(void) {
    int x = InputEvent1();
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int l = i * 2 - (x - 1); l < x; l++) //
        {
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk7(void) {
    int x = InputEvent1();
    for (int i = -x + 1; i < x; i++) {
        for (int j = abs(i); j < x; j++) { // j를 i의 절대값으로 선언, j가 x보다 작을동안, 순환을 1번 마칠때 마다 i에 +1 

            printf("*");
        }
        printf("\n");
    }
    /*
    for (int i = -x + 1; i < x; i++) {
        for (int j = 0; j > abs(i) - x; j--) {
            printf("*");
        }
        printf("\n");
    }
    */
    return EndCycleEvent1();
}

int funk8(void) {
    int x = InputEvent1();
    for (int i = -x + 1; i < x; i++) {
        for (int j = abs(i) - 1; j > 0 - x / x; j--) { // j를 i의 값으로 선언, j가 0 -x보다 클 동안, j에 -1
            printf(" ");
        }
        for (int j = x; j > abs(i); j--) {  // j를 x의 값으로 선언, j가 i의 절대값보다 클 동안, j에 -1 
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk9(void)
{
    int x = InputEvent1();
    for (int i = -x + 1; i < x; i++) { // i를 -x에+ 1값으로 선언, i가 x보다 작을동안, i에 +1 
        for (int j = abs(i) - 1; j > 0 - x / x; j--) {
            printf(" ");
        }
        for (int j = x; j > abs(i); j--) {
            printf("*");
        }
        for (int j = abs(i); j < x - 1; j++) {

            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk10(void)
{
    int x = InputEvent1();
    for (int i = -x + 1; i < x; i++) {
        for (int j = abs(i) + 1; j < x; j++) {
            printf(" ");
        }
        for (int c = 2; c >= 1; c--) {
            for (int j = abs(i); j > x / x - c; j--) {
                printf("*");
            }
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk11(void)
{
    int x = InputEvent1();
    for (int i = 0; i < x; i++) {
        for (int l = 0; l < i; l++) {
            printf(" ");
        }
        for (int l = i; l < x; l++) {
            printf("*");
        }
        for (int l = i; l < x - 1; l++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++) {
        for (int l = i; l < x; l++) {
            printf("*");
        }
        for (int j = 0; j <= i - 1; j++) {
            printf(" ");
        }
        for (int l = 0; l < i + 1; l++) {
            printf("*");
        }
        for (int l = i; l < x - 1; l++) {
            printf(" ");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk12(void)
{
    int x = InputEvent1();
    for (int i = 0; i < x; i++) {
        for (int l = 0; l < i + 1; l++) {
            printf("*");
        }
        for (int l = i; l < x - 1; l++) {
            printf(" ");
        }
        for (int l = i; l < x; l++) {
            printf("*");
        }
        for (int j = 0; j <= i - 1; j++) {
            printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < x; i++) {
        for (int l = i; l < x - 1; l++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int l = 0; l < i; l++) {
            printf(" ");
        }
        for (int l = i; l < x; l++) {
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int main(void) { // 메인 함수 
    int n;
    printf(">>출력할 과제의 번호를 입력하시오. (1~12)\nnr1.c\\User>");
    scanf("%d", &n); // 입력문 
    switch (n) // 선택할 과제 목록 
    {
    case 1: // 1번째 선택지 
        funk1(); // 1번째 과제(함수)로 넘어감 
    case 2:
        funk2();
    case 3:
        funk3();
    case 4:
        funk4();
    case 5:
        funk5();
    case 6:
        funk6();
    case 7:
        funk7();
    case 8:
        funk8();
    case 9:
        funk9();
    case 10:
        funk10();
    case 11:
        funk11();
    case 12:
        funk12();
    default: // 예외 처리 
        printf(">>값이 잘못되었습니다.\n");
        return main(); // 메인 함수의 처음으로 
    }
    return 0;
}

int EndCycleEvent1(void) // 종료 분기점 이벤트 내 
{
    int s;
    printf(">>처음으로 돌아가려면 1, 종료하려면 2를 입력하세요. \nnr1.c\\User>"); 
    scanf("%d", &s); // 입력문 
    if (s == 1) // 처음으로 돌아가기 선택 시 
    {
        return main(); // 메인함수로 귀환 
    }
    else if (s == 2) // 프로그램 종료 선택시 
    {
        exit(0); // 프로그램 강제 종료 
    }
    else // 예외처리 
    {
        printf(">>값이 잘못되었습니다.\n");
        return EndCycleEvent1(); // 이 이벤트를 다시 시작 
    }
}
