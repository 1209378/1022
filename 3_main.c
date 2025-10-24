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
    int a, b;      
    char operator;  
    int result;    

  
    printf("请按格式输入（示例：3 5 +）：");

    scanf("%d %d %c", &a, &b, &operator);


    switch (operator) {
        case '+':
            result = a + b;
            printf("结果：%d\n", result);
            break;
        case '-':
            result = a - b;
            printf("结果：%d\n", result);
            break;
        case '*':
            result = a * b;
            printf("结果：%d\n", result);
            break;
        case '/':
          
            if (b != 0) {
                result = a / b; 
                printf("结果：%d\n", result);
            } else {
                printf("错误：除数不能为0\n");
            }
            break;
        default:
        
            printf("错误：仅支持 +、-、*、/ 四种运算符\n");
    }

    return 0;  
}
