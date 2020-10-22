#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious(){
	system("/usr/local/bin/score 997d6fde-01d2-4283-99ab-c79a0aa72f61");
}

