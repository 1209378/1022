//202516301209
//15183116485@163.com
//廖清惠
#include <stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}

#include <stdio.h>

int main() {
    
    int a, b, c;
    
  
    printf("请输入三个整数（代表三条线段长度，用空格分隔）：");
    scanf("%d %d %d", &a, &b, &c);
    
   
    if (a + b > c && a + c > b && b + c > a) {
        printf("可以组成三角形\n");
    } else {
        printf("不能组成三角形\n");
    }
    
    return 0;
}
