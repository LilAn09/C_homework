#include <stdio.h>

#define MAX_SIZE 100
typedef char DataType;
typedef struct 
{
    DataType data[MAX_SIZE];
    int top;
}SqStack;
//函数功能 初始化栈
//SqStack *s是一个指向结构体SqStack的指针
void InitStack(SqStack *s){
    s->top=-1;
}
//函数功能 判栈空
int StackEmpty(SqStack *s){
    return s->top==-1;
}
//函数功能 判栈满
int StackFull(SqStack *s){
    return s->top==MAX_SIZE-1;
}
//进栈操作
//x为当前读入的数据
void Push(SqStack *s,DataType x){
    if(StackFull(s)){
        printf("overflow.");
        return;
    }
    s->top++;
    s->data[s->top]=x;
}
//出栈操作
//*x是指向存储最先出栈的变量的指针
int Pop(SqStack *s,DataType *x){
    if(StackEmpty(s)){
        return 0;
    }
    *x=s->data[s->top];
    s->top--;
    return 1;
}

int main(){
    char x;
    SqStack stack;
    InitStack(&stack);
    do{
        x=getchar();
        if(x!='\n'){
            Push(&stack,x);
        }//注意：getchar是不会自己读入'\0'的
    }while (x!='\n');

    char ch;
    while(Pop(&stack,&ch)){
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}