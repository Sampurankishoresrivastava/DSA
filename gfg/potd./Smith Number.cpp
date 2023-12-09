
class Solution {
  public:
    vector<int> prime_array;
    void prime(int n)
    {
        while(n % 2 == 0)
        {
            prime_array.push_back(2); n /= 2;
        }
        
        for(int i=3; i<=n; i+=2)
        {
            while(n % i == 0) 
            {
                prime_array.push_back(i); n /= i;
            }
        }
    }
    
    int smithNum(int n) {
    
        prime(n);
        
        if(prime_array.size()<2) return 0;
        
        int digit_sum = 0, prime_sum = 0;
        
        while(n)
        {
            digit_sum += n % 10;
            n /= 10;
        }
        
        for(int i=0; i<prime_array.size(); i++)
        {
            int a = prime_array[i];
            while(a)
            {
                prime_sum += a % 10; a /= 10;
            }
        }
        if(prime_sum == digit_sum) return 1;
        return 0;
    }
};
