#include<stdio.h>
#include<string.h>
int main(){
    char hello[100];
    scanf("%s",hello);
    char target[] = "hello";
    int one = 0;
    int two = 0;
	while(two < strlen(hello) && one < 5){
        if(target[one] == hello[two]){
            one++;
        }
        two++;
	}
//	printf("%d",one);
    if(one == 5)printf("YES");
    else printf("NO");
    return 0;
}
