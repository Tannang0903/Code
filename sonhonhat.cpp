#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int i, s = 0;
	for(i = 1000 ; i >= n; i--){
		if(i%2==1 && i%3==1 && i%4==1 && i%5==1 && i%6==1) 
		s = i;
	}
	if(s>=100) printf("%d",s);
	else printf("NO SOLUTION");
	return 0;
}
