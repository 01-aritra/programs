// Introduction to vectors

#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    
    cout << "Size :" <<v.size() <<endl;
    cout << "Capacity :" << v.capacity()<<endl;
    v.push_back(2);

    cout << "Size :" <<v.size()<<endl;
    cout << "Capacity :" << v.capacity()<<endl;
    v.push_back(3);
    cout << "Size :" <<v.size()<<endl;
    cout << "Capacity :" << v.capacity()<<endl;
    v.push_back(4);
    cout << "Size :" <<v.size()<<endl;
    cout << "Capacity :" << v.capacity()<<endl;
    v.push_back(5);
    cout << "Size :" <<v.size()<<endl;
    cout << "Capacity :" << v.capacity()<<endl;
    v.push_back(6);
    cout << "Size :" <<v.size()<<endl;
    cout << "Capacity :" << v.capacity()<<endl;
    v.push_back(7);
    

    v.pop_back();
    v.pop_back();

    v.resize(18);

    v.pop_back();
    v.pop_back();
    cout << "Size :" <<v.size()<<endl;
    cout << "Capacity :" << v.capacity()<<endl;
    return 0;
}