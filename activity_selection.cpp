#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    multimap<int,int>finish;  // first = finish , second = activity number
    multimap<int,int>::iterator it;
    int activity;
    cin>> activity;

    int a,b;
    int start[activity+1];


    for(int i=1; i<=activity; i++) {
        cin >> a >> b;
        start[i] = a; //* 1 = 1
        finish.insert(make_pair(b,i)); // 4, 1
    }

    int current_finish_time = 0;
    int work = 0;

    for(it=finish.begin(); it!=finish.end(); it++) {
        if(current_finish_time < start[it->second]) { // 11 < 9
            work++;
            current_finish_time = it->first; // 11
        }
    }

    cout << work << endl;
    
}