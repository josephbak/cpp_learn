// file: a.cpp
int f() {
    int x = 5;
    int& r = x;   // alias, never escapes
    r = 10;
    return x;
}
