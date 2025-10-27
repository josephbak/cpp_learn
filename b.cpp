// file: b.cpp
int g() {
    int x = 5;
    int& r = x;
    int* p = &r;   // address escape: forces materialization semantics
    *p = 10;
    return r;
}
