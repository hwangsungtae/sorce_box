typedef volatile unsigned short hword;
#define VRAM 0x06000000
void draw_point(hword,hword,hword);
int main(void){
    hword *ptr;
    hword color1;
    hword color2;
    hword Xc;
    hword Yc;
    hword Xd;
    hword Yd;

    color1=0x7FE0;
    color2=0x001F;
    Xc=(1003)%59+61;
    Yc=((613)*(3))%39+121;
    Xd=(1003)%59+121;
    Yd=(613+3)%39;

    int i;
    int j;
    int dx;
    int dy;
    int sx;
    int sy;
    ptr=(hword *)0x04000000;
    *ptr=0x0F03;

    ptr=(hword *)VRAM;
    for(i=0;i<160;i++){
        for(j=0;j<240;j++){
            *ptr=color1;
            ptr+=1;
        }
    }
  
       draw_point(Xc,Yc,color2);
       draw_point(Xd,Yd,color2);
       
 
    while(1);
    while(0);
}
void draw_point(hword x,hword y,hword color){
    hword *ptr;
    ptr=(hword *)(VRAM+(x*2)+(y*480));
    *ptr=color;
}