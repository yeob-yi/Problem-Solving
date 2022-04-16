#include <iostream>
#include <string>
using namespace std;

int main(){
    string word; // 크로아티아 알파벳 : c=, c-, dz=, d-, lj, nj, s=, z= | (c, dz, s, z) + = | (c, d) + - | (l, n) + j
    int len;
    int count=0;

    cin >> word;

    len = word.length();
    for(int i=0; i<len; i++, count++){
        if(word[i] == '='){
            if(word[i-2] == 'd' && word[i-1] == 'z')
                count-=2;    
            else if(word[i-1] == 'c' || word[i-1] == 's' || word[i-1] == 'z')
                count--;
        }
        if(word[i] == '-')
            if(word[i-1] == 'c' || word[i-1] == 'd')
                count--;
        if(word[i] == 'j')
            if(word[i-1] == 'l' || word[i-1] == 'n')
                count--;
    }

    cout << count << endl;
    return 0;
}