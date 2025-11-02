/*
THINKING: if top s and bottom s matchb then true
if not match, then false
can have middle ' ' as dif bracket type , but be in pair
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> bracketOpen;
        if(s.size() % 2 == 0){
            for(int i = 0;i < s.size(); i++){
                cout << s[i] << " ";
                if(!bracketOpen.empty()){
                    cout << bracketOpen.top();
                }
                cout << '\n';
                //IF s[i] == '(' THEN s[s.size()-1] MUST equal ')'
                if (s[i] == '(')
                    bracketOpen.push(s[i]);
                if (s[i] == '{')
                    bracketOpen.push(s[i]);
                if (s[i] == '[')
                    bracketOpen.push(s[i]);
                
                if(bracketOpen.empty())
                    return false;

                if (s[i] == ')'){
                    if(bracketOpen.top()=='('){
                        bracketOpen.pop();
                    }else {
                        return false; 
                    }
                }
                if (s[i] == '}'){
                    if(bracketOpen.top()=='{'){
                        bracketOpen.pop();
                    }else {
                        return false; 
                    }
                }
                if (s[i] == ']'){
                    if(bracketOpen.top()=='['){
                        bracketOpen.pop();
                    }else {
                        return false; 
                    }
                }
            }
            if(bracketOpen.empty())
                return true;
            else{
                return false;
            }
        }else{
            return false;
        }
        //( ( )
    }
};
