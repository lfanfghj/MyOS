#include "print.h"
#include "../lib/kernel/init.h"
void main(void){
	put_str("i am kernel!!!!!\n");
	init_all();
	asm volatile("sti");
	while(1);
}
