// #include <iostream>
// using namespace std;

// int main(){
//     int count;
//     int temp;
//     bool isSorted;

//     cin >> count;
//     int *lists = new int[count]();

//     for(int i=0; i<count; i++){
//         cin >> lists[i];
//     }

//     while(true){
//         isSorted = true;
//         for(int i=0; i<count-1; i++){
//             if(lists[i] >= lists[i+1]){
//                 isSorted = false;
//                 temp = lists[i+1];
//                 lists[i+1] = lists[i];
//                 lists[i] = temp;
//             }
//         }
//         if(isSorted == true)
//             break;
//     }

//     for(int i=0; i<count; i++){
//         cout << lists[i] << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int count;
//     int temp;
//     int min=1000000, max=-1000000;
//     int lists[2000001] = {0,};

//     cin >> count;
//     for(int i=0; i<count; i++){
//         cin >> temp;
//         if(min>temp) min = temp;
//         if(max<temp) max = temp;
//         lists[temp+1000000] = 1;
//     }

//     for(int i=min; i<=max; i++)
//         if(lists[i+1000000] == 1)
//             cout << i << "\n";

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int count;
    cin >> count;
    int *lists = new int[count]();

    for(int i=0; i<count; i++)
        cout << lists[i] << endl;

    return 0;
}