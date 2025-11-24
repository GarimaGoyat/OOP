#include <iostream>
#include<vector>
#include<algorithm>
#include<array>
#include<stack>
#include<list>
#include<queue>
using namespace std;
int main() {
    // vector <int> v={1,6,3,4,5};
    // v.push_back(10);
    // cout<<v[5]<<endl;
    // cout<<v.at(5)<<endl;
    
    // sort(v.begin(),v.end());
    // for(int num:v){
    //     cout<<num<<endl;
    // }
    // cout<<v.at(0)<<endl;
    
    // array<int,5>a={1,2,3,4,5};
    // for(int i:a)
    // {
    //     cout<<i<<endl;
    // }
    stack<int> s;
    s.push(1);
    s.push(10);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    
    queue<int>q;
    q.push(10);
    q.push(20);
    cout<<q.front()<<q.back()<<endl;
    
    list<int>l;
    l.push_front(10);
    l.push_back(12);
    cout<<l.front()<<l.back()<<endl;
    list<int>::iterator it;
    it=l.begin();
    cout<<*it<<endl;
    l.insert(it,99);
    l.erase(l.begin());
    for(int i:l)
    {
        cout<<i<<endl;
    }
    
    return 0;
}