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
void test_atVector_notEmptyVector() {
    Vector v = createVector(2);

    pushBack(&v, 1);

    assert(atVector(&v, 0) == &v.data[0]);
}

void test_back_oneElementInVector() {
    Vector v = createVector(2);

    pushBack(&v, 1);

    assert(back(&v) == &v.data[0]);
}

void test_front_oneElementInVector() {
    Vector v = createVector(2);

    pushBack(&v, 1);

    assert(front(&v) == &v.data[0]);
}
void test() {
    test_popBack_notEmptyVector();

    test_atVector_notEmptyVector();

    test_back_oneElementInVector();

    test_front_oneElementInVector();
}

int main() {
    test();

    return 0;

}
