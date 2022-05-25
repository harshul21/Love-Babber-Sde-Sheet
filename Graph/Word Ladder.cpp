//Problem Link:- https://leetcode.com/problems/word-ladder/
//Code:-
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(),wordList.end());
        queue<string> q;
        q.push(beginWord);
        int count=1;
        while(!q.empty()){
            int n=q.size();
            for(int i=1;i<=n;i++){
                string word=q.front();
                q.pop();
                
                if(word==endWord){
                    return count;
                }
                
                st.erase(word);
                for(int j=0;j<word.length();j++){
                    char c=word[j];
                    for(int k=0;k<26;k++){
                        word[j]='a'+k;
                        if(st.find(word)!=st.end()){
                            q.push(word);
                        }
                    }
                    word[j]=c;
                }
            }
            count++;
        }
        return 0;
    }
};
