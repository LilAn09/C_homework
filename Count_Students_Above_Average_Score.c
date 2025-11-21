#include <stdio.h>

int above_average(int grade[],int students){
    int sum=0;
    int j=0,k=0,n=0;
    int average=0;

    for(j=0;j<students;j++){
        sum+=grade[j];
    }
    average=(double)sum/students;//计算平均分

    for(k=0;k<students;k++){
        if(grade[k]>average){
            n++;
        }
    }//统计高于平均分的学生人数

    return n;
}/*计算平均分并统计高于平均分的学生人数的函数*/

int main(){
    int grade[41];
    int i=0,cnt=0;
    int students_above_average=0;

    for(i=0;i<=40;i++){
        scanf("%d",&grade[i]);
        if(grade[i]<0){
            break;
        }
        cnt++;
    }//读写数组

    students_above_average=above_average(grade,cnt);/*注意：当函数需要传入
    数组时，参数部分只写数组名称*/
    printf("%d",students_above_average);

    return 0;
}