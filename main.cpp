
#include <iostream>

#define RESET   "\033[0m"
#define GREEN   "\033[32m"

void showPointerOfAnyType(void* any_type) {
    std::cout << GREEN << any_type << RESET << std::endl;
}

struct Node {
    int data;
    Node* next;
};

void insert(Node* root,Node* node) {
    Node* temp = root;
    
    if (temp->next == NULL) 
    {
        root->next = node;
    }
    else 
    {
        while (temp->next != NULL) 
        {
            temp = temp->next;
        }
        temp->next = node;
    }
}

void printAllNodes(Node* root) 
{
    Node* temp = root;
    while (temp->next != NULL) 
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
    std::cout << temp->data << std::endl;
}

typedef struct STRUCT
{
    int a;
    int b;
};

union UNION {
    int x;
    char y;
    long z;
};

int main()
{
    Node* root = new Node{ 0,NULL };
    Node* node1 = new Node{ 1,NULL };
    Node* node2 = new Node{ 2,NULL };
    Node* node3 = new Node{ 3 , NULL};
    
    insert(root,node1);
    insert(root,node2);
    insert(root,node3);

    printAllNodes(root);




    /*
    STRUCT* mystr = new STRUCT{20,34};
    UNION* myunion = new UNION{};
    myunion->x = 50;
    myunion->y = 'A';
    myunion->z = 500000U;
   
    std::cout << "STRUCT" << std::endl;
    showPointerOfAnyType(mystr);
    showPointerOfAnyType(&mystr->a);
    showPointerOfAnyType(&mystr->b);
    std::cout << "UNION" << std::endl;
    showPointerOfAnyType(myunion);
    showPointerOfAnyType(&myunion->x);
    showPointerOfAnyType(&myunion->y);
    showPointerOfAnyType(&myunion->z);
    std::cout << myunion->x << std::endl;
    std::cout << myunion->y << std::endl;
    std::cout << myunion->z << std::endl;
    */
    return 0;
}

