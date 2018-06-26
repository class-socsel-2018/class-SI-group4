#include <stdio.h>

#define MAX_DATA 100
int Bin[MAX_DATA];    /* 作業用配列 */

void BinSort(int x[ ], int n);
void ShowData(int x[ ], int n);
void main(void);

  /* ビンソートを行う */
void BinSort(int x[ ], int n)
{
    int i, j;
	
    if (n > MAX_DATA) {
        printf("データが多すぎます!\n");
        return;
    }
    else {
        for (i = 0; i < MAX_DATA; i++)
            Bin[i] = 0;             /* 作業用配列の初期化 */

        for (i = 0; i < n; i++)     /* x[i] の値の */
            Bin[x[i]]++;            /* Bin[ ] の要素の値を */
                                    /* インクリメント */
        j = 0;                      /* x[ ] の添字として使用 */
        for (i = 0; i < MAX_DATA ; i++) 
            if (Bin[i])             /* ０でなければ */
            x[j++] = i;             /* 書き戻す */
    }
}

  /* n 個のデータを表示する */
void ShowData(int x[ ], int n)
{
    int i;

    for (i = 0; i < n ; i++)
        printf("%d\t", x[i]);
}


void main(void)
{
      /* ソートするデータ */
    int x[MAX_DATA] = {89, 1, 78, 58, 48, 18, 9, 21, 56, 11, 
                       62, 23, 38, 96, 4, 45, 73,14, 30, 27,
                        6, 35, 2, 25, 69, 41, 8, 51, 0, 32,
                       98, 12, 33, 72, 19, 52, 28, 86, 17, 99
    };
    int n = 40;     /* ソートするデータの数 */

      /* ソート前のデータを表示 */
    printf("ソート前:\n");
    ShowData(x, n);
    printf("\n");

    BinSort(x, n);
		
      /* ソート後のデータを表示 */
    printf("\n\nAソート後:\n");
    ShowData(x, n);
}