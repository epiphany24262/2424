#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // 有n组数据
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int b = 1, c = 2;
    for (i = 0; i < n; i++) {
        if (a[i] <= 3) {
            printf("no\n");
        } else {
            while (c < a[i] && b != 0) {
                b = a[i] % c;
                c++;
            }
            if (b == 0) {
                printf("no\n");
            } else {
                printf("yes\n");
            }
        }
    }
    return 0;
}


