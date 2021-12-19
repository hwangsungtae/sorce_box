typedef volatile unsigned short hword;

#define BGR(r, g, b)	((b << 10) + (g << 5) + r)
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
	
	ptr = (hword*) 0x04000000 ;
	*ptr = 0x0F03;
	
	color = 0x0000;
	ptr = (hword*) VRAM;
	hword *key = (hword*) KEY_CTRL;
	
	int i;
	for(i = 0; i < 38400 ; i = i + 1 ) {　//画面を黒に塗りつぶし
		*ptr = color;
		ptr = ptr + 1;
	}
	int flgLevel1 = 1;
	while(flgLevel1){
	
	if((*key & 0x0008) == 0x0000){ //STARTボタンを押すと
	
		color1 = 0x7FFF;
		int xa = 32;　//ここから
		int ya = 56;
		int xb = 56;
		int yb = 96;
		int x = 32;
		int y = 56;
	
		int j;
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
			y=ya;　//ここまで，LEVEL1の表示
		}
		flgLevel1 = 0;
	}	
	int m;
		for(m = 0; m < For_count; m++);
		
	
	}
	
	int flgGame1 = 1;
	while (flgGame1){
	
		if((*key & 0x0008) == 0x0000){　//STARTボタンを押すと
	
			int i;
			ptr = (hword*)VRAM;
			for(i = 0; i < 38400 ; i = i + 1 ) {　//画面を黒く塗りつぶす
				*ptr = color;
				ptr = ptr + 1;
			}
				
			int xa = 24;　//ここから
			int ya = 16;
			int xb = 56;
			int yb = 48;
			int x = 24;
			int y = 16;
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
			
			xa = 184;
			ya = 16;
			xb = 216;
			yb = 48;
			x = 184;
			y = 16;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 56;
			ya = 80;
			xb = 80;
			yb = 96;
			x = 56;
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
			
			xa = 56;
			ya = 136;
			xb = 80;
			yb = 152;
			x = 56;
			y = 136;
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
			ya = 104;
			xb = 104;
			yb = 128;
			x = 88;
			y = 104;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 32;
			ya = 104;
			xb = 48;
			yb = 128;
			x = 32;
			y = 104;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 184;
			ya = 88;
			xb = 192;
			yb = 120;
			x = 184;
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
			
			xa = 192;
			ya = 80;
			xb = 208;
			yb = 88;
			x = 192;
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
			
			xa = 208;
			ya = 88;
			xb = 216;
			yb = 120;
			x = 208;
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
			
			xa = 192;
			ya = 104;
			xb = 208;
			yb = 112;
			x = 192;
			y = 112;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 144;
			ya = 112;
			xb = 168;
			yb = 128;
			x = 144;
			y = 112;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 144;
			ya = 128;
			xb = 176;
			yb = 152;
			x = 144;
			y = 128;
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
			ya = 120;
			xb = 160;
			yb = 128;
			x = 152;
			y = 120;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 152;
			ya = 136;
			xb = 168;
			yb = 144;
			x = 152;
			y = 136;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color);
					y=y+1;
				}
				x=x+1;
				y=ya;　//ここまで，ゲーム画面の表示
			}
			flgGame1 = 0;
		}
		int m;
		for(m = 0; m < For_count; m++);
	}
	
	int flgStart1 = 1;
	while (flgStart1){
		if((*key & 0x0008) == 0x0000){　//STARTボタンを押すと
			color2 = 0x03FF;
			int xa = 184;　//液晶ディスプレイでAボタンの位置に表示している図形を黄色に
			int ya = 88;
			int xb = 192;
			int yb = 120;
			int x = 184;
			int y = 88;
			int j = 0;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color2);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color2);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 192;
			ya = 80;
			xb = 208;
			yb = 88;
			x = 192;
			y = 80;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color2);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color2);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 208;
			ya = 88;
			xb = 216;
			yb = 120;
			x = 208;
			y = 88;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color2);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color2);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 192;
			ya = 104;
			xb = 208;
			yb = 112;
			x = 192;
			y = 112;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color2);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color2);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			int m;
			for(m = 0; m < For_count1; m++);
			
			xa = 184;　//白に戻す
			ya = 88;
			xb = 192;
			yb = 120;
			x = 184;
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
			
			xa = 192;
			ya = 80;
			xb = 208;
			yb = 88;
			x = 192;
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
			
			xa = 208;
			ya = 88;
			xb = 216;
			yb = 120;
			x = 208;
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
			
			xa = 192;
			ya = 104;
			xb = 208;
			yb = 112;
			x = 192;
			y = 112;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 56;　//液晶ディスプレイで十字ボタンの↓の位置に表示している図形を黄色に
			ya = 136;
			xb = 80;
			yb = 152;
			x = 56;
			y = 136;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color2);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color2);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			for(m = 0; m < For_count1; m++);
			
			xa = 56;　//白に戻す
			ya = 136;
			xb = 80;
			yb = 152;
			x = 56;
			y = 136;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 88;　//液晶ディスプレイで十字ボタンの→の位置に表示している図形を黄色に
			ya = 104;
			xb = 104;
			yb = 128;
			x = 88;
			y = 104;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color2);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color2);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			for(m = 0; m < For_count1; m++);
			
			xa = 88;　//白に戻す
			ya = 104;
			xb = 104;
			yb = 128;
			x = 88;
			y = 104;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 184;　//液晶ディスプレイでRボタンの位置に表示している図形を黄色に
			ya = 16;
			xb = 216;
			yb = 48;
			x = 184;
			y = 16;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color2);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color2);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			for(m = 0; m < For_count1; m++);
			
			xa = 184;　//白に戻す
			ya = 16;
			xb = 216;
			yb = 48;
			x = 184;
			y = 16;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			flgStart1 = 0;
			
		}
		
	}
	
	int flgButton1 = 1;
	while(flgButton1){
		if((*key & 0x0001) == 0x0000){　//Aボタンを押すと
		
			color3=0x001F;
			int xa = 184;　　//液晶ディスプレイでAボタンの位置に表示している図形を赤に
			int ya = 88;
			int xb = 192;
			int yb = 120;
			int x = 184;
			int y = 88;
			int j = 0;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color3);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color3);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 192;
			ya = 80;
			xb = 208;
			yb = 88;
			x = 192;
			y = 80;
			
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color3);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color3);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 208;
			ya = 88;
			xb = 216;
			yb = 120;
			x = 208;
			y = 88;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color3);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color3);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			xa = 192;
			ya = 104;
			xb = 208;
			yb = 112;
			x = 192;
			y = 112;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color3);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color3);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			int m;
			for(m = 0; m < For_count1; m++);
			
			xa = 184;　//白に戻す
			ya = 88;
			xb = 192;
			yb = 120;
			x = 184;
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
			
			xa = 192;
			ya = 80;
			xb = 208;
			yb = 88;
			x = 192;
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
			
			xa = 208;
			ya = 88;
			xb = 216;
			yb = 120;
			x = 208;
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
			
			xa = 192;
			ya = 104;
			xb = 208;
			yb = 112;
			x = 192;
			y = 112;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			flgButton1=0;
			
		}else if((*key & 0x0002) == 0x0000||(*key & 0x0010) == 0x0000||(*key & 0x0020) == 0x0000||(*key & 0x0040) == 0x0000||(*key & 0x0080) == 0x0000||(*key & 0x0100) == 0x0000||(*key & 0x0200) == 0x0000){　//Aボタン以外が押すと
			
			int i;
			ptr = (hword*)VRAM;
			for(i = 0; i < 38400 ; i = i + 1 ) {　//画面を黒く塗りつぶす
				*ptr = color;
				ptr = ptr + 1;
			}
			int xa = 32;　//ここから
			int ya = 56;
			int xb = 40;
			int yb = 96;
			int x = 32;
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
			
			xa = 40;
			ya = 64;
			xb = 48;
			yb = 72;
			x = 40;
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
			
			xa = 48;
			ya = 72;
			xb = 56;
			yb = 80;
			x = 48;
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
			
			xa = 56;
			ya = 64;
			xb = 64;
			yb = 72;
			x = 56;
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
			
			xa = 64;
			ya = 56;
			xb = 72;
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
			
			xa = 96;
			ya = 56;
			xb = 104;
			yb = 64;
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
			
			xa = 96;
			ya = 72;
			xb = 104;
			yb = 96;
			x = 96;
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
			
			xa = 136;
			ya = 56;
			xb = 160;
			yb = 64;
			x = 136;
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
			
			xa = 128;
			ya = 64;
			xb = 136;
			yb = 72;
			x = 128;
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
			
			xa = 136;
			ya = 72;
			xb = 152;
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
			
			xa = 152;
			ya = 80;
			xb = 160;
			yb = 88;
			x = 152;
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
			
			xa = 128;
			ya = 88;
			xb = 152;
			yb = 96;
			x = 128;
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
			
			xa = 176;
			ya = 56;
			xb = 200;
			yb = 64;
			x = 176;
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
			ya = 64;
			xb = 176;
			yb = 72;
			x = 168;
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
			
			xa = 176;
			ya = 72;
			xb = 192;
			yb = 80;
			x = 176;
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
			
			xa = 192;
			ya = 80;
			xb = 200;
			yb = 88;
			x = 192;
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
			
			xa = 168;
			ya = 88;
			xb = 192;
			yb = 96;
			x = 168;
			y = 88;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;　//ここまで，MISSの表示
			}
		}
	}
	
	int flgButton2 = 1;
	while(flgButton2){
		if((*key & 0x0080) == 0x0000){　//十字ボタンの↓を押すと
		
			color3=0x001F;
			int xa = 56;　////液晶ディスプレイで十字ボタンの↓ボタンの位置に表示している図形を赤に
			int ya = 136;
			int xb = 80;
			int yb = 152;
			int x = 56;
			int y = 136;
			int j = 0;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color3);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color3);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			int m;
			for(m = 0; m < For_count1; m++);
			
			xa = 56;　//白に戻す
			ya = 136;
			xb = 80;
			yb = 152;
			x = 56;
			y = 136;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			flgButton2 = 0;

		}else if((*key & 0x0002) == 0x0000||(*key & 0x0010) == 0x0000||(*key & 0x0020) == 0x0000||(*key & 0x0040) == 0x0000||(*key & 0x0001) == 0x0000||(*key & 0x0100) == 0x0000||(*key & 0x0200) == 0x0000){　//十字ボタンの↓以外を押すと
			
			int i;
			ptr = (hword*)VRAM;
			for(i = 0; i < 38400 ; i = i + 1 ) {　//画面を黒く塗りつぶす
				*ptr = color;
				ptr = ptr + 1;
			}
			int xa = 32;　//ここから
			int ya = 56;
			int xb = 40;
			int yb = 96;
			int x = 32;
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
			
			xa = 40;
			ya = 64;
			xb = 48;
			yb = 72;
			x = 40;
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
			
			xa = 48;
			ya = 72;
			xb = 56;
			yb = 80;
			x = 48;
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
			
			xa = 56;
			ya = 64;
			xb = 64;
			yb = 72;
			x = 56;
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
			
			xa = 64;
			ya = 56;
			xb = 72;
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
			
			xa = 96;
			ya = 56;
			xb = 104;
			yb = 64;
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
			
			xa = 96;
			ya = 72;
			xb = 104;
			yb = 96;
			x = 96;
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
			
			xa = 136;
			ya = 56;
			xb = 160;
			yb = 64;
			x = 136;
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
			
			xa = 128;
			ya = 64;
			xb = 136;
			yb = 72;
			x = 128;
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
			
			xa = 136;
			ya = 72;
			xb = 152;
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
			
			xa = 152;
			ya = 80;
			xb = 160;
			yb = 88;
			x = 152;
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
			
			xa = 128;
			ya = 88;
			xb = 152;
			yb = 96;
			x = 128;
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
			
			xa = 176;
			ya = 56;
			xb = 200;
			yb = 64;
			x = 176;
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
			ya = 64;
			xb = 176;
			yb = 72;
			x = 168;
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
			
			xa = 176;
			ya = 72;
			xb = 192;
			yb = 80;
			x = 176;
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
			
			xa = 192;
			ya = 80;
			xb = 200;
			yb = 88;
			x = 192;
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
			
			xa = 168;
			ya = 88;
			xb = 192;
			yb = 96;
			x = 168;
			y = 88;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;　//ここまで，MISSの表示
			}
		}
	}
	
	int flgButton3 = 1;
	while(flgButton3){
		if((*key & 0x0010) == 0x0000){　//十字ボタンの→を押すと 
			color3=0x001F;
			int xa = 88;　//液晶ディスプレイで十字ボタンの右の位置に表示している図形を赤色に
			int ya = 104;
			int xb = 104;
			int yb = 128;
			int x = 88;
			int y = 104;
			int j=0;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color3);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color3);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			int m;
			for(m = 0; m < For_count1; m++);
			
			xa = 88;　//白に戻す
			ya = 104;
			xb = 104;
			yb = 128;
			x = 88;
			y = 104;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			flgButton3 = 0;
			
		}else if((*key & 0x0002) == 0x0000||(*key & 0x0001) == 0x0000||(*key & 0x0020) == 0x0000||(*key & 0x0040) == 0x0000||(*key & 0x0080) == 0x0000||(*key & 0x0100) == 0x0000||(*key & 0x0200) == 0x0000){　//十字ボタンの→以外を押すと
			
			int i;
			ptr = (hword*)VRAM;
			for(i = 0; i < 38400 ; i = i + 1 ) {　//画面を黒く塗りつぶす
				*ptr = color;
				ptr = ptr + 1;
			}
			int xa = 32;　//MISSの表示
			int ya = 56;
			int xb = 40;
			int yb = 96;
			int x = 32;
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
			
			xa = 40;
			ya = 64;
			xb = 48;
			yb = 72;
			x = 40;
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
			
			xa = 48;
			ya = 72;
			xb = 56;
			yb = 80;
			x = 48;
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
			
			xa = 56;
			ya = 64;
			xb = 64;
			yb = 72;
			x = 56;
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
			
			xa = 64;
			ya = 56;
			xb = 72;
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
			
			xa = 96;
			ya = 56;
			xb = 104;
			yb = 64;
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
			
			xa = 96;
			ya = 72;
			xb = 104;
			yb = 96;
			x = 96;
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
			
			xa = 136;
			ya = 56;
			xb = 160;
			yb = 64;
			x = 136;
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
			
			xa = 128;
			ya = 64;
			xb = 136;
			yb = 72;
			x = 128;
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
			
			xa = 136;
			ya = 72;
			xb = 152;
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
			
			xa = 152;
			ya = 80;
			xb = 160;
			yb = 88;
			x = 152;
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
			
			xa = 128;
			ya = 88;
			xb = 152;
			yb = 96;
			x = 128;
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
			
			xa = 176;
			ya = 56;
			xb = 200;
			yb = 64;
			x = 176;
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
			ya = 64;
			xb = 176;
			yb = 72;
			x = 168;
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
			
			xa = 176;
			ya = 72;
			xb = 192;
			yb = 80;
			x = 176;
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
			
			xa = 192;
			ya = 80;
			xb = 200;
			yb = 88;
			x = 192;
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
			
			xa = 168;
			ya = 88;
			xb = 192;
			yb = 96;
			x = 168;
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
		}
	}
	
	int flgButton4 = 1;
	while(flgButton4){
		if((*key & 0x0100) == 0x0000){　//Rボタンを押すと
			
			color3=0x001F;
			int xa = 184;　 //液晶ディスプレイでRボタンの位置に表示している図形を赤色に
			int ya = 16;
			int xb = 216;
			int yb = 48;
			int x = 184;
			int y = 16;
			int j = 0;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color3);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color3);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			int m;
			for(m = 0; m < For_count1; m++);
			
			xa = 184;　//白色に戻す
			ya = 16;
			xb = 216;
			yb = 48;
			x = 184;
			y = 16;
			for(i=xa; i<=xb; i=i+1){
				draw_point(x, y, color1);
				for(j=ya; j<=yb; j=j+1){
					draw_point(x,y,color1);
					y=y+1;
				}
				x=x+1;
				y=ya;
			}
			
			flgButton4=0;
			
			}else if((*key & 0x0002) == 0x0000||(*key & 0x0010) == 0x0000||(*key & 0x0020) == 0x0000||(*key & 0x0040) == 0x0000||(*key & 0x0080) == 0x0000||(*key & 0x0001) == 0x0000||(*key & 0x0200) == 0x0000){　//Rボタン以外を押すと
			
			int i;
			ptr = (hword*)VRAM;
			for(i = 0; i < 38400 ; i = i + 1 ) {　画面を黒く塗りつぶす
				*ptr = color;
				ptr = ptr + 1;
			}
			int xa = 32;　//MISSの表示
			int ya = 56;
			int xb = 40;
			int yb = 96;
			int x = 32;
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
			
			xa = 40;
			ya = 64;
			xb = 48;
			yb = 72;
			x = 40;
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
			
			xa = 48;
			ya = 72;
			xb = 56;
			yb = 80;
			x = 48;
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
			
			xa = 56;
			ya = 64;
			xb = 64;
			yb = 72;
			x = 56;
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
			
			xa = 64;
			ya = 56;
			xb = 72;
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
			
			xa = 96;
			ya = 56;
			xb = 104;
			yb = 64;
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
			
			xa = 96;
			ya = 72;
			xb = 104;
			yb = 96;
			x = 96;
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
			
			xa = 136;
			ya = 56;
			xb = 160;
			yb = 64;
			x = 136;
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
			
			xa = 128;
			ya = 64;
			xb = 136;
			yb = 72;
			x = 128;
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
			
			xa = 136;
			ya = 72;
			xb = 152;
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
			
			xa = 152;
			ya = 80;
			xb = 160;
			yb = 88;
			x = 152;
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
			
			xa = 128;
			ya = 88;
			xb = 152;
			yb = 96;
			x = 128;
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
			
			xa = 176;
			ya = 56;
			xb = 200;
			yb = 64;
			x = 176;
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
			ya = 64;
			xb = 176;
			yb = 72;
			x = 168;
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
			
			xa = 176;
			ya = 72;
			xb = 192;
			yb = 80;
			x = 176;
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
			
			xa = 192;
			ya = 80;
			xb = 200;
			yb = 88;
			x = 192;
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
			
			xa = 168;
			ya = 88;
			xb = 192;
			yb = 96;
			x = 168;
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
		}
	

		
		
	}
	
	int flgClear = 1;
	while(flgClear){
		int i;
		ptr = (hword*)VRAM;
		for(i = 0; i < 38400 ; i = i + 1 ) {　画面を黒く塗りつぶす
			*ptr = color;
			ptr = ptr + 1;
		}
		int xa = 80;　//ここから
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
			y=ya;　//ここまで，OKの表示
		}
		flgClear=0;
	}

	while(1);
	return 0;
}

void draw_point (hword x, hword y, hword color) {
	hword *ptr;
	ptr = (hword*) VRAM;
	ptr = ptr + (y * 240 + x);
	*ptr = color;
}

