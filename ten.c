typedef volatile unsigned short hword;
#define VRAM 0x06000000
#define KEY_CTRL 0x04000130
#define For_count 100000
#define For_count1 2000000
void draw_point (hword,hword,hword);

int main (void) {
	hword *ptr;
	hword color;
	hword color1;
	hword color2;
	hword color3;
        hword color4;
        hword color5;
        hword color6;
        hword color7;
        hword color8;
        hword color9;

      int i;
      int j;
      int h=0;
      int f=0;
      int r=((609+3)%59+60);
      int t=((609+3)%39+81);
      int s=47;
      int u=82;
      int v=50;
      int w=51;
      int k=52;
      int g=90;
      int q=53;
      int l=22;
      int ab=120;
      int ac=120;
      int ad=100;
      int ae=110;
      int af=200;
      int ag=120;
      int ah=180;
      int ai=50;

        color=0x0000;
        color1=0x001F;
        color2=0x001F;
        color3=0x001F;
        color4=0x001F;
        color5=0x001F;
        color6=0x001F;
        color7=0x001F;
        color8=0x001F;
        color9=0x001F;


	
	ptr = (hword*) 0x04000000 ;
	*ptr = 0x0F03;
	

	ptr = (hword*) VRAM;
	hword *key = (hword*) KEY_CTRL;
	
	for(i = 0; i < 38400 ; i = i + 1 ) {
		*ptr = color;
		ptr = ptr + 1;
	}
	
	
		color1 = 0x7FFF;
                int xa = 32;
		int ya = 56;
		int xb = 56;
		int yb = 96;
		int x = 32;
		int y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}	
	
		xa = 40;
		ya = 56;
		xb = 56;
		yb = 88;
		x = 40;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}	
	
		xa = 64;
		ya = 56;
		xb = 88;
		yb = 96;
		x = 64;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 72;
		ya = 64;
		xb = 88;
		yb = 72;
		x = 72;
		y = 64;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 72;
		ya = 80;
		xb = 88;
		yb = 88;
		x = 72;
		y = 80;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 96;
		ya = 56;
		xb = 104;
		yb = 88;
		x = 96;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 112;
		ya = 56;
		xb = 120;
		yb = 88;
		x = 112;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 104;
		ya = 88;
		xb = 112;
		yb = 96;
		x = 104;
		y = 88;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 128;
		ya = 56;
		xb = 152;
		yb = 96;
		x = 128;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 136;
		ya = 64;
		xb = 152;
		yb = 72;
		x = 136;
		y = 64;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 136;
		ya = 80;
		xb = 152;
		yb = 88;
		x = 136;
		y = 80;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 160;
		ya = 56;
		xb = 184;
		yb = 96;
		x = 160;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 168;
		ya = 56;
		xb = 184;
		yb = 88;
		x = 168;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
	
		xa = 200;
		ya = 56;
		xb = 208;
		yb = 96;
		x = 200;
		y = 56;
	
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		
	
	

 int Stage1=1;
while(Stage1){
             int cnt=0;
            if((*key & 0x0001) == 0x0000){
            while(cnt<100000){
                   cnt++;}
               h++;
}

           if((*key & 0x0008) == 0x0000){
	for(i = 0; i < 38400 ; i = i + 1 ) {
		*ptr = color;
		ptr = ptr + 1;
	}
}
              draw_point(r,t,0x7FFF);
              draw_point(s,u,color2);
              draw_point(v,w,color3);
              draw_point(k,g,color4);
              draw_point(q,l,color5);
              draw_point(ab,ac,color6);
              draw_point(ad,ae,color7);
              draw_point(af,ag,color8);
              draw_point(ah,ai,color9);
         
                
                hword *key = (hword*) KEY_CTRL;
		if((*key & 0x0010) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              r++;
              draw_point(r,t,color2);
              draw_point(r-1,t,color);
}else if((*key & 0x0020) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              r--;
              draw_point(r,t,color2);
              draw_point(r+1,t,color);
}else if((*key & 0x0040) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              t--;
              draw_point(r,t,color2);
              draw_point(r,t+1,color);
}else if((*key & 0x0080) == 0x0000){
              while(cnt<10000){
                   cnt++;}
              t++;
             draw_point(r,t,color2);
             draw_point(r,t-1,color);              
}

 if(r==s&&t==u){
        if(color2==0x001F){
           h++;}
        color2=0x0000;
      draw_point(s,u,color);
}else if(r==v&&t==w){
        if(color3==0x001F){
           h++;}
        color3=0x0000;
      draw_point(v,w,color);
}else if(r==k&&t==g){
        if(color4==0x001F){
           h++;}
        color4=0x0000;
      draw_point(k,g,color);
}else if(r==q&&t==l){
        if(color5==0x001F){
           h++;}
        color5=0x0000;
      draw_point(q,l,color);
}else if(r==ab&&t==ac){
        if(color6==0x001F){
           h++;}
        color6=0x0000;
      draw_point(ab,ac,color);
}else if(r==ad&&t==ae){
        if(color7==0x001F){
           h++;}
        color7=0x0000;
      draw_point(ad,ae,color);
}else if(r==af&&t==ag){
        if(color8==0x001F){
           h++;}
        color8=0x0000;
      draw_point(af,ag,color);
}else if(r==ah&&t==ai){
        if(color9==0x001F){
           h++;}
        color9=0x0000;
      draw_point(ah,ai,color);
}
if(h==8){
  break;}
}
	int flgClear = 1;
	while(flgClear){
		int i;
		ptr = (hword*)VRAM;
		for(i = 0; i < 38400 ; i = i + 1 ) {
			*ptr = color;
			ptr = ptr + 1;
		}
		int xa = 80;
		int ya = 56;
		int xb = 112;
		int yb = 96;
		int x = 80;
		int y = 56;
		int j = 0;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		
		xa = 88;
		ya = 64;
		xb = 104;
		yb = 88;
		x = 88;
		y = 64;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		
		xa = 128;
		ya = 56;
		xb = 136;
		yb = 96;
		x = 128;
		y = 56;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		xa = 136;
		ya = 72;
		xb = 142;
		yb = 80;
		x = 136;
		y = 72;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		
		xa = 142;
		ya = 64;
		xb = 150;
		yb = 72;
		x = 142;
		y = 64;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		
		xa = 142;
		ya = 80;
		xb = 150;
		yb = 88;
		x = 142;
		y = 80;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		
		xa = 152;
		ya = 56;
		xb = 160;
		yb = 64;
		x = 152;
		y = 56;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		
		xa = 152;
		ya = 88;
		xb = 160;
		yb = 96;
		x = 152;
		y = 88;
		for(i=xa; i<=xb; i=i+1){
			draw_point(x, y, color1);
			for(j=ya; j<=yb; j=j+1){
				draw_point(x,y,color1);
				y=y+1;
			}
			x=x+1;
			y=ya;
		}
		flgClear=0;
	}

	while(1);
	return 0;
}

void draw_point(hword x,hword y,hword color){
    hword *ptr;
    ptr=(hword *)(VRAM+(x*2)+(y*480));
    *ptr=color;}




