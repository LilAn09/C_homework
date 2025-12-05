#include <stdio.h>

#define MAX_SIZE 100
typedef char DataType;
typedef struct 
{
    DataType data[MAX_SIZE];
    int top;
}SqStack;

void InitStack(SqStack *s){
    s->top=-1;
}
int StackEmpty(SqStack *s){
    return s->top==-1;
}
int StackFull(SqStack *s){
    return s->top==MAX_SIZE-1;
}
void Push(SqStack *s,DataType x){
    if(StackFull(s)){
        printf("overflow.");
        return;
    }
    s->top++;
    s->data[s->top]=x;
}
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
        }
    }while (x!='\n');

    char ch;
    while(Pop(&stack,&ch)){
        printf("%c",ch);
    }
    printf("\n");
    return 0;
}