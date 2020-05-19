#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    int ans = 1;
    scanf("%s",name);
    int hashcount = 1;
	int flag = 1;
    int len = strlen(name);
	char hash[len];
	hash[0] = name[0];
    for(int i = 1;i<len;i++){
        for(int j = 0;j<hashcount;j++){
            if(name[i] == hash[j]){
				flag = 0;
				break;
            }
        }
		if(flag){
			ans++;
            hash[hashcount] = name[i];
			//printf("%s\n",hash);
			hashcount++;
		}
		flag = 1;
    }
	//printf("%d\n",ans);
	//printf("%s\n",hash);
	if(ans%2 == 0)printf("CHAT WITH HER!");
	else printf("IGNORE HIM!");
    return 0;
}
