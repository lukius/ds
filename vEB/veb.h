#ifndef __VEB_H__
#define __VEB_H__

#include <vector>
#include <stddef.h>

class vEBTree
{
    int *min, *max;
    vEBTree *summary;
    std::vector<vEBTree*> children;

    size_t block_size;

    void initialize_children(size_t);
    void initialize_summary(size_t);

    size_t child_index(int) const;
    int child_value(int) const;

    void _insert(int);
    void _erase(int);
    bool _contains(int) const;

public:
    vEBTree(int);
    vEBTree(const vEBTree&) { /* TODO */ };
    ~vEBTree() { /* TODO */ };

    void insert(int);
    void erase(int);

    int get_min() const;
    int get_max() const;
    bool is_empty() const;
    bool contains(int) const;
    int successor(int) const;
    int predecessor(int) const;

    vEBTree &operator=(const vEBTree&) { /*TODO*/ };
};

#endif
