#include <stdio.h>
int main(){
	int t,a,b,c,d,e;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a<b)e=a,a=b,b=e;
		if(c<d)e=c,c=d,d=e;
		if(a!=c)printf("No\n");
		else if(b+d!=a)printf("No\n");
		else printf("Yes\n");
	}
}
