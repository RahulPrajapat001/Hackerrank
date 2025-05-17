/*Given a number n and a position i, write a program to toggle the i-th bit of n using bitwise operators.

Input Format

The first line contains an integer n.
The second line contains an integer i.
Constraints

-10^9 ≤ n ≤ 10^9
0 ≤ i ≤ 31
Output Format

Print the updated value of n after toggling the i-th bit.
Sample Input 0

10
2            
Sample Output 0

14
Sample Input 1

5
0
Sample Output 1

4*/
#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);
    scanf("%d", &i);

    int mask = 1 << i;
    n = n ^ mask;
    printf("%d\n", n);

    return 0;
}