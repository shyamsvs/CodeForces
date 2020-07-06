#include<stdio.h>
int main(){
    long long int price;
    long long int number;
    long long int inHand;
    long long int total = 0;
    scanf("%lld %lld %lld",&price,&inHand,&number);
	while(number){
		total = total + (price * number);
		number--;
	}
    if(total - inHand <= 0)printf("0");
    else printf("%lld",total - inHand);
    return 0;
}
