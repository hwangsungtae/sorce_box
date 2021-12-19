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
    int r=((609+3)%59+60);
    int t=((609+3)%39+81);

    
    ptr=(hword *)0x04000000;
    *ptr=0x0F03;

    ptr=(hword *)VRAM;
    for(i=0;i<160;i++){
        for(j=0;j<240;j++){
            *ptr=color1;
            ptr+=1;
        }
    }
   
draw_point(r,t,color2);
while(1) {
                int cnt=0;
                hword *key = (hword*) KEY_CTRL;
		if((*key & 0x0010) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              r++;
              draw_point(r,t,color2);
              draw_point(r-1,t,color1);
}else if((*key & 0x0020) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              r--;
              draw_point(r,t,color2);
              draw_point(r+1,t,color1);
}else if((*key & 0x0040) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              t--;
              draw_point(r,t,color2);
              draw_point(r,t+1,color1);
}else if((*key & 0x0080) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              t++;
             draw_point(r,t,color2);
             draw_point(r,t-1,color1);              
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