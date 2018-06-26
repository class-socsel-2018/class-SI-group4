
#include <stdio.h>

#define NUM_DATA 8

void SimSelSort(int num[ ], int n) ;
void ShowData(int num[ ], int n);
void main(void);

  /* n 個のデータの単純選択ソートを行う */
void SimSelSort(int num[ ], int n)
{
    int i, j, k, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = num[i];                 /* i 番目の要素を暫定的に最小値とし */
        k = i;                        /* 添字を保存 */
        for (j = i + 1; j < n; j++) {
            if (num[j] < min) {       /* より小さい値が現れたら */
                min = num[j];         /* 最小値の入れ替え */
                k = j;                /* 添字を保存 */
            }
        }                             /* このループを抜けるとk に最小値の添字が入っている */
        temp = num[i];                /* i 番目の要素と最小値の交換 */
        num[i] = num[k];
        num[k] = temp;
        ShowData(num, NUM_DATA);
    }
}

  /* n 個のデータを表示 */
void ShowData(int num[ ], int n)
{
    while (n--)
        printf("%d  ", *num++);
    printf("\n");
}

void main(void)
{
      /* ソート対象のデータ */
    int num[ ] = {8, 7, 6, 5, 4, 3, 2, 1};	

      /* ソート前のデータの表示 */
    printf("ソート前: ");
    ShowData(num, NUM_DATA);
    printf("\n");

      /* ソート */
    SimSelSort(num, NUM_DATA);	
    printf("\n");

      /* ソート後のデータの表示 */
    printf("ソート後: ");
    ShowData(num, NUM_DATA);
    printf("\n");
}