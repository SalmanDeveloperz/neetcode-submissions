class Solution {
public:

    string encode(vector<string>& strs) {
        string result= "";
        for (auto s: strs){
            result += to_string (s.length())+ "#"+ s;
        }
        return result;

        // HelloWorld  (Hello#World)
        // Hello#World (5#Hello5#World)
    }

    vector<string> decode(string s) {
        // 5#Hello5#World 
        // "Hello" "World"
        vector <string> result;
        int i=0;
        while (i< s.length()){
            int j=i;
            
            // 1st 
            while (s[j]!='#'){
                j++;
            }

            // 2nd
            int length= stoi(s.substr(i, j-i));

            // 3rd
            j++;

            // 4th
            string word= s.substr (j, length);
            result.push_back (word);
            
            // 5th
            i= j+length;

        }
        return result;
    }
};
