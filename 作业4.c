/*8．猴子吃桃问题  猴子第一天摘下若干个桃子，当即吃了一半多一个。第二天早上又吃了剩下的一半多一个。
以后每天早上都吃了前一天剩下的一半多一个。到第十天早上想再吃时，发现就剩下1个桃子了。求第一天共摘了多少个桃*/
#include<stdio.h>
int main(){
	int n,i,k;
    n=10;
	k=1; 
	for (i=2;i<=n;i++){
		k=k*2+2;
	}
	printf("%d\n",k);
	return 0;
}
 
