//https://lqdoj.edu.vn/problem/scr01abc
#include <iostream>
using namespace std; 
int main() 
{
    long long t ;  
    cin >> t; 
    while (t--)  //Xu li nhieu test case 
    {
        long long k; cin >> k; 
        if (k - 1 != 0) cout << k - 1 << '\n'; //Cot loi bai toan o day  
        else cout << -1 << '\n'; 
    }
}