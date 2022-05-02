#include <iostream>
#include <string>
using namespace std;

class my_queue {
    int q[10000];
    int front, rear;
public:
    my_queue();
    void insert_q(int x);
    int delete_q();
    bool queue_full();
    bool queue_empty();
};

int main(){
    my_queue a;
    int count;
    string cmd;
    int input;

    cin >> count;
    for(int i=0; i<count; i++){
        cin >> cmd;
        switch (cmd){
            case "push":

        }
    }
}

my_queue:: my_queue()
{
    front = 0;
    rear = 0;
}
void my_queue:: insert_q(int x)
{
    if(!queue_full()){
        q[rear] = x;
        rear = (rear+1)%10000;
    }
}
int my_queue:: delete_q(){
    int tmp;
    if(!queue_empty()){
        tmp = q[front];
        front = (front+1)%10000;
        return (tmp);
    }
}
bool my_queue:: queue_full(){
    if((rear+1)%10000 == front) return true;
    else return false;
}
bool my_queue:: queue_empty(){
    if(rear==front) return true;
    else return false;
}