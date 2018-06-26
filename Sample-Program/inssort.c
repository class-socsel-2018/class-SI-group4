
#include <stdio.h>

#define NUM_DATA 8

void InsSort(int num[ ], int n) ;
void ShowData(int num[ ], int n);
void main(void);

  /* n 個のデータの単純挿入ソートを行う */
void InsSort(int num[ ], int n)
{
    int i, j, temp;

    for (i = 1; i < n; i++) {      /* i 番目の要素をソート済みの配列に挿入 */
        temp = num[i];             /* i 番目の要素を temp に保存 */
        for (j = i; j > 0 && num[j-1] > temp; j--) /* このループで */
            num[j] = num[j -1];                    /* temp を挿入する位置を決める */

        num[j] = temp;             /* temp を挿入 */
        ShowData(num, NUM_DATA);   /* 途中経過を表示 */
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
    int num[ ] = {3, 7, 1, 5, 4, 2, 6, 0};	

      /* ソート前のデータの表示 */
    printf("ソート前: ");
    ShowData(num, NUM_DATA);
    printf("\n");

      /* ソート */
    InsSort(num, NUM_DATA);	
    printf("\n");

       /* ソート後のデータの表示 */
    printf("ソート後: ");
    ShowData(num, NUM_DATA);
    printf("\n");
}