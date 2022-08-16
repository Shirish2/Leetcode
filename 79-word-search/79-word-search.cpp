class Solution {
public:
    bool a(vector<vector<char>>& board, string word,int i,int j,int count){
        if(count==word.size()) return true;
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or board[i][j]!=word[count]){
            return false;
        }
        char t=board[i][j];
        board[i][j]='*';
        bool res=a(board,word,i+1,j,count+1)
        or a(board,word,i,j+1,count+1)
        or a(board,word,i-1,j,count+1)
        or a(board,word,i,j-1,count+1);
        
        board[i][j]=t;
        return res;
    
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]and a(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};