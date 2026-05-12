class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n= strs.size();    //phly length nikalty hein

        unordered_map <string, vector<string>> mp; // unorder map liya ha, string or jo uss k corrrespond mei vector string use hongi 
        
        vector<vector<string>> result; //hmara jo result hoga woh vecotr string mei hoga 

        for (int i=0; i<n; i++){
            string temp= strs[i];

            sort (temp.begin(), temp.end()); //Sort ker lety hein phly

            mp[temp].push_back(strs[i]); //map mei uss string k corresponding jo vector hein uss mei push kr dena ha strs[i] ko, iss trha map mei sari entries chaly gy hein
        }
        

        //abb map mei iterate kr k sary answers push kr du ga, toh map mei iterate krty hein
        for (auto it : mp){
            result.push_back(it.second);
        }

        return result;


    }
};
