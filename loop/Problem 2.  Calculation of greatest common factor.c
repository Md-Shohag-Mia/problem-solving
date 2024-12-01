#include <stdio.h>
int gcd(int m, int n){
    while (n != 0) {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
   return m;
}

int main() {
    int m, n;
    printf("Enter m and n: ");
    scanf("%d %d", &m, &n);

    // Calculate GCD using Euclid's algorithm
     // m now contains the GCD after the loop ends
    int GCD=gcd(m,n);
    printf("GCD: %d\n", GCD);
    return 0;
}
