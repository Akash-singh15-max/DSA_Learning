// Sieve of Eratosthenes
#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
        int countPrimes(int n){
            vector<bool> isPrime(n+1,true);
            int count = 0;
            for (int i = 2; i < n; i++)
            {
                if (isPrime[i])
                {
                    count++;
                    for (int j = i*2; j < n; j+=i)
                    {
                        isPrime[j]= false;
                    }
                    
                }
                
            }
            return count;
        }
};
int main(){
    Solution s;
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int result = s.countPrimes(n);
    cout<<"Number of primes less than "<<n<<" is : "<<result<<endl;


    return 0;
}