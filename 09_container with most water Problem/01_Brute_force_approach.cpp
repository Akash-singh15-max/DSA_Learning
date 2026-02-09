// find the container with most water from an array
#include<iostream>
using namespace std;

int main(){
    int range[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(range)/sizeof(int);
    int maxWater = INT8_MIN;
    int width, height, area;
    for (int i = 0; i < n; i++) // left border
    {
        for (int j = i+1; j < n; j++)   // right border
        {
            width = j-i;
            height = min(range[i],range[j]);
            area = width*height;
            maxWater = max(maxWater,area);
        }
        
    }
    cout<<"Max Water = "<<maxWater<<endl;

    return 0;
}