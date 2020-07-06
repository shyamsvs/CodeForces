#include<stdio.h>
#include<math.h>
int main(){
    long int dist;
    int count = 0;
	long int ans;
    scanf("%ld",&dist);
    if(dist<=5)printf("1");
	else if(dist%5 == 0){
		ans = dist / 5;
		printf("%ld",ans);
	}
	else{
		ans = ceil(dist/5);
		printf("%ld",ans+1);
	}
    return 0;
}
