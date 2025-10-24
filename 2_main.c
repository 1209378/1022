//202516301209
//15183116485@163.com
廖清惠
#include <stdio.h> 

int main() {
    int score; 
  
    printf("请输入学生成绩（0-100）：");
 
    scanf("%d", &score);

  
    if (score >= 90 && score <= 100) {
        printf("等级：A\n");
    } else if (score >= 80 && score <= 89) {
        printf("等级：B\n");
    } else if (score >= 70 && score <= 79) {
        printf("等级：C\n");
    } else if (score >= 60 && score <= 69) {
        printf("等级：D\n");
    } else if (score >= 0 && score < 60) {
        printf("等级：E\n");
    } else {

        printf("输入错误！成绩需在0-100之间\n");
    }

    return 0; 
}
