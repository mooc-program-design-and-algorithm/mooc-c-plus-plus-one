// 1. 输出第二个整数
/*
#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout<< b <<endl;
	return 0;
}
*/

// 2. 字符菱形
/*
#include <iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	int number = 3;
	for(int i = 0; i < number; i++) {
		for(int j = 0; j < number - i - 1; j++) {
			cout << " ";
		}
		for(int k = 0; k < 2 * i + 1; k++) {
			cout<< a;
		}
		cout<< "\n";
	}
	for(int i = number - 1; i > 0; i--) {
		for(int j = 0; j < number - i; j++) {
			cout << " ";
		}
		for(int k = 0; k < 2 * i - 1; k++) {
			cout<< a;
		}
		cout<< "\n";
	}
	return 0;
}
*/

// 3. 打印ASCII码
/*
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	char a;
	scanf("%c", &a);
	printf("%d", a);
	return 0;
}
*/

// 4. 打印字符
/*
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int a;
	scanf("%d", &a);
	printf("%c", a);
	return 0;
}
*/

// 5. 整型数据类型存储空间大小
/*
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int a;
	short b;
	printf("%d %d", sizeof(a), sizeof(b));
	return 0;
}
*/

// 6. 浮点型数据类型存储空间大小
/*
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	float a;
	double b;
	printf("%d %d", sizeof(a), sizeof(b));
	return 0;
}
*/
