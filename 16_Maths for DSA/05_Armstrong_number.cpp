// Check Armstrong
#include<iostream>
using namespace std;
bool isArmstrong(int n){    
    int copyN = n;
    int sumOfCubes = 0;
    while (n!=0)            // T.c = O(log n)
    {
        int digit = n%10;
        sumOfCubes += (digit*digit*digit)   ;
        n = n/10;
    }
    if (sumOfCubes==copyN)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main(){
    int n = 153;
    if (isArmstrong(n))
    {
        cout<<n<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<n<<" isn't an Armstrong number."<<endl;
    }
    

    return 0;
}