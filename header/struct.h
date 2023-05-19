//
// Created by lzccr on 2023/5/19.
//

#ifndef ATTENDANCESYSTEM_STRUCT_H
#define ATTENDANCESYSTEM_STRUCT_H
#define OK 0
#define ERROR 1
#define OVERFLOW 2

// 学生对象
typedef struct Student {
    int userID;
    char username[20];
    char password[20];
    int class;
} Student;

// 学生链表
typedef struct StuNode {
    Student stu;
    struct StuNode *next;
} StuNode, *StuLinkList;

// 教师对象
typedef struct Teacher {
    int userID;
    char username[20];
    char password[20];
    int class[10];
} Teacher;

// 教师链表
typedef struct TeaNode {
    Teacher tea;
    struct TeaNode *next;
} TeaNode, *TeaLinkList;

// 教师发起签到对象
typedef struct Attendance {
    int qdID;
    int class;
    long qdStartTime;   // 开始时间戳
    long qdEndTime;     // 结束时间戳
} Attendance;

// 学生签到对象
typedef struct Clocking {
    int qdID;
    int userID;
    long time;
} Clocking;

typedef int Status;

#endif //ATTENDANCESYSTEM_STRUCT_H
