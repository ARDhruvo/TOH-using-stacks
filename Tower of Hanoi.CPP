#include <bits/stdc++.h>
using namespace std;

// Note to self: Use Vector instead

stack <int> A;
stack <int> B;
stack <int> C;

// void printing(stack <char> A)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         cout << A[i] << 
//     }
// }

void TOH(int n,stack <int> A, stack <int> B, stack <int> C)
{
    if(n > 0)
    {
        TOH(n-1, A, C, B);
        int a = A.top();
        C.pop();
        C.push(a);
        cout << A.top() << " to " << C.top() << endl;
        TOH(n-1, B, A, C);
    }
}

void changeTest(stack<char> a)
{
    cout << "Function: " << a.top() << endl;
    a.pop();
    a.push('B');
    cout << "Updated: " << a.top() << endl;
    
}

int main()
{

    for(int i=0; i<3; i++)
    {
        A.push(1 + i);
        B.push(0);
        C.push(0);
    }
    TOH(3, A, B, C); // Increasing the iteration shows how much capacity it can utilize
}
