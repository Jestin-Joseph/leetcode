#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char> > &board) {
        vector<unordered_set<char>> rows(board.size());
        vector<unordered_set<char>> cols(board.size());
        vector<unordered_set<char>> sub_set(board.size());
        
        for(int i =0; i < board.size(); i++){
            for(int j = 0; j < board[i].size() ; j++){
                char num = board[i][j];
                if (num == '.') continue;

                int subIndex = (i/3) * 3 +(j/3);

                if(rows[i].count(num) || cols[j].count(num) || sub_set[subIndex].count(num)){
                    return false;
                }

                rows[i].insert(num);
                cols[j].insert(num);
                sub_set[subIndex].insert(num);



            }
            
        }

       
        
        return true;
    }
};

int main() {
    Solution sol;

    vector<vector<char> > board;
    board.push_back({ '8', '3', '.', '.', '7', '.', '.', '.', '.' }); 
    board.push_back({ '6', '.', '.', '1', '9', '5', '.', '.', '.'}); 
    board.push_back({ '.', '9', '8', '.', '.', '.', '.', '6', '.'}); 
    board.push_back({ '8', '.', '.', '.', '6', '.', '.', '.', '3'}); 
    board.push_back({ '4', '.', '.', '8', '.', '3', '.', '.', '1'}); 
    board.push_back({ '7', '.', '.', '.', '2', '.', '.', '.', '6'});
    board.push_back({ '.', '6', '.', '.', '.', '.', '2', '8', '.'});
    board.push_back({ '.', '.', '.', '4', '1', '9', '.', '.', '5'});
    board.push_back({ '.', '.', '.', '.', '8', '.', '.', '7', '9'});
    

    bool result = sol.isValidSudoku(board);

    cout << "result: " << result << endl;

    return 0;
}
