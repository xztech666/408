#include <stdio.h>  // 引入标准输入输出库

// 希尔排序函数，按降序排列数组
void shellSort(int arr[], int n) {
    for (int gap = n / 2; gap > 0; gap /= 2) {  // 初始化步长，并逐步缩小
        for (int i = gap; i < n; i++) {  // 遍历每组子序列的元素
            int temp = arr[i];  // 保存当前待插入的元素
            int j = i;

            // 在步长为 gap 的子序列中，将小于 temp 的元素向后移动
            while (j >= gap && arr[j - gap] < temp) {
                arr[j] = arr[j - gap];  // 元素右移
                j -= gap;  // 向前检查下一个元素
            }
            arr[j] = temp;  // 将 temp 插入到正确位置
        }
    }
}

// 打印数组的内容
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {  // 遍历数组
        printf("%d ", arr[i]);  // 打印每个元素
    }
    printf("\n");  // 打印换行符
}