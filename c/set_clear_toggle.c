#include<stdio.h>

int main(){
	int n,pos;
	printf("Enter a number and position:");
	scanf("%d %d",&n,&pos);

	int set=n|(1<<pos);
	int clear=n&~(1<<pos);
	int toggle=n^(1<<pos);
	printf("Set value is :%d\n",set);
	printf("Clear value is :%d\n",clear);
	printf("Toggle value is :%d\n",toggle);

	return 0;
}
