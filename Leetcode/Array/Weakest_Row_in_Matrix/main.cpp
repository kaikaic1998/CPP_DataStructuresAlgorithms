#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <utility>
#include <algorithm>

using namespace std;

void solution_pri_queue(const vector< vector<int> > &mat, int k){
    vector<int> result;

    priority_queue<pair<int, int>> pair_pri_queue;

    int row_size = mat.size();
    int num_of_ones{};

    for (int row {0}; row < row_size; row++){
        num_of_ones = count(mat[row].begin(), mat[row].end(), 1);
        pair_pri_queue.push(make_pair(num_of_ones, row));
    }

    while(!pair_pri_queue.empty()) {
        result.push_back(pair_pri_queue.top().second);
        pair_pri_queue.pop();
    }

    int i = result.size()-1;
    while (k > 0) {
        k--;
        cout << result.at(i) << " ";
        i--;
    }
    cout << endl;
}

void solution_set(const vector< vector<int> > &mat, int k){
    vector<int> result;

    set<pair<int, int>> pair_set;

    int row_size = mat.size();
    int num_of_ones{};

    for (int row {0}; row < row_size; row++){
        num_of_ones = count(mat[row].begin(), mat[row].end(), 1);
        pair_set.insert(make_pair(num_of_ones, row));
    }

    for(auto i : pair_set){
        if (k == 0){
            break;
        }
        k--;
        result.push_back(i.second);
    }

    for (int i : result){
        cout << i << " ";
    }
    cout << endl;

}

int main(){
    int k {3};

    vector< vector<int> > matrix = {
        {1,1,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,0,0,0},
        {1,1,1,1,1}
    };

    solution_pri_queue(matrix, k);
    solution_set(matrix, k);

    return 0;
}