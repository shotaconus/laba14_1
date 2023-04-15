#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include "vector.h"

void test_popBack_notEmptyVector() {
    Vector v = createVector(0);
    pushBack(&v, 10);

    assert(v.size == 1);
    popBack(&v);
    assert(v.size == 0);
    assert(v.capacity == 1);
}

void test() {
    void test_popBack_notEmptyVector();
}
int main() {
    test();

    return 0;

}
