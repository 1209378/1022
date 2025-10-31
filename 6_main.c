//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>

int main() 
{
    int arr[5];  
    int count = 0;  
    int num;

    
    printf("请输入数字（仅偶数有效，需共输入5个）：\n");
    while (count < 5) 
    {
        scanf("%d", &num);
        
        if (num % 2 == 0)
        {
            arr[count] = num;
            count++;
        }
        
    }

    
    printf("输出结果：");
    for (int i = 0; i < 5; i++) 
    {
        if (i == 4) 
        {
            printf("%d", arr[i]);
        } else 
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
