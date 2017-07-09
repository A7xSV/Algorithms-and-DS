// Question Link : https://www.hackerrank.com/challenges/array-left-rotation

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{   
    int n, r, i;
    cin >> n >> r;
    vector<int> v(n);
    
    for (i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    rotate(v.begin(), v.begin() + r, v.end());
    
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}