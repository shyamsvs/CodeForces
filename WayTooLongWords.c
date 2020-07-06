#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
    int test;
    scanf("%d",&test);
    while(test--) {
        char input[100000000];
        scanf("%s",input);
        if (strlen(input) > 10){
            printf("%c",input[0]);
            printf("%d",strlen(input) - 2);
            printf("%c",input[strlen(input)-1]);
            printf("\n");
        }
        else{
            printf("%s\n",input);
        }
    }
    return 0;
}
