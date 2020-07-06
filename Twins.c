#include<stdio.h>
#include <stdlib.h>
 
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
 
int main(){
    int number;
    int sum = 0;
    int loopsum = 0;
    int count = 0;
    scanf("%d",&number);
    int coins[number];
    for(int i=0;i<number;i++){
        scanf("%d",&coins[i]);
        sum = sum + coins[i];
    }
     qsort(coins, number, sizeof(int), cmpfunc);
     
     for(int i = number-1; i>=0 ;i--){
         loopsum = loopsum + coins[i];
         if(loopsum > (sum - loopsum)){
             break;
         }
         count++;
     }
     printf("%d",count+1);
     return 0;
}
