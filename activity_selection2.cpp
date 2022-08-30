#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    multimap<int,int>end;
    multimap<int,int>::iterator it;
    int task;
    cin>> task;
    int a,b;
    int start[task+1];
    for(int i=1; i<=task; i++)
    {
        cin >> a >> b;
        start[i] = a;
        end.insert(make_pair(b,i));
    }
    int current_end_time = 0;
    int work = 0;

    for(it=end.begin(); it!=end.end(); it++)
    {
        if(current_end_time < start[it->second])
        {
            work++;
            current_end_time = it->first+2;
        }
    }
    cout << work << endl;
}
