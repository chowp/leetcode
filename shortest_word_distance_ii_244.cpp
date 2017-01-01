#include <math.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class WordDistance {
private:
    std::map<string,vector<int> > db;
    int maxgap;
public:
    WordDistance(vector<string>& words) {
        int i=0,len=words.size();
        maxgap = len;
        for(i=0; i < len; i++){
            if(db.find(words[i]) == db.end()){
                vector<int> tmp;
                tmp.push_back(i);
                db[words[i]] = tmp;
            }else{
                db[words[i]].push_back(i);
            }
        }
    }

    int shortest(string word1, string word2) {
        vector<int> tmp1,tmp2;
        tmp1 = db[word1];
        tmp2 = db[word2];
        int len1=tmp1.size(),len2=tmp2.size(),index1=0,index2=0,mingap=maxgap;
        while(index1 < len1 && index2 < len2){
            mingap = min(abs(tmp1[index1]-tmp2[index2]),mingap);
            if(tmp1[index1] > tmp2[index2]){
                index2 ++;
            }else{
                index1 ++;
            }
        }
        return mingap;
    }
};

// Your WordDistance object will be instantiated and called as such:
// WordDistance wordDistance(words);
// wordDistance.shortest("word1", "word2");
// wordDistance.shortest("anotherWord1", "anotherWord2");


int main()
{
	string s[] = {"practice", "makes", "perfect", "coding", "makes"};
	vector<string> words(begin(s),end(s));
	WordDistance wd(words);
	cout << wd.shortest("practice", "makes") << endl;
	cout << wd.shortest("practice", "coding") << endl;
	return 0;
}
