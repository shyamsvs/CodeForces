#include<stdio.h>
#include<string.h>
void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
int main(){
    int number;
    int times;
    scanf("%d %d",&number,&times);
	char gender[number];
	scanf("%s",gender);
    while(times--){
        for(int i=0;i<number-1;i++){
            if(gender[i] == 'B' && gender[i+1]== 'G'){
                swap(&gender[i], &gender[i+1]);
                i++;
            }
        }
    }
	printf("%s",gender);
    return 0;
}
