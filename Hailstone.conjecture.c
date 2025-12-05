#include <stdio.h>

int cnt=0;

int countSteps(int n){
    if(n==1){
        return 1;
    }else{
        if(n%2==0){
            n/=2;
            cnt++;
            countSteps(n);
        }else{
            n=3*n+1;
            cnt++;
            countSteps(n);
        }
    }

}

int main(){
    int n=0;
    scanf("%d",&n);
    countSteps(n);

    printf("%d",cnt);

    return 0;
}