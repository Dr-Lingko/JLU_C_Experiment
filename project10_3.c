#include <stdio.h>

int main() {
    int num, sum = 0;
    char *months[] = {
        "January", "February", "March", "April", "May", "June", 
        "July", "August", "September", "October", "November", "December"
    };

    printf("请输入一个3位数: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("***\n");
        return 0;
    }

    sum += num / 100;       // 百位
    sum += (num / 10) % 10; // 十位
    sum += num % 10;        // 个位

    if(sum % 2 == 0) {
        printf("这个数的各位数字之和是偶数\n");
    } else {
        printf("这个数的各位数字之和是奇数\n");
    }