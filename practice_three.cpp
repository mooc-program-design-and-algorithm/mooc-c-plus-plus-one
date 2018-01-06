//1. 奇偶数判断
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int a;
//     scanf("%d", &a);
//     if (a % 2) {
//         printf("odd\n");
//     } else {
//         printf("even\n");
//     }
//     return 0;
// }


// 2. 求一元二次方程的根
// #include <iostream>
// #include <cstdio>
// #include <math.h>
// using namespace std;
// int main() {
//     double a, b, c;
//     scanf("%lf%lf%lf", &a, &b, &c);
//     if (b * b == 4 * a * c) {
//         double solution = - b / (2 * a);
//         printf("x1=x2=%.5lf\n", solution);
//     } else if (b * b > 4 * a * c){
//         double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//         double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//         if (x1 > x2) {
//             printf("x1=%.5lf;x2=%.5lf\n", x1, x2);
//         } else {
//             printf("x1=%.5lf;x2=%.5lf\n", x2, x1);
//         }
//     } else {
//         double real = -b / (2 * a);
//         double imaginary = sqrt(4 * a * c - b * b) / (2 * a);
//         if (real == -0.0) {
//             real = 0.0;
//         }
//         printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", real, imaginary, real, imaginary);
//     }
//     return 0;
// }

// 3. 点和正方形的关系
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int x, y;
//     scanf("%d%d", &x, &y);
//     if (x >= -1 && x <=1 && y >= -1 && y <= 1) {
//         printf("yes\n");
//     } else {
//         printf("no\n");
//     }
//     return 0;
// }

// 4. 苹果和虫子2
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int n, x, y;
//     int remainder;
//     scanf("%d%d%d", &n, &x, &y);
//     if (y % x) {
//         remainder = n - y / x - 1;
//     } else {
//         remainder = n - y / x;
//     }
//     if (remainder < 0) {
//         remainder = 0;
//     }
//     printf("%d\n", remainder);
//     return 0;
// }

// 5. 简单计算器
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int a, b;
//     char c;
//     scanf("%d%d %c", &a, &b, &c);
//     switch (c) {
//         case '+':
//             printf("%d\n", a + b);
//             break;
//         case '-':
//             printf("%d\n", a - b);
//             break;
//         case '*':
//             printf("%d\n", a * b);
//             break;
//         case '/':
//             if (!b) {
//                 printf("Divided by zero!\n");
//             } else {
//                 printf("%d\n", a / b);
//             }
//             break;
//         default:
//             printf("Invalid operator!\n");
//             break;
//     }
//     return 0;
// }

// 6. 求整数的和与均值
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int n, value;
//     int sum = 0;
//     double average;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &value);
//         sum += value;
//     }
//     average = double(sum) / n;
//     printf("%d %.5lf\n", sum, average);
//     return 0;
// }

// 7. 整数序列的元素最大跨度值
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int n, value;
//     int max = 0;
//     int min = 1001;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &value);
//         if (value > max) {
//             max = value;
//         }
//         if (value < min) {
//             min = value;
//         }
//     }
//     printf("%d\n", max - min);
//     return 0;
// }


// 8. 奥运奖牌计数
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int n;
//     int a, b, c;
//     int sum_a = 0, sum_b = 0, sum_c = 0, sum = 0;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d%d%d", &a, &b, &c);
//         sum_a += a;
//         sum_b += b;
//         sum_c += c;
//         sum = sum + a + b + c;
//     }
//     printf("%d %d %d %d\n", sum_a, sum_b, sum_c, sum);
//     return 0;
// }

// 9. 乘方计算
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int a, n;
//     int power = 1;
//     scanf("%d%d", &a, &n);
//     for(int i = 0; i < n; i++) {
//         power *= a;
//     }
//     printf("%d\n", power);
//     return 0;
// }

// A. 鸡尾酒疗法
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int n, a, b;
    double cocktail, ratio;
    scanf("%d", &n);
    scanf("%d%d", &a, &b);
    cocktail = double(b) / a;
    for(int i = 1; i < n; i++) {
        scanf("%d%d", &a, &b);
        ratio = double(b) / a;
        if (cocktail > ratio && (cocktail - ratio) > 0.05) {
            printf("worse\n");
        } else if (cocktail < ratio && (ratio - cocktail) > 0.05){
            printf("better\n");
        } else {
            printf("same\n");
        }
    }
    return 0;
}
