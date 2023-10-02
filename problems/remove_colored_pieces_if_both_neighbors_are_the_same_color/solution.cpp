class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice = 0, bob = 0;
        stack<char> st;
        st.push(colors[0]);
        for(int i=1;i<colors.size()-1;i++){
            if(st.top() == 'A' && colors[i]=='A' && colors[i+1] == 'A'){
                alice++;
                continue;
            }
            else if(st.top() == 'B' && colors[i]=='B' && colors[i+1] == 'B'){
                bob++;
                continue;
            }
            st.push(colors[i]);
        }
        if(alice > bob) return true;
        return false;
    }
};