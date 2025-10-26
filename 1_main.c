//202516301209
//15183116485@163.com
//廖清惠

#include <stdio.h>  
int main() {
   
    float celsius, fahrenheit;

  
    printf("请输入摄氏温度：");
 
    scanf("%f", &celsius);


    fahrenheit = celsius * 9 / 5 + 32;

  
    printf("转换后的华氏温度为：%.1f\n", fahrenheit);

    return 0;  
}
