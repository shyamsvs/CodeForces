#include<stdio.h>
#include<ctype.h>
int main(){
    char letter[1000];
    scanf("%s",letter);
    letter[0] = toupper(letter[0]);
    printf("%s",letter);
    return 0;
}
