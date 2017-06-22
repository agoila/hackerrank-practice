#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int diagSum(int n, vector<vector<int>> a){
    int sum_prmry = 0;
    int sum_secdry = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                sum_prmry = sum_prmry + a[i][j];
            }
        }

        for (int j = n-1; j>=0; j--){
            if ((i + j) == (n - 1)){
                sum_secdry = sum_secdry + a[i][j];
            }
        }
    }
    return abs(sum_prmry - sum_secdry);
}


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
        for(int a_j = 0;a_j < n;a_j++){
            cin >> a[a_i][a_j];
        }
    }

    cout << diagSum(n, a) << endl;

    return 0;
}