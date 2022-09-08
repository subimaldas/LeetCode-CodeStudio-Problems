Question: Sieve of Eratosthenes, Count prime..
  
  Approach: 1. Mark every number as a prime number 
            2. Those who comes in table make them non-prime.
    
    
    
CODE: 
class Solution
{
public:
    int countPrimes(int n)
    {

        int count = 0;
        vector<bool> prime(n + 1, true);

        prime[0] = prime[1] = false;

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                count++;

                for (int j = 2 * i; j < n; j = j + i)
                {
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};





CODE:

class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
           vector <int>count;
           vector<int> prime(N + 1, true);

           for(int i=2;i<=N;i++)

        {
            if (prime[i])
            {
                count.push_back(i);

                for (int j = 2 * i; j <=N; j = j + i)
                {
                    prime[j] = false;
                }
            }
        }
        return count;
    }
    
};
