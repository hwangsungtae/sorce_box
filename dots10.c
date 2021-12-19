typedef volatile unsigned short hword;
#define VRAM 0x06000000
#define KEY_CTRL 0x04000130
void draw_point(hword,hword,hword);
int main(void){
    hword *ptr;
    hword color1;
    hword color2;

    color1=0x7FE0;
    color2=0x001F;

    int i;
    int j;

while(1) {

    ptr=(hword *)0x04000000;
    *ptr=0x0F03;

    ptr=(hword *)VRAM;
    for(i=0;i<160;i++){
        for(j=0;j<240;j++){
            *ptr=color1;
            ptr+=1;
        }
    }
    draw_point(((609+3)%59+60),((609+3)%39+81),color2);
                hword *key = (hword*) KEY_CTRL;
		ptr = (hword*) VRAM;
		if((*key & 0x0010) == 0x0000){
              x++
}else if((*key & 0x0020) == 0x0000){
              x--
}else if((*key & 0x0040) == 0x0000){
              y++
}else if((*key & 0x0080) == 0x0000){
              y--
}
    while(1);
    return 0;
}}
void draw_point(hword x,hword y,hword color){
    hword *ptr;
    ptr=(hword *)(VRAM+(x*2)+(y*480));
    *ptr=color;
}