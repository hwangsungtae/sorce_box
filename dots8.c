typedef volatile unsigned short hword;
#define VRAM #0x06000000

int main(void){
        hword*ptr;
        hword color;
        int i;
        color=0x07FE0;
        
        ptr=(hword*)0x04000000;
        *ptr=0x0F03;
        ptr=(hword*)0x06000000;
        
           for(i=0;i<240*160;i=i+1){
                *ptr=color;
                ptr=ptr+1;}
      while(1);
      return 0;
}
