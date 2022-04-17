#include <iostream>
using namespace std;

class person{
public:
    int weight;
    int height;
    int rank;
};

int main(){
    int num;
    int weight, height;
    int count;

    cin >> num;
    person lists[num];
    for(int i=0; i<num; i++){
        cin >> lists[i].weight;
        cin >> lists[i].height;
    }

    for(int i=0; i<num; i++){
        count = 1;
        for(int j=0; j<num; j++){
            if(j!=i){
                if(lists[j].weight>lists[i].weight && lists[j].height>lists[i].height)
                    count++;
            }
        }
        lists[i].rank = count;
    }

    for(int i=0; i<num; i++)
        cout << lists[i].rank << " ";

    return 0;
}