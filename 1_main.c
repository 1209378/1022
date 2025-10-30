//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>


int isPrime(int n) 
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            return 0; 
        }
    }
    return 1; 
}

int main()
{
    int n;
    printf("请输入一个小于50的正整数：");
    scanf("%d", &n);
    
    if (isPrime(n))
    {
        printf("密钥安全，密码设置成功\n");
    } else 
    {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
