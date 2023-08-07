// https://codemama.io/codetest/participate/ecebd1d1-a28e-412d-a77b-08eab4074404/problems/merge-overlapping-intervals

#include <bits/stdc++.h>
#include<vector>
using namespace std;
     
int main() {
  
    int N;
    cin >> N;


    vector<pair<int, int>> intervals;


    for (int i = 0; i < N; i++) {
        int start, end;
        cin >> start >> end;
        intervals.push_back({start, end});
    }

    sort(intervals.begin(), intervals.end());

    vector<pair<int, int>> result;

    result.push_back(intervals[0]);

    for (int i = 1; i < N; i++) {
        int prevEnd = result.back().second;
        if (intervals[i].first <= prevEnd) {
            result.back().second = max(intervals[i].second,prevEnd);
        } else {
            result.push_back(intervals[i]);
        }
    }


    for(int i = 0; i < result.size(); i++){
        cout << result[i].first << " " << result[i].second << endl;
    }


    return 0;
}