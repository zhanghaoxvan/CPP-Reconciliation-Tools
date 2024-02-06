// Project:   C++ Reconciliation Tools
// File:      pointer.h
// Copyright: TinySoftware, Inc.
// Author:    3592114582@qq.com
#pragma once
#ifndef _POINTER_H_
#define _POINTER_H_
#ifdef __cplusplus
template <class type> class pointer {
public:
    pointer() {
        p = nullptr;
    }
    pointer(type *p) {
        this->p = p;
    }
    pointer(pointer &p) {
        this->p = p.p;
    }
    ~pointer() {
        p = nullptr;
    }
    pointer &operator=(pointer right) {
        this->p = right.p;
        return *this;
    }
    pointer &operator=(type *right) {
        this->p = right;
        return *this;
    }
    type *operator->() const throw() {
        return p;
    }
    type operator*() {
        return *p;
    }
    operator type *() {
        return *p;
    }
private:
    type *p;
};
#else // __cplusplus
#error This Header(C++ Tools - pointer.h) is Only Run in C++
#endif // __cplusplus
#endif // _POINTER_H_