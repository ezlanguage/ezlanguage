//
// Created by Fatima AMZIL about Array class in C++
//
#ifndef PROG_TEST_VECTOR_ARRAY_H
#define PROG_TEST_VECTOR_ARRAY_H

#include <iostream>
#include <numeric>
#include<algorithm>
#include<string.h>

using namespace std;

template<class T>
class Array {
public:
    class iterator {
    private:
        T *ptr;
    public:
        iterator(T *ptr) : ptr(ptr) {}

        iterator operator++() {
            iterator i(ptr);
            ++ptr;
            return
                    i;
        }

        bool operator!=(const iterator
                        &other) {
            return ptr != other.ptr;

        }

        const T &operator*() const { return *ptr; }

    };

private:
    int m_size;
    T *m_array;
public:
    Array(int s) {
        m_size = s;
        m_array = new T
        [m_size];
    }

    iterator begin() const {
        return iterator(m_array);
    }

    iterator end() const {
        return iterator(m_array + m_size);
    }

    T &operator[](const int index) { return m_array[index]; }

    void fill(T v) {
        for (int i = 0; i < m_size; ++i)
            m_array[i] = v;
    }

    T const &max() {
        return *std::max_element(&m_array[0], &m_array[10]);
    }

    template<class C>
    T const &max(C attribut) {
        return *std::max_element(&m_array[0].attribut, &m_array[10].attribut);
    }

    T const &min() {
        return *std::min_element(&m_array[0], &m_array[10]);
    }

    template<class C>
    T const &min(C attribut) {
        return *std::min_element(&m_array[0].attribut, &m_array[10].attribut);
    }

    T sum() {
        return accumulate(&m_array[0], &m_array[m_size], 0);
    }

    template<class C>
    T sum(C attribut) {
        return accumulate(&m_array[0], &m_array[m_size], 0);
    }

    void sort() {
        std::sort(&m_array[0], &m_array[m_size]);
    }

    template<class C>
    void sort(C attribut) {
        std::sort(&m_array[0].attribut, &m_array[m_size].attribut);
    }

    void randomize(T val1, T val2) {
        srand((unsigned int) time(NULL));
        for (int i = 0; i < m_size; ++i)
            m_array[i] = rand() % (val2 - val1) + val1;
    }

    template<class C>
    void randomize(C attribut, T val1, T val2) {
        srand((unsigned int) time(NULL));
        for (int i = 0; i < m_size; ++i)
            m_array[i].attribut = rand() % (val2 - val1) + val1;
    }

    void print() {
        for (int i = 0; i < m_size; ++i)
            cout << m_array[i] << " \n";

        cout << "\n";
    }

    int size() {
        return m_size;
    }

    int count(T v) {
        int nbr = 0;
        for (int i = 0; i < m_size; i++) {
            if (m_array[i] == v) {
                nbr++;
            }
        }
        return nbr;
    }

    template<class C>
    int count(C attribut, T v) {
        int nbr = 0;
        for (int i = 0; i < m_size; i++) {
            if (m_array[i].attribut == v) {
                nbr++;
            }
        }
        return nbr;
    }

    void remove(T v) {
        int new_size = m_size - count(v);
        T *tmp = new T[new_size];

        for (int i = 0, j = 0; i < m_size; i++) {
            if (m_array[i] != v) {
                tmp[j] = m_array[i];
                j++;
            }
        }
        m_array = new T[new_size];
        m_size = new_size;
        m_array = tmp;
    }

    template<class C>
    void remove(C attribut, T v) {
        int new_size = m_size - count(v);
        T *tmp = new T[new_size];

        for (int i = 0, j = 0; i < m_size; i++) {
            if (m_array[i].attribut != v) {
                tmp[j] = m_array[i];
                j++;
            }
        }
        m_array = new T[new_size];
        m_size = new_size;
        m_array = tmp;
    }

    void clear() {
        memset(m_array, 0, m_size * sizeof(*m_array));
        m_array = new T[0];
        m_size = 0;
    }

    bool is_empty() {
        return (m_size == 0) ? true : false;
    }
};


#endif //PROG_TEST_VECTOR_ARRAY_H
