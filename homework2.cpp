#include <stdio.h>

int main(void) {
    int index;
    printf("Enter the index of the Fibonacci sequence: ");
    scanf("%d", &index);

    int array[index];
    array[0] = 1; // 初始化斐波那契数列的第一项为1
    array[1] = 1; // 初始化斐波那契数列的第二项为1

    if (index < 2) {
        printf("Fibo=1.");
        return 1; // 退出程序，因为无需计算斐波那契数列
    }
    else{
    for (int i = 2; i < index; i++) {
        array[i] = array[i - 1] + array[i -2];
    }

    for (int i = 0; i < index; i++) {
        printf("Fibo=%d\n", array[i]); // 打印斐波那契数列的值
    }
}
    return 0;
}

