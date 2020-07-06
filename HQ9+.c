#include<string.h>
#include<stdio.h>
int main(){
    char code[100];
    scanf("%s",code);
    for(int i = 0;i<strlen(code);i++){
        if(code[i] == 'H' || code[i] == 'Q' || code[i] == '9'){
               printf("YES");
               return 0;
           }
    }
    printf("NO");
    return 0;
}
