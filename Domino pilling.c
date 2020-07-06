#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int ans = floor((m*n)/2);
    printf("%d",ans);
    return 0;
}
