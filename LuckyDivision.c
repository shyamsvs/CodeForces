#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int lucky;
    int digit;
	scanf("%d",&lucky);
    if(lucky % 4 ==0 || lucky % 7 == 0 || lucky % 44 == 0 || lucky % 47 == 0 || lucky % 74 == 0 || lucky % 77 == 0 || lucky % 444 == 0 || lucky % 447 == 0 || lucky % 474 == 0 || lucky % 477 == 0 || lucky % 744 == 0 ||lucky % 747 == 0 || lucky % 774 == 0 || lucky % 777 == 0){
    printf("YES");
    return 0;
    }
    while(lucky){
        digit = lucky % 10;
        if(!(digit == 4 || digit == 7)){
            printf("NO");
            return 0;
        }
        lucky = lucky / 10;
    }
	printf("YES");
    return 0;
}
