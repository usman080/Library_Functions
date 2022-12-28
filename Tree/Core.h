//
// Created by Onkar Ingale on 28-12-2022.
//

#ifndef LIBRARY_FUNCTION_CORE_TREE_H
#define LIBRARY_FUNCTION_CORE_TREE_H
#include "../Stack/Stack.h"
#include "../Exception/LibraryFunctionException.h"
#include <stdexcept>

template<class NodeType,class ReturnType>
class BSTiterator{
public:
    Stack<NodeType> stack;



    explicit BSTiterator(NodeType node)
    {
        fillstack(node);
    }

    void fillstack(NodeType node)
    {
        //Pushing all Left
        while (node != nullptr)
        {
            stack.push(node);
            node = node->left;
        }
    }

    ReturnType next()
    {

        NodeType temp =  stack.top();

        stack.pop();
        if (temp->right != nullptr)
        {
            fillstack(temp->right);
        }
        return temp->data;
    }

    bool hasNext()
    {
        if (stack.isEmpty())
        {
            return false;
        }
        return true;
    }


};

template<class T>
class BST
{
public:
    bool (*cmp)(T &, T &);
    class BSTNode
    {
    public:
        T data;
        BSTNode *left;
        BSTNode *right;
        BSTNode(T data, BSTNode *left,
                BSTNode *right)
        {
            this->data=data;
            this->left=left;
            this->right=right;
        }
    };

    BST(bool (*fun)(T &, T &)){
        cmp=fun;
    }




    BSTiterator<BST<T>::BSTNode*,T> getIterator()
    {

        BSTiterator<BST<T>::BSTNode*,T> bsTiterator(root);

        return bsTiterator;
    }


//    BSTiterator bstiterator;
    BSTNode *root = nullptr;

    void insert(T data)
    {
         insert(&root,data);
    }

     void insert(BSTNode **node, T &data)
    {
        if(*node== nullptr)
        {
            (*node) = (BSTNode*)malloc(sizeof(BSTNode));
            (*node)->data=data;
            (*node)->right= nullptr;
            (*node)->left= nullptr;
            return ;
        } else
        {
            BSTNode *temp;
            //cmp
            if(cmp(data,(*node)->data))
            {
                insert(&((*node)->left),data);
            } else{
                insert(&((*node)->right),data);
            }
            return ;
        }

    }

    void search()
    {

    }

    void remove()
    {

    }



    void traverse(BSTNode *node)
    {
        if(node == nullptr)
            return;

        traverse(node->left);
        //Data

        traverse(node->right);
    }
};
#endif //LIBRARY_FUNCTION_CORE_TREE_H
