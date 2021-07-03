#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <curses.h>
#include "ヘッダー.h"
#define CHARBUFF 124
#define max 1256

int main()
{
	struct kionn tata[max];		//構造体
	int cnt = 0;
	int cnt2 = 0;
	int nen = 11;
	int key;

	int i;
	int k = 0;
	initscr();
	keypad(stdscr, TRUE);
	start_color();
	addstr("Push Right key!!");
	init_pair(1, COLOR_BLACK, COLOR_WHITE);	//カラーセットの設定
	init_pair(2, COLOR_GREEN, COLOR_BLACK);

	int yearcnt = 0;
	int monthcnt = 0;
	int data[10][12];
	int avg[10];
	char currentDirectory[CHARBUFF];
	getGurrentDirectory(currentDirectory);
	char section[CHARBUFF];
	sprintf_s(section, "section1");
	char keyWord[CHARBUFF];
	sprintf_s(keyWord, "keyword");
	char settingFile[CHARBUFF];
	sprintf_s(settingFile, "%s\\midreport.ini", currentDirectory);
	char keyValue[CHARBUFF];
	GetPrivateProfileString(section, keyWord, "none", keyValue, CHARBUFF, settingFile);		//	iniファイル読み込み
	

	CSV2Array(keyValue, data,avg);


	for (yearcnt = 0;yearcnt < 10;yearcnt++) {	//構造体格納
		for (monthcnt = 0;monthcnt < 12;monthcnt++) {

			tata[cnt].year = avg[yearcnt];
			tata[cnt].month=data[yearcnt][monthcnt];
			//printf("%d,%d\n", tata[cnt].year, tata[cnt].month);
			cnt++;

			
		}
	}

	int nen1 = 0;
	cnt = 0;
	while (1) {		//	無限ループ
		key = getch();
		int countx = 6;
		int county = 0;
		WINDOW* acr = newwin(4, 15, 20, 60);		//ウィンドウサイズの設定,生成
		WINDOW* txt = newwin(15, 15, 0, 60);
		WINDOW* win = newwin(30, 55, 0, 0);
		WINDOW* sub = subwin(win, 28, 50, 0, 4);
		box(txt, '|', '-');
		box(win, '|', '-');
		box(sub, '|', '-');
		box(acr, '|', '-');

		wprintw(txt, "tmp");
		wprintw(acr, "年平均最低気温");
		wprintw(win, "月別平均最低気温(20%d年)", nen);

		for (i = 1;i < 13;i++) {		//グラフ表示
			int newy = 30 - tata[cnt].month-3;
			mvwprintw(win, 28, countx, "%d", i);
			while (newy < 28) {
				mvwprintw(win, newy, countx, "+");
				newy++;
			}
			cnt++;
			countx += 4;
		}
		for (i = 0;i < 30;i++) {				//グラフのメモリ
			if (i % 5 == 0||i==0) {
				mvwprintw(win, 30 - i-3, 1, "%d", i);
			}
		}

		for (i = 1;i < 13;i++) {		//月平均最低気温
			mvwprintw(txt, i, 1, "%d月：%d℃", i, tata[cnt2].month);
			cnt2++;
		}
		
		mvwprintw(acr, 2, 5, "%d℃",avg[k]);		//年平均最低気温

		wbkgd(win, COLOR_PAIR(1));		//背景色と文字色を変更
		wbkgd(txt, COLOR_PAIR(2));

		if (key == KEY_RIGHT) {		//キー判定
			wrefresh(txt);
			wrefresh(acr);
			wrefresh(win);
			nen1++;		
			nen++;
			k++;
		}

		endwin();
		if (nen1 > 10) {		//終了条件
			break;
		}
	}
	

	return 0;		//終了

}

