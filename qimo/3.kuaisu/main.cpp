#include <stdio.h>

// 交换函数
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 分区函数
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // 选取最右边的元素作为基准值
    int i = low - 1;       // i指向小于基准值的区域的末尾

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) { // 将小于等于pivot的元素移到左侧
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    // 将基准值放到最终位置
    swap(&arr[i + 1], &arr[high]);
    return i + 1; // 返回基准值所在位置
}

// 快速排序函数
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 获取分区索引
        int pivotIndex = partition(arr, low, high);

        // 对左右子数组进行递归排序
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 主函数
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("old list: ");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("new list: ");
    printArray(arr, n);

    return 0;
}