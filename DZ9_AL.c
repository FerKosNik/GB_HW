#include <stdio.h>
#include <stdlib.h>
#define SZ 10


typedef struct {
    int pr;
    int dat;
} Node;

Node* arr[SZ];
int head;
int tail;
int items;

void init() {
    for (int i = 0; i < SZ; i++) {
        arr[i] = NULL;
    }
    head = 0;
    tail = 0;
    items = 0;
}

void insert(int pr, int dat) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->dat = dat;
    node->pr = pr;

    if (items == SZ) {
        printf("%s \n", "Queue if full!");
        return;
    }
    else {
        int idx = tail++ % SZ;
        arr[idx] = node;
        ++items;
    }
}

Node* rem() {
    int flag = 0;
    Node* tmp;
    for  (int i = 1; i < tail-1; ++i)
    {
        int idx = i % SZ;
        if ((arr[flag]->pr > arr[i]->pr)) {
            flag = i;
        }
    }
    tmp = arr[flag];
    arr[flag] = NULL;
    for (int i = flag; i <= tail; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[tail--] = NULL;
    --items;
    return tmp;
}

void printQueue() {
    printf("[ ");
    for (int i = 0; i < SZ; ++i) {
        if (arr[i] == NULL)
            printf("[*, *] ");
        else
            printf("[%d, %d] ", arr[i]->pr, arr[i]->dat);
    }
    printf(" ]\n");
}

void BinDig(int n)
{
    if (n >= 2)
        BinDig(n / 2);
    printf("%d", n % 2);
}

int main(const int argc, const char** argv) {
    init();
    insert(1, 11);
    insert(3, 22);
    insert(4, 33);
    insert(2, 44);
    insert(3, 55);
    insert(4, 66);
    insert(5, 77);
    insert(1, 88);
    insert(2, 99);
    insert(6, 100);
    printQueue();
    for (int i = 0; i < 7; i++) {
        Node* n = rem();
        printf("pr=%d, dat=%d \n", n->pr, n->dat);
    }
    printQueue();
    insert(2, 66);
    insert(3, 52);
    insert(4, 12);
    insert(5, 99);
    insert(1, 44);
    insert(6, 99);
    printQueue();
    for (int i = 0; i < 3; i++) {
        Node* n = rem();
        printf("pr=%d, dat=%d \n", n->pr, n->dat);
    };
    printQueue();

    // ==================
    int a = 0;
    printf(" Input some number \n");
    scanf("%d", &a);
    BinDig(a);
    // ==================
    return 0;
}
