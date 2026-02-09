// Two pointer approach
#include<iostream>
using namespace std;

int main(){
    int height[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height)/sizeof(int);
    int maxWater = 0;    // ans
    int lp=0, rp=n-1;
    while (lp<rp)
    {
        int w = rp-lp;
        int ht = min(height[lp],height[rp]);
        int currWater = w*ht;
        maxWater = max(maxWater,currWater);

        height[lp]<height[rp]? lp++ : rp--;
    }

    cout<<"Max water = "<<maxWater<<endl;
    

    return 0;
}