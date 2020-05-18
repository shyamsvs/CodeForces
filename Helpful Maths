#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%s",string);
    int ones = 0;
    int twos = 0;
    int threes = 0;
    int len = strlen(string);
    int count = 1;
    for(int i = 0 ;i <len;i = i+2){
        if(string[i] == '1')ones++;
        else if(string[i] == '2')twos++;
        else threes++;
    }
    for(int i=0;i<ones;i++){
        if(count == strlen(string))printf("1");
        else {
            printf("1+");
            count = count + 2;
    }
	}
    for(int i=0;i<twos;i++){
        if(count == strlen(string))printf("2");
        else {
            printf("2+");
            count = count + 2;
    }
	}
    for(int i=0;i<threes;i++){
       if(count == strlen(string))printf("3");
        else {
            printf("3+");
            count = count + 2;
    }
	}
    return 0;
}
