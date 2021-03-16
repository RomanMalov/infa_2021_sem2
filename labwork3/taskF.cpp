//
// Created by rmnmlv on 02.03.2021.
//
#include <iostream>;

int *my_slightly_dumb_reallocation(int *source, unsigned int n_old, unsigned int n_new) {
    if (source != NULL) {
        if (n_new != 0) {
            int *new_source = new int[n_new];
            for (unsigned int i = 0; i < n_new; i++) {
                new_source[i] = 0;
            };
            unsigned int n = (n_old > n_new) ? n_new : n_old;
            for (unsigned int i = 0; i < n; i++) {
                new_source[i] = source[i];

            }
            delete[] source;
            return new_source;
        } else {
            delete[] source;
            return NULL;
        }
    } else {
        if (n_new != 0) {
            int *new_source = new int[n_new];
            for (unsigned int i = 0; i < n_new; i++) {
                new_source[i] = 0;
            }
            return new_source;
        }

    }
    return nullptr;
}
