#include "print.h"
#include "init.h"
#include "debug.h"
#include "memory.h"

int main(void){
	put_str("i am kernel! i am coming!!!\n");
	init_all();
	mem_init();
	while(1);

	return 0;
}
