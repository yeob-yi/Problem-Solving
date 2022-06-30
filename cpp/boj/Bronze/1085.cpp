#include <iostream>
using namespace std;

int main(){
    int x, y, w, h;
    int len;

    cin >> x;
    cin >> y;
    cin >> w;
    cin >> h;

    if(x < w/2.0)
        len = x;
    else
        len = w-x;
    if(y < h/2.0 && y < len)
        len = y;
    else if(h-y < len)
        len = h-y;
    
    cout << len;
    return 0;
}