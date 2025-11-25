#include <stdio.h>

struct date_of_birth{
    int year;
    int month;
    int day;
};//定义出生日期结构体

struct Occupational_Status{
    char college[20];
    char professional_title[20];
    char position[20];
};//定义职业状况结构体

typedef struct registration_form{
    char name[20];
    char gender[10];
    struct date_of_birth date;
    struct Occupational_Status job;
}RegForm;//定义注册表结构体（含嵌套）

int main(){
    RegForm people[5];
    int i=0,j=0;
    int person_max_age=0;

    for(i=0;i<5;i++){
        printf("Enter your name:");
        scanf("%19s",people[i].name);//用字符数组读入字符串的时候不需要取地符号，因为数组名字本身就是指针（后面同理）
        printf("Enter your gender(male/female):");
        scanf("%9s",people[i].gender);
        printf("Enter your date of birth:");
        scanf("%d %d %d",&people[i].date.year,&people[i].date.month,&people[i].date.day);
        printf("Enter your college:");
        scanf("%19s",people[i].job.college);
        printf("Enter your professional_title:");
        scanf("%19s",people[i].job.professional_title);
        printf("Enter your position:");
        scanf("%19s",people[i].job.position);
    }

    for (j = 1; j < 5; j++) {
        // 比较年份：年份小则年龄大
        if (people[j].date.year < people[person_max_age].date.year) {
            person_max_age = j;
        }
        // 年份相同，比较月份：月份小则年龄大
        else if (people[j].date.year == people[person_max_age].date.year) {
            if (people[j].date.month < people[person_max_age].date.month) {
                person_max_age = j;
            }
            // 月份相同，比较日期：日期小则年龄大
        else if (people[j].date.month == people[person_max_age].date.month) {
            if (people[j].date.day < people[person_max_age].date.day) {
                    person_max_age = j;
                }
            }
        }

    }

    printf("The oldest person:%s",people[person_max_age].name);

    return 0;
}