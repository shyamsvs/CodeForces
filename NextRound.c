#include<stdio.h>
#include<conio.h>
int main(){
    int players;
    int kthplayer;
    int count = 0;
    scanf("%d %d",&players,&kthplayer);
    kthplayer = kthplayer-1;
    int score[players];
    for(int i=0;i<players;i++){
        scanf("%d",&score[i]);
    }
    for(int i=0;i<players;i++){
        if( (score[i] >= score[kthplayer]) && !(score[i] == 0 && score[kthplayer]==0)){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
