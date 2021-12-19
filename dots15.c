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
    if(Xd>Xc){
        dx=Xd-Xc;
        sx=1;}
    else if(Xc>Xd){
        dx=Xc-Xd;
        sx=-1;}

    if(Yd>Yc){
         dy=Yd-Yc;
         sy=1;}
    else if(Yc>Yd){
         dy=Yc-Yd;
         sy=-1;}
    
  if(dx>dy){
     int E=-dx;
    for(i=0;i<=dx;i++){
       draw_point(Xc,Yc,color2);
       Xc+=sx;
       E+=2*dy;
       if(E>=0){
         Yc+=sy;
         E-=2*dx;   
        }
      }
  }else{
     int E=-dy;
     for(i=0;i<=dy;i++){
      draw_point(Xc,Yc,color2);
      Yc+=sy;
      E+=2*dx;
      if(E>=0){
        Xc+=sx;
        E-=2*dy;}
}
}       
    while(1);
    while(0);
}
void draw_point(hword x,hword y,hword color){
    hword *ptr;
    ptr=(hword *)(VRAM+(x*2)+(y*480));
    *ptr=color;
}