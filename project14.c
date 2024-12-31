#include<stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}int Search(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k) {
            return mid;
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() 
{
    int n, k;
    printf("请输入数组长度: ");
    scanf("%d", &n);

    int arr[n];
    printf("请输入数组元素: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("请输入要查找的值: ");
    scanf("%d", &k);
    bubbleSort(arr, n);

    int Index = Search(arr, n, k);
    if (Index != -1) {
        printf("二分查找: 元素 %d 在数组中的位置是 %d\n", k, Index);
    } else {
        printf("二分查找: 数组中没有找到元素 %d\n", k);
    }

    return 0;
}