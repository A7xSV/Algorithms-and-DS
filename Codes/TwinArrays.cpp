// Question link : https://www.hackerrank.com/contests/w33/challenges/twin-arrays

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > v1;
    vector<pair<int, int> > v2;
    int num;
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v1.push_back(make_pair(num, i));
    }
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v2.push_back(make_pair(num, i));
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    if (v1[0].second != v2[0].second)
        cout << (v1[0].first + v2[0].first);
    else
        cout << min((v1[0].first + v2[1].first), (v2[0].first + v1[1].first));
}
