//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>

int main()
 {
    int num = 100;
    while (num <= 999)
     {
        
        int a = num % 10;        
        int b = (num / 10) % 10;
        int c = num / 100;      
        
      
        if (a * a * a + b * b * b + c * c * c == num) 
        {
            printf("%d", num);
            
            if (num != 407) 
            {
                printf(" ");
            }
        }
        
        num++;
    }
    printf("\n");
    return 0;
}
