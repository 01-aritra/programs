// Loop in vector...

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v;

    // For loop
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    

    return 0;
}