#include <iostream>
#include <string>
using namespace std;

bool is_group_word(string word){
    int len = word.length();
    char ch[26] = {0, };

    for(int i=0; i<len; i++){
        if(i!=len-1 && ch[word[i]-'a']==0 && word[i+1]!=word[i])
            ch[word[i]-'a']=1;
        else if(ch[word[i]-'a'] == 1)
            return false;
    }
    return true;
}

int main(){
    int n;
    string temp;
    int gw_num=0;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(is_group_word(temp))
            gw_num++;
    }
    cout << gw_num << endl;

    return 0;
}

