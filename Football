#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char players[100];
    int isDanger = 0;
    int count = 1;
    scanf("%s",players);
    int len = strlen(players);
    for(int i=0;i<len-1;i++){
        if(players[i] == players[i+1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count == 7){
            isDanger = 1;
        }
    }
    if(isDanger)printf("YES");
    else printf("NO");
    return 0;
}
