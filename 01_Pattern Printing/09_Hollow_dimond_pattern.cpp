/*
    Hollow Diamond pyramid 1
       *
      * *
     *   *
    *     *
     *   *
      * *
       *
*/

#include<iostream>
using namespace std;
int pattern1(int n);
int main(){
    int n = 4;
    pattern1(n);

    return 0;
}
int pattern1(int n){
    for (int i = 0; i < n; i++)
    {
        // printing spaces
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if (i!=0)
        {
            // printing spaces
            for (int j = 0; j < (2*i-1); j++)
            {
                cout<<" ";
            }
            
            cout<<"*";
        }
        cout<<endl;
    }
    // for bottom part
    for (int i = 0; i < n-1; i++) // 0 to n-2
    {
        // spaces
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if (i!=n-2)    
        {
            for (int j = 0; j < (2*(n-i)-5); j++)
            {
                cout<<" ";
            }
            
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}