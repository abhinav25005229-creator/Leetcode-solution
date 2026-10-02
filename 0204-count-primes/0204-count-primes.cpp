class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)
            return 0;

        vector<bool> prime(n, true);

        prime[0] = false;
        prime[1] = false;

        // All even numbers except 2 are not prime
        for(int i = 4; i < n; i += 2)
            prime[i] = false;

        // Check only odd numbers
        for(int i = 3; i * i < n; i += 2) {

            if(prime[i]) {
                for(int j = i * i; j < n; j += 2 * i) {
                    prime[j] = false;
                }
            }
        }

        int count = 1; // 2 is prime

        // Count only odd primes
        for(int i = 3; i < n; i += 2) {
            if(prime[i])
                count++;
        }

        return count;
    }
};