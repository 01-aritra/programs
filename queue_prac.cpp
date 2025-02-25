#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //Create a queue
    queue<int> q;

    q.push(5);
    cout << " Front Element is " << q.front() << endl;
    if (q.empty())
    {
        cout<< " Queue is Empty";
    }
    else
    {
        cout << "Queue is not Empty";
    }

    cout << endl;
    
    q.pop();
    //poping the first element in the queue 



    if (q.empty())
    {
        cout<< " Queue is Empty";
    }
    else
    {
        cout << "Queue is not Empty";
    }

    return 0;
}