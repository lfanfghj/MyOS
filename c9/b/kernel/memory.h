#ifndef __KERNEL_MEMORY_H
#define __KERNEL_MEMORY_H

#include "stdint.h"
#include "bitmap.h"

struct virtual_addr
{
    struct bitmap vaddr_bitmap;
    uint32_t vaddr_start;
};

extern struct pool kernel_pool, user_pool;
void mem_init(void);

enum pool_flags{
    PF_KERNEL = 1,
    PF_USER = 2
};

void* get_kernel_pages(uint32_t pg_cnt);

#define PG_P_0  0   //exiting bit of page table
#define PG_P_1  1   //1B
#define PG_RW_R  0  //read/write property bit of page table
#define PG_RW_W  2  //10B
#define PG_US_S  0  //user/system property bit of page table
#define PG_US_U  4  //100B

#endif