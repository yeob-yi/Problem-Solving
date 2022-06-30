#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node {
    char data;
    struct node* next;
}node;

typedef struct linked_list {
    node* head;
}linkedList;

linkedList* makeList(){
    linkedList* new = (linkedList*)malloc(sizeof(linkedList));
    new->head = NULL;

    return new;
}

int insert(Linkedlist* nlist, int cursor, int data);

int main(void){
    // linkedlist 생성
    linkedList* list = makeList;

    int cursor;
    char str[600000];
    scanf("%s", str);
    for(cursor=0; cursor<strlen(str); cursor++){
        insert(list, cursor, str[cursor]);
    }

    int num;
    char cmd[2];
    scanf("%d", &num);

    for(int i=0; i<num; i++){
        scanf("%s", cmd);
        if(strncmp(cmd, "L",1)==0){
            if(cursor!=0){
                cursor--;
            }
        }else if(strncmp(cmd, "D", 1)==0){
            if(cursor!=strlen(str)){
                cursor++;
            }
        }else if(strncmp(cmd, "B", 1)==0){
            if(cursor!=0){
                  
            }
        }else if(strncmp(cmd, "P", 1)==0){
            scanf("%s", add);
            for(int j=strlen(str); j>=cursor; j--){
                str[j+1] = str[j];
            }
            strncpy(&str[cursor], add, 1);
            cursor++;
        }
    }

}

int insert(linkedList* nlist, int cursor, int data){
    node* new = (node*)malloc(sizeof(node));
    new->data = data;
    new->next = NULL;

    if(nlist->head == NULL){
        nlist->head = new;
    }else{
        Node* cur = nlist->head;
        for(int i=0; i<=cursor; i++){
            if(i==cursor){
                cur->next = new;
                
            }else{
                cur = cur->next;
            }
        }
    }
    return cursor+1;
}

int delete(linkedList* nlist, int cursor, int data){
    Node* cur = nlist->head;
    Node* prev;
    for(int i=0; i<=cursor; i++){
        if(i==cursor-1){
            cur->next = 
        }
    }
}


/*
int main(void){
    char str[600000];
    int num;
    char cmd[2];
    int cursor=0;
    char add[2];

    scanf("%s", str);
    cursor = strlen(str);

    scanf("%d", &num);

    for(int i=0; i<num; i++){
        scanf("%s", cmd);
        if(strncmp(cmd, "L",1)==0){
            if(cursor!=0){
                cursor--;
            }
        }else if(strncmp(cmd, "D", 1)==0){
            if(cursor!=strlen(str)){
                cursor++;
            }
        }else if(strncmp(cmd, "B", 1)==0){
            if(cursor!=0){
                for(int j=cursor; j<=strlen(str); j++){
                    str[j-1] = str[j];
                }    
            }
        }else if(strncmp(cmd, "P", 1)==0){
            scanf("%s", add);
            for(int j=strlen(str); j>=cursor; j--){
                str[j+1] = str[j];
            }
            strncpy(&str[cursor], add, 1);
            cursor++;
        }
    }

    printf("%s", str);

    return 0;
}
*/