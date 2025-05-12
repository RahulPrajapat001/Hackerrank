/*Write a C program to classify an integer N into one of the following categories based on specific conditions:

Categories:

Category A: N is divisible by 2 and 3 but not divisible by 5.
Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
Valid numbers: 6, 10, 14, 15, 21, 22, 33, ...
Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
Category D: N is a perfect square less than 200.
Valid squares: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, ...
Category E: If none of the above conditions are satisfied.
Note: Output the category that comes first in lexicographic order.

Input Format

A single integer N

Constraints

-10^3 ≤ N ≤ 10^3

Output Format

A single character representing the category of N ('A', 'B', 'C', 'D', or 'E').

Sample Input 0

18
Sample Output 0

A
Sample Input 1

15
Sample Output 1

C
Sample Input 2

30
Sample Output 2

C
Sample Input 3

21
Sample Output 3

B
Sample Input 4

9
Sample Output 4

D
Sample Input 5

33
Sample Output 5

B*/

#include <stdio.h>
 

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 == 0 && n % 5 != 0) {
        printf("A\n");
    } else if (n > 20) {
        int flag = 0;
        for (int i = 2; i <= 11; i++) {
            if (i == 2 || i == 3 || i == 5 || i == 7 || i == 11) { 
                for (int j = i + 1; j <= 11; j++) {
                    if (j == 2 || j == 3 || j == 5 || j == 7 || j == 11) { 
                        if (n == i * j) {
                            flag = 1;
                            break;
                        }
                    }
                }
                if (flag)
                break;
            }
        }

        if (flag) {
            printf("B\n");
            
        } 
        
        
        else if (n >= 10 && n <= 99 && (n % 3 == 0 || n % 7 == 0) && !(n % 3 == 0 && n % 7 == 0)) {
            printf("C\n");
            
        } else {
            flag = 0;
            for (int i = 1; i * i <= n; i++) {
                if (i * i == n && n < 200) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                printf("D\n");
            } else {
                printf("E\n");
            }
        }
    }
    
    else if (n >= 10 && n <= 99 && (n % 3 == 0 || n % 7 == 0) && !(n % 3 == 0 && n % 7 == 0)) {
        printf("C\n");
    } else {
        int flag = 0;
            for (int i = 1; i * i <= n; i++) {
                if (i * i == n && n < 200) {
                    flag = 1;
                    break;
                }
            }
            if (flag) {
                printf("D\n");
            } else {
                printf("E\n");
            }
    }

    return 0;
}