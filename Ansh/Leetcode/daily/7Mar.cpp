class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            // Step 1: Use Sieve of Eratosthenes to find all primes up to 'right'
            int limit = right + 1;
            vector<bool> isPrime(limit, true);
            isPrime[0] = isPrime[1] = false;
    
            for (int i = 2; i * i < limit; i++) {
                if (isPrime[i]) {
                    for (int j = i * i; j < limit; j += i) {
                        isPrime[j] = false;
                    }
                }
            }
    
            // Step 2: Collect primes in the given range
            vector<int> primes;
            for (int i = left; i <= right; i++) {
                if (isPrime[i]) {
                    primes.push_back(i);
                }
            }
    
            // Step 3: Find the closest prime pair
            if (primes.size() < 2) return {-1, -1};
    
            int minDiff = INT_MAX;
            int o = -1, p = -1;
    
            for (int i = 0; i < primes.size() - 1; i++) {
                int diff = primes[i + 1] - primes[i];
                if (diff < minDiff) {
                    minDiff = diff;
                    o = primes[i];
                    p = primes[i + 1];
                }
            }
    
            return {o, p};
        }
    };