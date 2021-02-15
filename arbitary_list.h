#include "node.h"

class arbitary_list {
    private:
        node *front;
        node *temp;

    public:
        arbitary_list();
        void add(int value, int position);
        void remove(int position);
        void peek();
};
