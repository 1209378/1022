//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>

int main() 
{
    int arr[5] = {0};
    int i;
    
    
    printf("请输入4个整数：\n");
    for (i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        arr[4] += arr[i]; 
    }
    
    
    printf("数组内容：");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
