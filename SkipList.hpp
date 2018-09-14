#ifndef _SKIPLIST_H_
#define _SKIPLIST_H_
 
#include <iostream>
#include <sstream>

template<class K,class V,int MAXLEVEL>
class SkipListNode 
{
public:
    SkipListNode()
    {
        for (int i = 1; i <= MAXLEVEL; i++) 
        {
            m_next[i] = NULL;
        }
    }

    SkipListNode(K search_key, V value)
        : m_key(search_key), m_value(value)
    {
        for (int i = 1; i <= MAXLEVEL; i++) 
        {
            m_next[i] = NULL;
        }
    };
    
    SkipListNode(K search_key)
        : m_key(search_key)
    {
        for (int i = 1; i <= MAXLEVEL; i++) 
        {
            m_next[i] = NULL;
        }
    };
    
    virtual ~SkipListNode() 
    {}

    K m_key;
    V const m_value;
    SkipListNode<K, V, MAXLEVEL>* m_next[MAXLEVEL + 1];
};

template<class K, class V, int MAXLEVEL = 4>
class SkipList
{
public:
    typedef K KeyType;
    typedef V ValueType;
    typedef SkipListNode<K,V,MAXLEVEL> NodeType;


};

#endif
