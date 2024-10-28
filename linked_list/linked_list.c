#include "linked_list.h"
#include "stddef.h"
#include "stdlib.h"
#include "stdio.h"

struct ListNode* mergeSort(struct ListNode* head);
static void print_list(struct ListNode* head);

struct ListNode* new_node(int val){
    struct ListNode* node = (struct ListNode*) malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

void insert(struct ListNode** root, int val){
    struct ListNode* node = new_node(val);
    node->next = (*root);
    (*root) = node;
}

void swap(struct ListNode* a, struct ListNode* b){
    struct ListNode* temp = a;
    a = b;
    b = temp;
}

void link_list_main()
{
    struct ListNode* root = NULL;
    insert(&root, 4);
    insert(&root, 2);
    insert(&root, 1);
    insert(&root, 3);

    print_list(root);
    root = mergeSort(root);
    print_list(root);
}

static void print_list(struct ListNode* head){
    printf("\nList vals: ");
    while(head){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}


struct ListNode* split(struct ListNode* head) {
    if(head != NULL){
        struct ListNode* slow = head;
        struct ListNode* fast = head;

        while(fast && fast->next){
            fast = fast->next->next;
            if(fast != NULL)
                slow = slow->next;
        }
        //slow -> mid val
        struct ListNode* temp = slow->next;
        slow->next = NULL;
        return temp;
    }
    return head;
}

struct ListNode* merge(struct ListNode* head, struct ListNode* postMid){
    if(head == NULL) return postMid;
    if(postMid == NULL) return head;

    if(head->val < postMid->val){
        head->next = merge(head->next, postMid);
        return head;
    }
    else{
        postMid->next = merge(head, postMid->next);
        return postMid;
    }
}

struct ListNode* mergeSort(struct ListNode* head){
    if(head == NULL || head->next == NULL) return head;

    struct ListNode* current = head;
    struct ListNode* postMid = head;
    postMid = split(current);

    current = mergeSort(current);
    postMid = mergeSort(postMid);

    return merge(current, postMid);
}
