/* Given the constraints
strs[i] is made up of lowercase English letters.

So we can create an array of size 26 (which is total size of alphabets), Har aik index represnet kr rha ha har aik letter ko

then simply har word ki frequency check krni ha like a, e, t kitni baar aay hein or iski frequency kya ha

Isky liay MAP bna lein gy

string   | vector <string>
----------------------------------
act      | act, cat
opst     | stop, pots, tops

**** Hum ny iss solution mei koi sorting use nai ki bss aik 26 size ka array liya ha or har letter ko traverse kr k uski frequency daali or jo word bn rha tha woh bna liya 
 The complexity will be (N*K) which is far better than the frequency of last solution with sorting way N*(k log k)


*/

class Solution {
public:

    // abb ata ha main part of this problem k string ko generate kesy krein gy

    string generate (string &word){
        int arr[26]={}; //aik array li ha 26 size ki jis mei iss word ko iterate ker k frequency store krni ha 

        for (char &ch: word){
            arr[ch-'a']++; // for store frequency 
        }

        string new_word="";
        for(int i=0; i<26; i++){
            int freq= arr[i]; // frequency nikal lety hein

            if (freq>0){
                new_word += string(freq, i+'a'); // agr word repeat ho means frequency agr 2 ya zyada ho e.g.tapp
            // agr character nikalna ha toh i+'a' krein gy or agr index nikalna ha toh ch- 'a' krty hein 
            }
        }
        return new_word;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n= strs. size(); // sbb sy phly size nikal lety hein 
        unordered_map <string, vector<string>> mp;    //usky baad aik map ly lein gy "mp" name ka 
        vector<vector<string>> result;  // result hmara "result" name ka hoga jo vecotr into vecotr string ka hoga or jo strings pairs return kry ga in form of answer
        for(int i=0; i<n; i++){
            string word= strs[i]; //harr aik work ko lein gy yaha 
            
            // word ki frequency ko store krein gy aik 26 size k array mei or waha sy aik word generate krna ha 
            // isky liay aik new function bna lein gy jo k generate kry ga aik new word

            string new_word= generate (word);
            // iss word ko store krein gy map "mp" mei or push back kr dein k kis k against (word) k against 

            mp[new_word].push_back(word);

        
        }

        // phir ussi trha hum apny map mei iterate ker k result mei push_back dalein gy "it.second" ko 

        for(auto &it: mp){
            result.push_back(it.second);
        }
        return result;
    }
};

// this is very good and optimal solution with the best complexity of N*26K which is N*K 
