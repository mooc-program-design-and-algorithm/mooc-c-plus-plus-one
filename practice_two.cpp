// 1:对齐输出
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
// 	int a, b, c;
// 	scanf("%d%d%d", &a, &b, &c);
// 	printf("%8d %8d %8d\n", a, b, c);
// 	return 0;
// }


// 2.输出保留12位小数的浮点数
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
// 	double a;
// 	scanf("%lf", &a);
// 	printf("%.12lf\n", a);
// 	return 0;
// }

// 3.空格分隔输出
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
// 	char a;
// 	int b;
// 	float c;
// 	double d;
// 	scanf("%c%d%f%lf", &a, &b, &c, &d);
// 	printf("%c %d %.6f %.6lf\n", a, b, c, d);
// 	return 0;
// }


// 4.计算球的体积
// #define PI 3.14

// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
// 	double a;
// 	scanf("%lf", &a);
// 	double v = 4 / 3.0 * PI * a * a * a;
// 	printf("%.2lf\n", v);
// 	return 0;
// }

// 5.大象喝水
#define PI 3.14159
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int all = 20;
	int h, r;
	scanf("%d%d", &h, &r);
	double v = PI * r * r * h / 1000;
	int number = int(all / v) + 1;
	printf("%d\n", number);
	return 0;
}
