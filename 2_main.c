//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>


int getCubeSum(int n)
 {
    int sum = 0;
    int temp = n;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit; 
        temp /= 10; 
    }
    return sum;
}

int main()
 {
    for (int i = 100; i <= 999; i++)
     {
        if (getCubeSum(i) == i)
        { 
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
