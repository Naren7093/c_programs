#include<stdio.h>
int main(){
	int n,pos;
	printf("Enter a number:\n");
	scanf("%d",&n);

	printf("Enter position:\n");
	scanf("%d",&pos);

	int set=n|(1<<pos);
	printf("set %dth bit:%d\n",pos,set);

	int clear=n&~(1<<pos);
	printf("clear %dth bit :%d\n",pos,clear);

	int toggle=n^(1<<pos);
	printf("Toggle %dth bit :%d\n",pos,toggle);

	return 0;
}


