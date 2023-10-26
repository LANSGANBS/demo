#include<stdio.h>

int main()
{
    int i, max, min, n;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]); // 这里应该是&a[i]，而不是a[n]
    max = min = a[0]; // 初始化max和min为数组的第一个元素
    for(i = 0; i < n; i++) {
        if(a[i] < min)
            min = a[i]; // 如果a[i]小于min，更新min
        else if(a[i] > max)
            max = a[i]; // 如果a[i]大于max，更新max
    }
    printf("%d", max - min);
    return 0;
}
