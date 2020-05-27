#include<stdio.h>
int main(){
    int magnet;
    int count = 1;
    scanf("%d",&magnet);
    int magnets[magnet];
    for(int i=0;i<magnet;i++){
        scanf("%d",&magnets[i]);
    }
    for(int i=1;i<magnet;i++){
        if(magnets[i-1] == magnets[i]){
            continue;
        }
        else{
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
