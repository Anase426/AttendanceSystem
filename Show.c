//
// Created by lzccr on 2023/5/19.
//

#include "header/Show.h"

void showLogin(){
    char username[20];
    char password[20];
    char flag='\0';
    printf("-------------------\n");
    printf("|      登录        |\n");
    printf("-------------------\n");

    printf("账号：");
    scanf("%s",username);
    printf("密码：");
    scanf("%s",password);
    printf("选择你的身份（0：管理员，1：学生，2：教师）");
    scanf("%c",&flag);
    switch (flag) {
        case '0':break;
        case '1':break;
        case '':
    }




}