
#include  <stdio.h>

int BubSort(int x[ ], int n);
void ShowData(int x[ ], int n);
void main(void);

#define NUM_DATA 10                           /* ソートするデータの数 */
int x[ ] = {9, 4, 6, 2, 1, 8, 0, 3, 7, 5};    /* このデータをソート */


  /* バブルソートを行う */
int BubSort(int x[ ], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (x[j - 1] > x[j]) {  /* 前の要素の方が大きかったら */
                temp = x[j];        /* 交換する */
                x[j] = x[j - 1];
                x[j - 1]= temp;
            }
        }	
        /* ソートの途中経過を表示 */
        ShowData(x, NUM_DATA);
    }
}
	
  /* ソート対象のデータを表示 */
void ShowData(int x[ ], int n)
{
    int i;

    for (i = 0; i < n ; i++)
        printf("%d\t", x[i]);
}

void main(void)
{		
      /* ソート前のデータを表示 */
    printf("ソート前:\n");
    ShowData(x, NUM_DATA);
    printf("\n\n");

    BubSort(x, NUM_DATA);

      /* ソート後のデータを表示 */
    printf("\n\nソート後:\n");
    ShowData(x, NUM_DATA);
}