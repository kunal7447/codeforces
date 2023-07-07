#include <queue>
#include <iostream>
using namespace std;

int main() {
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p;
    p.push({1, {2, 3}});
    p.push({2, {1, 1}});
    cout << p.top().first << " " << p.top().second.first << " " << p.top().second.second << endl;

    return 0;
}
