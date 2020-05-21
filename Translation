#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    int flag = 0;
    scanf("%s",a);
    scanf("%s",b);
    int start = 0;
    int end = strlen(b)-1;
    while(start < strlen(a) && end < strlen(b)){
        if(a[start] == b[end]){
            start++;
            end--;
        }
        else{
            flag = 1;
            break;
        }
    }
    if(flag == 1)printf("NO");
    else printf("YES");
    return 0;
}
