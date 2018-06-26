
#include <stdio.h>

#define NUM_DATA 8

void ShellSort(int num[ ], int n) ;
void InsSort(int num[ ], int gap, int n);
void ShowData(int num[ ], int n);
void main(void);

  /* n 個のデータのシェルソートを行う */
void ShellSort(int num[ ], int n)
{
    int gap;

    for (gap = n / 2; gap > 0; gap /= 2)
        InsSort(num, gap, n);
}

  /* n 個のデータの単純挿入ソートを行う */
void InsSort(int num[ ], int gap, int n)
{
    int i, j, temp;

    for (i = gap; i < n; i ++) {
        for (j = i - gap; j >= 0; j -= gap) { /* このループで */
            if (num[j] <= num[j + gap])     /* j 番目とj + gap 番目と比較 */
                break;       /* ここにbreak;を挿入。H.O.さんご指摘ありがとうございました。 */
            else {
                temp = num[j];                /* 要素の入れ替え */
                num[j] = num[j + gap];
                num[j + gap] = temp;
                ShowData(num, NUM_DATA);      /* 途中経過を表示 */
            }
        }
    }
    printf("\n");        /* InsSort(  ) を抜ける時改行 */
}

  /* n 個のデータの表示 */
void ShowData(int num[ ], int n)
{
    while (n--)
        printf("%d  ", *num++);
    printf("\n");
}

void main(void)
{
      /* ソート対象のデータ */
    int num[ ] = {8, 7, 6, 5, 4, 3, 2, 1 };	

      /* ソート前のデータの表示 */
    printf("ソート前\n");
    ShowData(num, NUM_DATA);
    printf("\n");

      /* シェルソート */
    ShellSort(num, NUM_DATA);
    printf("\n");

      /* ソート後のデータの表示 */
    printf("ソート後\n");
    ShowData(num, NUM_DATA);
    printf("\n");
}