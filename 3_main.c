//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>

int main()
 {
    int n;
    int isPrime = 1; 
    int i = 2; 

   
    printf("请输入一个小于50的正整数：");
    scanf("%d", &n);

    
    if (n <= 0 || n >= 50) 
    {
        printf("输入无效，请输入小于50的正整数\n");
        return 1;
    }

    
    if (n == 1)
    {
        isPrime = 0; 
    } else 
    {
      
        while (i < n)
        {
            if (n % i == 0) 
            {
                isPrime = 0; 
                break;
            }
            i++;
        }
    }

   
    if (isPrime)
    {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;
}
