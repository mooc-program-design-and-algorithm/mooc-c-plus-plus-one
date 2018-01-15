// 1. Pell数列
// #include <iostream>
// #include <cstdio>
// #define N 1000001
// using namespace std;
// int pell[N];
// int k[N];
// int main() {
//     int n;
//     scanf("%d", &n);
//     for(int i = 0; i < n; ++i) {
//         scanf("%d", &k[i]);
//     }
//     pell[1] = 1;
//     pell[2] = 2;
//     for(int i = 3; i < N; ++i) {
//         pell[i] = (2 * pell[i - 1] + pell[i - 2]) % 32767;
//     }
//     for (int i = 0; i < n; ++i) {
//         printf("%d\n", pell[k[i]]);
//     }
//     return 0;
// }

// 2. 求最大公约数问题
// #include <iostream>
// #include <cstdio>
// using namespace std;

// long greatest_common_divisor(long m, long n) {
//     long remaider = m % n;
//     while(remaider) {
//         m = n;
//         n = remaider;
//         remaider = m % n;
//     }
//     return n;
// }
// int main() {
//     long m, n;
//     scanf("%ld%ld", &m, &n);
//     if(m > n) {
//         printf("%ld\n", greatest_common_divisor(m, n));
//         return 0;
//     } else {
//         printf("%ld\n", greatest_common_divisor(n, m));
//         return 0;
//     }
// }

// 3. 编程填空：第i位替换
// #include <iostream>
// using namespace std;

// int bitManipulation1(int n, int m, int i) {
//     int temp = (m >> i) & 1;
//     if(temp == ((n >> i) & 1)) {
//         return (temp << i) | n;
//     } else {
//         return n ^ (1 << i);
//     }
// }

// int main() {
//     int n, m, i, t;
//     cin >> t;
//     while (t--) { 
//         cin >> n >> m >> i;
//         cout << bitManipulation1(n, m, i) << endl;
//     }
//     return 0;
// }

// 4. 编程填空：第i位取反
// #include <iostream>
// using namespace std;

// int bitManipulation2(int n, int i) {
//     return n ^ (1 << i);
// }

// int main() {
//     int t, n, i;
//     cin >> t;
//     while (t--) {
//         cin >> n >> i;
//         cout << bitManipulation2(n, i) << endl;
//     }
//     return 0;
// }

// 5. 编程填空：左边i位取反
#include <iostream>
using namespace std;

int bitManipulation3(int n, int i) {
    int m = 0;
    int temp = 1;
    for(int k = 0; k < i; k++) {
        m += temp;
        temp *= 2;
    }
    return n ^ (m << (sizeof(int) * 8 - i));
}

int main() {
    int t, n, i;
    cin >> t;
    while (t--) {
        cin >> n >> i;
        cout << bitManipulation3(n, i) << endl;
    }
    return 0;
}

