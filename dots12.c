typedef volatile unsigned short hword;
#define VRAM 0x06000000
void draw_point(hword,hword,hword);
int main(void){
    hword *ptr;
    hword color1;
    hword color2;
    hword Xa;
    hword Ya;
    hword Xb;
    hword Yb;

    color1=0x7FE0;
    color2=0x001F;
    Xa=((610)+(3))%59;
    Ya=((610)*(3))%39+41;
    Xb=(1003)%59+181;
    Yb=(1003)%39+81;

    int i;
    int j;
   
    ptr=(hword *)0x04000000;
    *ptr=0x0F03;

    ptr=(hword *)VRAM;
    for(i=0;i<160;i++){
        for(j=0;j<240;j++){
            *ptr=color1;
            ptr+=1;
        }
    }

    for(i=Xa;i<=Xb;i++){
        for(j=Ya;j<=Yb;j++){
            draw_point(i,j,color2);
        }
    }

    while(1);
    return 0;
}
void draw_point(hword x,hword y,hword color){
    hword *ptr;
    ptr=(hword *)(VRAM+(x*2)+(y*480));
    *ptr=color;
}