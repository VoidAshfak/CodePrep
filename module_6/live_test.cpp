#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int timeToBuyTickets(vector<int>& tickets, int k) {
    int n = tickets.size();
    queue<int> q;

    for (int i = 0; i < n; ++i) {
        q.push(i); 
    }

    int time = 0;
    while (!q.empty()) {
        int front_person = q.front();
        q.pop();

        if (tickets[front_person] > 0) {
            tickets[front_person]--;
            time++;

            if (front_person == k && tickets[front_person] == 0) {
                return time;
            }

            q.push(front_person);
        }
    }

    return time;
}

int main() {
    vector<int> tickets;
    int k,n;
    cin >> n;
    for(int i = 0; i<n;i++){
        int num;
        cin >> num;
        tickets.push_back(num);
    }
    cin >> k;

    int result = timeToBuyTickets(tickets, k);
    cout << result << endl;

    return 0;
}
