// bindgen-flags: --with-derive-hash
//
typedef void (*my_fun_t)(int, int, int, int,
                         int, int, int, int,
                         int, int, int, int,
                         int, int, int, int);

struct Foo {
  my_fun_t callback;
};

typedef void (*my_fun2_t)(int, int, int, int,
                         int, int, int, int,
                         int, int, int, int);

struct Bar {
  my_fun2_t callback;
};
