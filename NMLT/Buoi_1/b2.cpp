// https://lqdoj.edu.vn/problem/if06
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n; 
    cin >> n; 
    int t = (int)sqrt(n);
    if (t * t == n) cout << "YES";
    else cout << "NO"; 
}