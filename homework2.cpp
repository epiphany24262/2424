#include <stdio.h>

int main(void) {
    int index;
    printf("Enter the index of the Fibonacci sequence: ");
    scanf("%d", &index);

    int array[index];
    array[0] = 1; // ��ʼ��쳲��������еĵ�һ��Ϊ1
    array[1] = 1; // ��ʼ��쳲��������еĵڶ���Ϊ1

    if (index < 2) {
        printf("Fibo=1.");
        return 1; // �˳�������Ϊ�������쳲���������
    }
    else{
    for (int i = 2; i < index; i++) {
        array[i] = array[i - 1] + array[i -2];
    }

    for (int i = 0; i < index; i++) {
        printf("Fibo=%d\n", array[i]); // ��ӡ쳲��������е�ֵ
    }
}
    return 0;
}

