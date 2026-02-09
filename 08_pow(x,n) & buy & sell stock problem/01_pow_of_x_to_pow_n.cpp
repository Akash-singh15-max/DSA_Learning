//Power exponential problem, Pow(X,N)
#include<iostream>
using namespace std;
class Solution{
    public:
        
        double myPow(double x, int n){
            
            if (n==0)
            {
                return 1.0;
            }
            if (x==0)
            {
                return 0.0;
            }
            if (x==1)
            {
                return 1.0;
            }
            if (x==-1 && n%2==0)
            {
                return 1.0;
            }
            if (x==-1 && n%2!=0)
            {
                return -1.0;
            }
            
            
            long binForm = n;
            if (binForm<0)
            {
                x = 1/x;
                binForm = -binForm;
            }
            long ans = 1;
            while (binForm>0)
            {
                if (binForm%2==1)
                {
                    ans*=x;
                }
                x*=x;
                binForm/=2;
            }
            
            return ans;
        }
};
int main(){
    
    Solution s;
    double result = s.myPow(2,5);
    cout<<result<<endl;
    return 0;
}
