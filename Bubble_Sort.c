#include <stdio.h>

int main(){
    int arr[6] = {9, 3, 7, 1, 6, 2};
    int n = 6;
    int i=0,j=0,k=0;
    int temp=0;
    int no_swap;

    for(i=0;i<n;i++){
        no_swap=1;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                no_swap=0;
            }
        }
        if(no_swap){
            break;
        }
    }

    for(k=0;k<n;k++){
        printf("%d ",arr[k]);
    }

    return 0;
}