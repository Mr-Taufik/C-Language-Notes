//使用结构体指针数组实现链表
//虽然链表通常使用指针连接节点，但结构体指针数组也可以用来模拟简单的链表结构


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    int n;
    printf("请输入链表的长度: ");
    scanf("%d", &n);

    // 创建结构体指针数组
    struct Node **nodes = malloc(n * sizeof(struct Node*));
    if(nodes == NULL) {
        printf("内存分配失败！\n");
        return 1;
    }

    // 初始化节点
    for(int i = 0; i < n; i++) {
        nodes[i] = malloc(sizeof(struct Node));
        if(nodes[i] == NULL) {
            printf("内存分配失败！\n");
            return 1;
        }
        printf("请输入第 %d 个节点的数据: ", i+1);
        scanf("%d", &nodes[i]->data);
        nodes[i]->next = (i < n-1) ? nodes[i+1] : NULL;
    }

    // 遍历链表
    printf("链表内容:\n");
    struct Node *current = nodes[0];
    while(current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // 释放内存
    for(int i = 0; i < n; i++) {
        free(nodes[i]);
    }
    free(nodes);

    return 0;
}

节点创建：通过结构体指针数组nodes创建多个节点，每个节点包含数据和指向下一个节点的指针。
链表连接：将每个节点的next指针指向数组中的下一个节点，最后一个节点的next为NULL。
遍历链表：从第一个节点开始，依次访问每个节点，直到NULL。
