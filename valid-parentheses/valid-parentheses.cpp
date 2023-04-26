class Solution {
public:
    bool isValid(string s) {
        //made a stack 
        stack<char>jat;
        //go to every charactor of the string
        for(auto i:s)
        {
            char ch=i;
            //if starting bracket h to stack me dal do 
            if(ch=='['||ch=='{'||ch=='(')
            {
                jat.push(ch);
            }
            //agr end bracket h to else pe aajo
            else
            {
                //stack khali ni hona chaye ok
                if(!jat.empty())
                {
                    //check krege sabse upr kya h or campare krege vo means start bracket or end bracket pair h kya ?
                    char top=jat.top();
                    if(top=='['&&ch==']' || top=='('&&ch==')'||top=='{'&&ch=='}')
                    {
                        //agr pair h to nkl dege start bracket ko taki niche wale check ho sake
                        jat.pop();
                    }
                    //agr pair nhi h to samj lo valid parenthese nhi h 
                    else
                    {
                        return false;
                    }
                }
                //empty hoga or koi end bracket aagi to bhi valid ni hoga ")))" start hoga hi ni mtlb!
                else{return false;}
                
            }
        }
        //agr sare pop hoge pair to mtlb valid h moj krdi answer aaga !!!
        if(jat.empty())
        {
            return true;
        }
        //agr end ktm hoge or start brackets bacgi to fir valid nnhi h sad lol !!!
        else
        {
            return false;
        }
        //tata bie bie Miss  you !!
        
        
    }
};
