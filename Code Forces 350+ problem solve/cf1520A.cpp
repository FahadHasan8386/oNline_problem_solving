#include <bits/stdc++.h>
using namespace std;

bool isSuspicious(const string &tasks) {
    unordered_set<char> seenTasks;
    char lastTask = '\0';

    for (char task : tasks) {
        if (task != lastTask) {
            if (seenTasks.find(task) != seenTasks.end()) {
                return true;
            }
            seenTasks.insert(task);
            lastTask = task;
        }
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string tasks;
        cin >> tasks;

        if (isSuspicious(tasks)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}
