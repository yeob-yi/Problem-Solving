#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* prev;
    struct node* next;
} Node;

typedef struct linked_list {
    Node* head;
} LinkedList;

LinkedList* makeList();
int insert(LinkedList *plist, int data);
int removeData(LinkedList* plist, int data);
void printList(LinkedList* plist);
void freeList(LinkedList* plist);

int main(){
    LinkedList* list = makeList();

    int temp;
    Node* cur;

    // 0. 사용자에게서 숫자 4개 입력받고, 입력받은 숫자 하나 당 하나의 node에 담아 linked list 생성
    for(int i=0; i<4; i++){
        scanf("%d", &temp);
        insert(list, temp);
    }

    // 1. 생성한 linked list 출력
    printList(list);
    // Node* cur = list->head;
    // while(cur->next!=NULL){
    //     printf("%d ", cur->data);
    //     cur = cur->next;
    // }
    // printf("%d\n", cur->data);

    // 2. linked list의 가장 끝에 사용자로부터 숫자를 하나 입력받아 넣어줌
    scanf("%d", &temp);
    insert(list, temp);

    // 3. linked list에서 5번째 값 출력
    cur = list->head;
    for(int i=0; i<4; i++){
        cur = cur->next;
    }
    printf("%d", cur->data);

    // 4. 메모리를 전부 free 시킨 후 출력
    freeList(list);
    printList(list);

    return 0;
}