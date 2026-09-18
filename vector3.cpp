#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={1,2,3,2,3};
    int ans = 0;
    for(int i:vec)
    {
        ans=ans^i;
    }
    cout<<ans;
    return ans;
}