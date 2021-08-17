#define CHECK_FLAG_MMAP(flags,bit)   ((flags) & (1 << (bit)))
void printf_mmap_addr(multiboot_info_t *mbi){
  if(CHECK_FLAG_MMAP (mbi->flags, 6)){
    printf("memory map adress: 0x");
    print_int((int) mbi->mmap_addr);
  }
}