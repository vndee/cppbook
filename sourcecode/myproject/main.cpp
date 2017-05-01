#include <bits/stdc++.h>

using namespace std;

struct cmp {
  bool operator()(int a, int b) {
    return a > b;
  }
};

int main () {
  set <int, cmp> s;
  for (int i = 1; i <= 10; i++) s.insert(i);
  for (auto it = s.begin(); it != s.end(); it++)
    cout << *it << " ";
  cout << "\n";

  priority_queue <int, vector<int>, cmp> pq;
  for (int i = 1; i <= 10; i++) pq.push(i);
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << "\n";

  map <int, int, cmp> m;

  return 0;
}
