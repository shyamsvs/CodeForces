#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int main(){
    char first[100];
    char second[100];
	char fir;
	char sec;
	int check = 0;
    scanf("%s",first);
    scanf("%s",second);
	int len = strlen(first);
    for(int i=0;i<len;i++){
        fir = tolower(first[i]);
        sec = tolower(second[i]);
        if(fir == sec){
			check++;
        }
        else if(fir < sec){
			check = len + 1;
			break;
        }
        else{
			check = len - 1;
			break;
        }
    }
    if(check == len)printf("0");
	else if(check>len)printf("-1");
	else printf("1");
    return 0;
}
