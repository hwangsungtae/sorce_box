#pragma once
#define BUFFSIZE 128
#define CHARBUFF 124
void CSV2Array(const char* filename, int data[10][12], int avg[10]);

struct kionn
{
	int year;
    int month;
};

void CSV2Array(const char* filename, int data[10][12], int avg[10]) {

    FILE* fp;
    char s[BUFFSIZE];
    errno_t error;
    char delim[] = ",";//デリミタ（複数渡せる）ここではカンマと空白
    char* ctx;
    char* ary[4];
    int i = 0;
    int j = 0;
    int year = 0;
    int num = 0;
    double g = 0;

    error = fopen_s(&fp, filename, "r");
    if (error != 0)
        fprintf_s(stderr, "failed to open");
    else {
        while (fgets(s, BUFFSIZE, fp) != NULL) {
            ary[0] = strtok_s(s, ",", &ctx);
            ary[1] = strtok_s(NULL, ",", &ctx);
            ary[2] = strtok_s(NULL, ",", &ctx);
            ary[3] = strtok_s(NULL, ",", &ctx);
            g=atof(ary[1]);
            data[j][i] = int(g+0.5);//四捨五入
            num += data[j][i];
            i++;
            if (i % 12 == 0) {      //年最低平均気温の導出、格納

                avg[year] = num / 12;
                j++;
                year++;
                num = 0;
                i = 0;
            }
            
            

        }
        int nen = 11;
        error = fopen_s(&fp, "年平均最低気温.csv", "w");       //CSVファイル書き込み、出力
        if (error != 0)
            fprintf_s(stderr, "failed to open");
        else {
            for (i = 0;i < 10;i++) {
                fprintf_s(fp, "20%d年,%d\n", nen, avg[i]);
                nen++;
            }
            fclose(fp);
            printf("ファイルに結果が出力されました\n");
        }
       
    }

}
void getGurrentDirectory(char* currentDirectory) {
    GetCurrentDirectory(CHARBUFF, currentDirectory);
}
