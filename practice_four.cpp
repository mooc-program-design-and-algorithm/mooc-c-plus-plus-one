// 1. 角谷猜想
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     long n;
//     scanf("%ld", &n);
//     while(n != 1) {
//     	if(n % 2) {
//     		printf("%ld*3+1=%ld\n", n, n * 3 + 1);
//     		n = n * 3 + 1;
//     	} else {
//     		printf("%ld/2=%ld\n", n, n / 2);
//     		n = n / 2;
//     	}
//     }
//     printf("End\n");
//     return 0;
// }

// 2. 正常血压
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int n;
//     int count = 0;
//     int max = 0;
//     int systolic_pressure, diastolic_pressure;
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//     	scanf("%d%d", &systolic_pressure, &diastolic_pressure);
//     	if(systolic_pressure >= 90 && systolic_pressure <= 140 && diastolic_pressure >= 60 && diastolic_pressure <= 90) {
//     		count++;
//     		if(count > max) {
//     			max = count;
//     		}
//     	} else {
//     		count = 0;
//     	}
//     }
//     printf("%d\n", max);
//     return 0;
// }

// 3. 数字反转
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
//     int n;
//     int remainder;
//     int result = 0;
//     scanf("%d", &n);
//     while(n) {
//     	remainder = n % 10;
//     	result = result * 10 + remainder;
//     	n = n / 10;
//     }
//     printf("%d\n", result);
//     return 0;
// }

// 4. 求特殊自然数
// #include <iostream>
// using namespace std;
// int main() {
//     for(int i = 82; i <= 342; i++) {
//     	if((i % 7 == i / 81) && (i / 7 % 7 == i / 9 % 9) && (i / 49 == i % 9)) {
//     		cout << i << endl;
//     		cout << i / 49 << i / 7 % 7 << i % 7 << endl;
//     		cout << i / 81 << i / 9 % 9 << i % 9 << endl;
//     	}
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     for(int i = 1; i < 7; i++) {
//     	for(int j = 0; j < 7; j++) {
//     		for(int k = 1; k < 7; k++) {
//     			if(i * 49 + j * 7 + k == k * 81 + j * 9 + i) {
//     				cout << i * 49 + j * 7 + k << endl;
//     				cout << i << j << k << endl;
//     				cout << k << j << i << endl;
//     			}
//     		}
//     	}
//     }
//     return 0;
// }


// 5. 雇佣兵
// #include <iostream>
// #include <cstdio>
// using namespace std;
// int main() {
// 	int M, N, X, m, n;
// 	scanf("%d%d%d", &M, &N, &X);
//     while(true) {
//     	m = 0;
//     	while(m < M) {
//     		X--;
//     		m += N;
//     	}
//     	if(X < 0) {
//     		break;
//     	}
//     	m = M;
//     	n = N;
//     	while(m >= n) {
//     		N++;
//     		m = m - n;
//     	}

//     }
//     printf("%d\n", N);
//     return 0;
// }


// 6. 数字统计
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
	int L, R;
	int count = 0;
	int temp;
	scanf("%d%d", &L, &R);
	for(int i = L; i <= R; i++) {
		temp = i;
		while(temp) {
			if(temp % 10 == 2) {
				count++;
			}
			temp /= 10;
		}
	}
    printf("%d\n", count);
    return 0;
}