#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("fractional.txt","r",stdin);
    int object, bag_size;
    cin >> object >> bag_size;
    multimap<double,int, greater<double> >knapsack;
    multimap<double,int>::iterator it;

    int value[object+1],weight[object+1];

    for(int i=1; i<=object; i++) {
        cin >> value[i] >> weight[i];
        knapsack.insert(make_pair(value[i]/weight[i],i));
    }

    double profit = 0;

    for(it=knapsack.begin(); it!=knapsack.end(); it++) {
        int n = it->second;
        if(bag_size > weight[n]) {
            profit += value[n];
            bag_size -= weight[n];
        }
        else {
            profit += it->first*bag_size;
            bag_size = 0;
        }

        if(bag_size == 0) break;
    }

    cout << profit << endl;

    return 0;
}