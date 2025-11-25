#include <stdio.h>
#include <string.h>//使用字符串函数时记得加上

int main(){
    char* weekday[7]={"Monday","Tuesday","Wednesday","Thursday","Friday",
"Saturday","Sunday"};/*字符串数组可以用指针数组或者二维数组，两者都可以用
                    weekday[i]来表示某个字符串。如果用指针数组，
                    里面存的是指向这些字符串的指针在c语言中，字
                    符串首地址+\0表示这个字符串*/
    int i=0,n=0;
    char s[100];
    scanf("%99s",s);//读入一个字符串。%99s意思是最多读入99个字符并自动补上\0

    for(i=0;i<7;i++){
        if(strcmp(s,weekday[i])==0){
            n=i;
            break;
        }
    }//逐个对比

    if(i<7){
        printf("%d",n);
    }else{
        printf("NOT FOUND");
    }
    return 0;
}