#include<stdio.h>
int main(){
    int a = 1;
    int b = 1;
    int count = 1;
    scanf("%d %d",&a,&b);
    while(1){
        a = a * 3;
        b = b * 2;
        if(a>b){
            break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}
