时间复杂度只有O（n）

#include <stdio.h>

#define MAX 1000
long long memo[MAX];

// 初始化记忆数组
void initialize_memo() {
     for(int i = 0; i < MAX; i++) {
          memo[i] = -1;
     }
}

// 记忆化递归计算斐波那契数
long long fibonacci_memo(int n) {
     if (n < 0) {
          printf("错误：斐波那契数未定义负数。\n");
          return -1;
     }
     if (n == 0) return 0;
     if (n == 1) return 1;
     if (memo[n] != -1) {
          return memo[n];
     }
     memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
     return memo[n];
}

int main() {
     int number;
     initialize_memo();
     printf("请输入要计算的斐波那契数的位置：");
     scanf("%d", &number);

     long long result = fibonacci_memo(number);
     if (result != -1) {
          printf("斐波那契数 F(%d) = %lld\n", number, result);
     }

     return 0;
}




////////////////////////
让我们通过计算 F(5) 来详细了解记忆化递归的工作原理。

初始状态
初始化：

调用 initialize_memo()，将 memo[0] 到 memo[999] 全部设为 -1。
用户输入 n = 5。
调用 fibonacci_memo(5)：

检查 n < 0：不满足。
检查 n == 0 或 n == 1：不满足。
检查 memo[5] 是否已计算（是否 != -1）：是 -1，未计算。
递归调用树
为了计算 fibonacci_memo(5)，需要计算 fibonacci_memo(4) 和 fibonacci_memo(3)。以下是详细的递归过程：

1. 计算 fibonacci_memo(5)
检查 memo[5]：-1，未计算。
递归计算：fibonacci_memo(4) + fibonacci_memo(3)。
2. 计算 fibonacci_memo(4)
检查 memo[4]：-1，未计算。
递归计算：fibonacci_memo(3) + fibonacci_memo(2).
a. 计算 fibonacci_memo(3)
检查 memo[3]：-1，未计算。
递归计算：fibonacci_memo(2) + fibonacci_memo(1).
i. 计算 fibonacci_memo(2)
检查 memo[2]：-1，未计算。
递归计算：fibonacci_memo(1) + fibonacci_memo(0).
####### A. 计算 fibonacci_memo(1)

检查 memo[1]：-1，未计算。
基本情况：n == 1，返回 1。
返回值：1。
####### B. 计算 fibonacci_memo(0)

检查 memo[0]：-1，未计算。

基本情况：n == 0，返回 0。

返回值：0。

计算 F(2)：1 + 0 = 1。

存储结果：memo[2] = 1。

返回值：1。

ii. 计算 fibonacci_memo(1)（再次）
检查 memo[1]：-1，未计算。

基本情况：n == 1，返回 1。

返回值：1。

计算 F(3)：1 + 1 = 2。

存储结果：memo[3] = 2。

返回值：2。

b. 计算 fibonacci_memo(2)（再次）
检查 memo[2]：1，已计算。

直接返回：1。

计算 F(4)：2 + 1 = 3。

存储结果：memo[4] = 3。

返回值：3。

3. 计算 fibonacci_memo(3)（再次）
检查 memo[3]：2，已计算。

直接返回：2。

计算 F(5)：3 + 2 = 5。

存储结果：memo[5] = 5。

返回值：5。

结果输出
主函数接收到 fibonacci_memo(5) 的返回值 5。
输出：斐波那契数 F(5) = 5
记忆化的关键点
通过上述计算过程，我们可以总结出记忆化在其中的关键作用：

存储已计算的结果：

每当计算出一个斐波那契数 F(n)，就将其存储在 memo[n] 中。
例如，在计算 F(2) 时，存储 memo[2] = 1；在计算 F(3) 时，存储 memo[3] = 2，依此类推。
避免重复计算：

当需要计算一个已存储的斐波那契数时，直接从 memo 数组中读取，而不再进行递归调用。
例如，在计算 fibonacci_memo(3) 时，第一次计算后将 memo[3] = 2，第二次需要 fibonacci_memo(3) 时，直接返回 2，无需再次递归计算 fibonacci_memo(2) 和 fibonacci_memo(1)。
提高效率：

通过记忆化，递归调用的次数从指数级（O(2^n)）减少到线性级（O(n)），显著提高了计算效率。
图示说明
以下是 fibonacci_memo(5) 的递归调用树，以及如何利用记忆化避免重复计算：

scss
Copy code
fibonacci_memo(5)
├── fibonacci_memo(4)
│   ├── fibonacci_memo(3)
│   │   ├── fibonacci_memo(2)
│   │   │   ├── fibonacci_memo(1) → 1
│   │   │   └── fibonacci_memo(0) → 0
│   │   └── fibonacci_memo(1) → 1
│   └── fibonacci_memo(2) → 1
└── fibonacci_memo(3) → 2
首次计算：
fibonacci_memo(5) 需要 fibonacci_memo(4) 和 fibonacci_memo(3)。
fibonacci_memo(4) 需要 fibonacci_memo(3) 和 fibonacci_memo(2)。
fibonacci_memo(3) 需要 fibonacci_memo(2) 和 fibonacci_memo(1)。
通过记忆化，fibonacci_memo(2) 和 fibonacci_memo(1) 被计算一次并存储。
重复调用时：
当再次需要 fibonacci_memo(3) 时，直接返回存储的结果 2，无需再次递归计算。
总结
通过记忆化递归方法计算斐波那契数列，程序能够高效地计算出所需的斐波那契数。以下是关键点的总结：

初始化：将 memo 数组初始化为 -1，表示尚未计算的斐波那契数。
递归计算：在计算 fibonacci_memo(n) 时，首先检查 memo[n] 是否已计算。
已计算：直接返回 memo[n]，避免重复计算。
未计算：递归计算 fibonacci_memo(n-1) + fibonacci_memo(n-2)，将结果存储在 memo[n] 中。
提高效率：通过存储和重用计算结果，将递归调用的次数从指数级降低到线性级，极大地提高了计算效率。
这种记忆化技术不仅适用于斐波那契数列，还广泛应用于各种具有重叠子问题的递归算法中，如动态规划问题、组合数学问题等
