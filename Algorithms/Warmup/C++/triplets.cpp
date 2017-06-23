#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    vector <int> A = {a0, a1, a2};
    vector <int> B = {b0, b1, b2};
    vector <int> res = {0, 0};
    for (ssize_t i = 0; i < A.size(); i++){
        if (A[i] > B[i]){
            res[0]++;
        }
        else if (A[i] < B[i]){
            res[1]++;
        }
        else {

        }
    }

    return res;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}