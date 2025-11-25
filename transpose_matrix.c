#include <stdio.h>
#define N 10

void Swap(int *x, int *y)
    {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Transpose(int a[][N], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // j从i+1开始，避免重复交换
            Swap(&a[i][j], &a[j][i]);     // 交换对称位置的元素
        }
    }
}



int main(){
    int n;
    int matrix[N][N];

    printf("请输入矩阵的维度n(n≤10):");
    scanf("%d",&n);
    printf("请输入%dx%d矩阵的元素:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    Transpose(matrix, n);

    printf("转置后的矩阵：\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}