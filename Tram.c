#include<stdio.h>
int main(){
    int stops;
    scanf("%d",&stops);
    int a;
    int b;
    int max = -1;
    int total = 0;
    for(int i=0;i<stops;i++){
        scanf("%d %d",&a,&b);
        total = (total - a) + b;
        if(total > max){
            max = total;
        }
    }
    printf("%d",max);
    return 0;
}
