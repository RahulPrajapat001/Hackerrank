/*Write a program to generate a series of numbers between 1 and n (inclusive) that are divisible by either 3 or 5 but not both. The program should take an integer n as input and output the numbers satisfying this condition in a single line, separated by spaces.

Input Format

A single integer n, the upper limit of the range.
Constraints

1 ≤ n ≤ 10,000
Output Format

A single line containing numbers between 1 and n (inclusive) that are divisible by either 3 or 5, but not both, separated by spaces. If no such numbers exist, print nothing.
Sample Input 0

15
Sample Output 0

3 5 6 9 10 12
Sample Input 1

11
Sample Output 1

3 5 6 9 10*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; ++i)
    {
      int x,y,z;
        x= (i%3 == 0);
        y= (i%5 == 0);
        z= x^y;
        
      if(z){
          printf("%d ",i);
      }
          
    }
    
    return 0  ;
}
