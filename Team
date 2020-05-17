#include<stdio.h>
#include<conio.h>
int main(){
    int problems;
    int total = 0;
    scanf("%d",&problems);
        int surety[problems][3];
        for(int i=0;i<problems;i++){
            for(int j=0;j<3;j++){
                scanf("%d",&surety[i][j]);
            }
        }
        for(int i=0;i<problems;i++){
            int count = 0;
            for(int j=0;j<3;j++){
                if(surety[i][j] == 1){
                    count++;
                }
            }
            if(count >=2){
                total++;
            }
        }
    printf("%d",total);
    return 0;
}
