// class Solution {
// public:

//     string encode(vector<string>& strs) {
//         // "Hello", "Salman"
//         // 5#Hello6#Salman

//         string result= "";
        
//         for (string s: strs){
//             result += to_string (s.length ()) + "#" + s;
//         }
//         return result;

//     }

//     vector<string> decode(string s) {
//         vector <string> result;
//         int i= 0;
        
//         // string = 5#Hello5#Salman
//         while (i<s.length()){
//             int j=i;
//             // 1st step to get #s.pu
//             while (s[j]!= '#'){
//                 j++;
//             }

//             // 2nd step of get length

//             int length= stoi (s.substr(i, j-i));
//             j++;

//             // 3rd step 
//             string word= s.substr(j, length);
//             result.push_back(word);

//             i= j+length;



//         }
//         return result;

//     }
// };












































class Solution {
public:

    string encode(vector<string>& strs) {

        // "Hello" "World" --> 5#Hello5#World
        string result= "";
        for (string s: strs){
            result+= to_string(s.length())+ "#"+ s;
        }
        return result;

    }

    vector<string> decode(string s) {
        vector <string> result;
        int i=0;
        while (i< s.length()){

            int j=i;

            // 1st step: finding the # 
            while (s[j]!= '#'){
                j++;
            }

            // 2nd step of getting length of string
            // 5#Hello --> i=0; j-i= 1   substr (0,1)= 5 , substr (0,2)= 5#, substr (2, 5)= Hello
            int length= stoi(s.substr (i, j-i)); // i is the start, and the j is the length , j here is the length before #
            j++;

            // 3rd is to get the words
            string word= s.substr (j, length);
            result.push_back (word);
            
            // 4th would be to update the value of i
            i= j+length; // i= 2+5 = 7

        }
        return result;
    
    }
    
};








