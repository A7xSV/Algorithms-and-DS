#include <bits/stdc++.h>

using namespace std;
    
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int num;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.insert(lower_bound(v.begin(), v.end(), num), num);
        double median;
        if (i % 2 == 0)
            median = (double)v[i / 2];
        else
            median = (double)(v[i / 2] + v[(i / 2) + 1]) / 2;
        printf("%.1f\n", median);
    }
}
