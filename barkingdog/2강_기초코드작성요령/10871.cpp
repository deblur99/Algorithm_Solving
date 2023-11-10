//
//  10871.cpp
//  cpp
//
//  Created by 한현민 on 11/8/23.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> s;
    queue<int> q;
    deque<int> d;
    
    cin.tie(0);
    ios::sync_with_stdio();
    
    int N, X;
    vector<int> v;
    
    cin >> N >> X;
    
    int num;
    for (int i = 0; i < N; i++) {
        cin >> num;
        v.push_back(num);
    }
    
    for (auto it=v.begin(); it != v.end(); it++) {
        if (*it < X) {
            cout << *it << " ";
        }
    }
}
