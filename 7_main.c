//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>

int main() 
{
    int arr[5];  
    int i;

    
    printf("请输入当前记录的前4位学生学号：");
    for (i = 0; i < 4; i++) 
    {
        scanf("%d", &arr[i]);
    }

    
    for (i = 4; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

   
    arr[0] = 0;

   
    printf("更新后的提交记录：");
    for (i = 0; i < 5; i++) 
    {
        if (i == 4) {
            printf("%d", arr[i]);  
        } else {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
