#include <stdio.h>
#include <stdlib.h>

int InputEvent1(void) // ���� �Է� �̺�Ʈ 
{
    int s; 
    printf(">>������ �Է��Ͻÿ�. \nnr1.c\\User>");
    scanf("%d", &s); // ���� �Է� ���� 
    return s; // �Է� ���� ���� ��ȯ 
}

int EndCycleEvent1(void); // ���� �б��� �̺�Ʈ 

int funk1(void) 
{
    int x = InputEvent1(); // ���� �Է� �̺�Ʈ �߻� 
    for (int i = 0; i < x; i++)  //��ȯ��: �Է� ���� ������ ���̷� ����-��  
    {
        for (int l = 0; l < i + 1; l++)
        {
            printf("*"); // * ��� 
        }
        printf("\n"); // �ٹٲ� 
    }
    return EndCycleEvent1(); // ��ȯ�� ���� �б� �̺�Ʈ �߻� 
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
        for (int j = abs(i); j < x; j++) { // j�� i�� ���밪���� ����, j�� x���� ��������, ��ȯ�� 1�� ��ĥ�� ���� i�� +1 

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
        for (int j = abs(i) - 1; j > 0 - x / x; j--) { // j�� i�� ������ ����, j�� 0 -x���� Ŭ ����, j�� -1
            printf(" ");
        }
        for (int j = x; j > abs(i); j--) {  // j�� x�� ������ ����, j�� i�� ���밪���� Ŭ ����, j�� -1 
            printf("*");
        }
        printf("\n");
    }
    return EndCycleEvent1();
}

int funk9(void)
{
    int x = InputEvent1();
    for (int i = -x + 1; i < x; i++) { // i�� -x��+ 1������ ����, i�� x���� ��������, i�� +1 
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

int main(void) { // ���� �Լ� 
    int n;
    printf(">>����� ������ ��ȣ�� �Է��Ͻÿ�. (1~12)\nnr1.c\\User>");
    scanf("%d", &n); // �Է¹� 
    switch (n) // ������ ���� ��� 
    {
    case 1: // 1��° ������ 
        funk1(); // 1��° ����(�Լ�)�� �Ѿ 
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
    default: // ���� ó�� 
        printf(">>���� �߸��Ǿ����ϴ�.\n");
        return main(); // ���� �Լ��� ó������ 
    }
    return 0;
}

int EndCycleEvent1(void) // ���� �б��� �̺�Ʈ �� 
{
    int s;
    printf(">>ó������ ���ư����� 1, �����Ϸ��� 2�� �Է��ϼ���. \nnr1.c\\User>"); 
    scanf("%d", &s); // �Է¹� 
    if (s == 1) // ó������ ���ư��� ���� �� 
    {
        return main(); // �����Լ��� ��ȯ 
    }
    else if (s == 2) // ���α׷� ���� ���ý� 
    {
        exit(0); // ���α׷� ���� ���� 
    }
    else // ����ó�� 
    {
        printf(">>���� �߸��Ǿ����ϴ�.\n");
        return EndCycleEvent1(); // �� �̺�Ʈ�� �ٽ� ���� 
    }
}
