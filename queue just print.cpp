#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "Queue size: " <<q.size() <<endl;
    cout << "Front element: " <<q.front() <<endl;
    cout << "back element: " <<q.back() <<endl;
    q.pop();
}


