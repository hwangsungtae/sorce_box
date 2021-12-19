typedef volatile unsigned short hword;
#define VRAM 0x06000000
void draw_point(hword,hword,hword);
int main(void){
    hword *ptr;
    hword color1;
    hword color2;

    color1=0x7FE0;
    color2=0x001F;

    int i;
    int j;
    int Xe=(610*3)%19+101;
    int Ye=(1003%19)+61;
    int R=(1003%9)+29;
    int dx;
    int dy;

    ptr=(hword *)0x04000000;
    *ptr=0x0F03;

    ptr=(hword *)VRAM;
    for(i=0;i<160;i++){
        for(j=0;j<240;j++){
            *ptr=color1;
            ptr+=1;
        }
}
    for(i=0;i<160;i++){
        for(j=0;j<240;j++){
           dx=j-Xe;
           dy=i-Ye;

       if((dx*dx)+(dy*dy)<=(R*R)){
          draw_point(i,j,color2);
}
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

 

    