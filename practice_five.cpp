// 1. 与指定数字相同的数的个数
// #include <iostream>
// #include <cstdio>
// #define N 100
// using namespace std;

// int a[N];
// int main() {
//     int n, m;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     scanf("%d", &m);
//     int count = 0;
//     for(int i = 0; i < n; i++) {
//         if(a[i] == m) {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }

// 2. 陶陶摘苹果
// #include <iostream>
// #include <cstdio>
// #define N 10
// using namespace std;
// int main() {
//     int a[N];
//     int height;
//     for(int i = 0; i < N; i++) {
//         scanf("%d", &a[i]);
//     }
//     scanf("%d", &height);
//     height += 30;
//     int count = 0;
//     for(int i = 0; i < N; i++) {
//         if(a[i] <= height) {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }


// 3. 年龄与疾病
// #include <iostream>
// #include <cstdio>
// #define N 100
// using namespace std;
// int main() {
//     int n;
//     int a[N];
//     double b[4] = { 0.0, 0.0, 0.0, 0.0 };
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }
//     for(int i = 0; i < n; i++) {
//         if(a[i] < 19) {
//             b[0]++;
//         } else if(a[i] < 36) {
//             b[1]++;
//         } else if(a[i] < 61) {
//             b[2]++;
//         } else {
//             b[3]++;
//         }
//     }
//     printf("%.2lf%%\n", b[0] / n * 100);
//     printf("%.2lf%%\n", b[1] / n * 100);
//     printf("%.2lf%%\n", b[2] / n * 100);
//     printf("%.2lf%%\n", b[3] / n * 100);
//     return 0;
// }

// 4. 校门外的树
// #include <iostream>
// #include <cstdio>
// #define L 10000
// #define M 100
// using namespace std;

// bool a[L];
// int b[M][2];
// int main() {
//     int l, m, count = 0;
//     scanf("%d%d", &l, &m);
//     for(int i = 0; i < m; i++) {
//         scanf("%d%d", &b[i][0], &b[i][1]);
//     }
//     for(int i = 0; i <= l; i++) {
//         a[i] = true;
//     }
//     for(int i = 0; i < m; i++) {
//         for(int j = b[i][0]; j <= b[i][1]; j++) {
//             if(a[j]) {
//                 a[j] = false;
//             }
//         }
//     }
//     for(int i = 0; i <= l; i++) {
//         if(a[i]) {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }

// 5. 计算鞍点
// #include <iostream>
// #include <cstdio>
// #define N 5
// using namespace std;

// int a[N][N];
// int main() {
//     int row, column;
//     int saddle;
//     int k;
//     bool flag = false;
//     for(int i = 0; i < N; i++) {
//         for(int j = 0; j < N; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(int i = 0; i < N; i++) {
//         saddle = a[i][0];
//         row = i;
//         column = 0;
//         for(int j = 1; j < N; j++) {
//             if(a[i][j] > saddle) {
//                 saddle = a[i][j];
//                 row = i;
//                 column = j;
//             }
//         }
//         for(k = 0; k < N; k++) {
//             if(a[k][column] < saddle) {
//                 row = k;
//                 break;
//             }
//         }
//         if(row == i) {
//             flag = true;
//             printf("%d %d %d\n", row + 1, column + 1, saddle);
//         }
//     }
//     if(!flag) {
//         printf("not found\n");
//     }
//     return 0;
// }


// 6. 图像模糊处理
// #include <iostream>
// #include <cstdio>
// #define N 100
// using namespace std;

// int a[N][N];
// int b[N][N];
// int main() {
//     int n, m;
//     scanf("%d%d", &n, &m);
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             scanf("%d", &a[i][j]);
//             b[i][j] = a[i][j];
//         }
//     }
//     for(int i = 1; i < n - 1; i++) {
//         for(int j = 1; j < m - 1; j++) {
//             b[i][j] = int((a[i][j] + a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) / 5.0 + 0.5);
//         }
//     }
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < m; j++) {
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 7. 矩阵转置
#include <iostream>
#include <cstdio>
#define N 100
using namespace std;

int a[N][N];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}