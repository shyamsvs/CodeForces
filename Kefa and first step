#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number == 1){
        printf("1");
        return 0;
    }
    int cash[number];
    int count = 1;
    int max = -1;
    for(int i=0;i<number;i++){
        scanf("%d",&cash[i]);
    }
    for(int i=0;i<number-1;i++){
        if(cash[i+1] >= cash[i]){
            count++;
        }
        else{
            if(max<count){
                max = count;
            }
            count = 1;
        }
        if(max<count)max = count;
    }
    printf("%d",max);
    return 0;
}
