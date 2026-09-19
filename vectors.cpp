#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>  vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(6);
    vec.push_back(5);
    vec.push_back(6);
    vec.pop_back();
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    for(int val : vec)
    {
        cout<<val<<" "<<endl;
    }
    cout<<"value at 2 is"<<vec[2]<< "value at 1 is"<<vec.at(1)<<endl;
    cout<<"front "<<vec.front()<<endl;
    cout<<"back "<<vec.back()<<endl;
    cout<<"maximum no elements "<<vec.max_size()<<endl;
    

}
