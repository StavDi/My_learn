#pragma once
template <class T>
void boobleSort(T* a, int n, bool (*bolshe)(T&, T&)) {
    int flag = 1;
    T t;
    while (flag) {
        flag = 0;
        for (int i = 0; i < n - 1; i++) {
            if (bolshe(a[i + 1], a[i])) {
                t = a[i]; a[i] = a[i + 1]; a[i + 1] = t;
                flag = 1;
            }
        }
    }
}