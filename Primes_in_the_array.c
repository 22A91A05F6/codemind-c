#include <stdio.h>

int main() {
    int n,pm=0,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        
    scanf("%d",&ar[i]);
    
    
    }


    for (int i = 0; i < n; i++) {
        int is_prime = 1; // Assume the current number is prime

        if (ar[i] < 2) {
            is_prime = 0; // 0 and 1 are not prime
        } else {
            for (int j = 2; j *j <= ar[i]; j++) {
                if (ar[i] % j == 0) {
                    is_prime = 0; // If divisible by any number, not prime
                    break;
                }
            }
        }

        if (is_prime) {
            pm++;
        }
    }
    printf("%d",pm);

    return 0;
}
