class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            
          // here we go through the common prefix.
         
         // here we check every first ,second ,third... of the each string.
    
        //  string s = strs[0];
        //  int l = s.size();
    
        //  string result = "";
        //    bool check = true;
        //    int j = 0;
        //   while(j<l){
    
        //      for(int i = 1; i<strs.size(); i++){
        //      string p = strs[i];
        //      if( j >= p.size() ||s[j] != p[j]){ // here checking the length of the next string shuld be less the j.
        //         check = false;
        //         break;
        //      }
        //      else{
        //       check = true;
        //      }
        //  }
    
        //  if(check){
        //     result += s[j]; 
        //     j++;
        //  }
        //  else{
        //     return result;
        //  }
    
        //   }
    
     
        //  return result;
    
         
    
         //some optimal and the better solution of the problem.
    
    
         sort(strs.begin(),strs.end());
    
    
         int n = strs.size();
    
         // take the first element.
         string s = strs[0];
    
         // take the last element 
         string e  = strs[n-1];
    
    
         string result = "";
    
         for(int i = 0; i<s.size(); i++){
            
            if(s[i] == e[i] && i<e.size()){
                result += s[i];
            }
            else{
                return result;
            }
    
    
         }
    
    
         
         return result;
    
    
    
            
        }
    };