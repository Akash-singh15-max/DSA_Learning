#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string,int>m;
    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablets"] = 120;
    m["watch"] = 50;

    m.insert({"camera",25});
    m.emplace("Phones",25);

    m.erase("tv");
    for(auto val: m){
        cout<<val.first<<" "<<val.second<<endl;
    }
    cout<<endl;
    cout<<"Laptop = "<<m["laptop"]<<endl;
    cout<<"Count = "<<m.count("laptop")<<endl;

    if (m.find("camera") != m.end())
    {
        cout<<"Found\n";
    }
    else{
        cout<<"Not found\n";
    }
    

    return 0;
}