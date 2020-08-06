#include "node.h"
node::node(int xx, int yy) : x(xx), y(yy) {
    cout << "constructing one node.." << endl;
}

node::~node() { cout << "deleting one node.." << endl; }
