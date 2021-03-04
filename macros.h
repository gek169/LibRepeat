//Ducktyping for C.
//enable -Werror

#define ASSERT_SAME_TYPE(a, b)  ((&(a) == &(b)))

#define HAS_ITEM(A,B,C,D) \
static inline C* buildt_##A##B##D(){ \
  A t; \
  C q;\
  int f = ASSERT_SAME_TYPE(q, t.B);\
  C* ret = &( t . B );\
  return ret;\
}

#define FUNC_DUCKTYPE(retval, func,  testname, ...)\
typedef retval (*buildt_##testname)(__VA_ARGS__);\
static inline void buildt2_##testname(){\
    buildt_##testname b = func;\
    return;\
}

int somefunction(int x, float y){
    return 2;
}

typedef struct {
    int bruh;
    float x;
} quat;

typedef void (*func1ic)(void*, int, long);
typedef void (*func2ic)(void*, float, double);

typedef struct {
    func1ic func1;
    func2ic func2;
    void* self_data;
} purevirt;

FUNC_DUCKTYPE(float, somefunction, somefunction_is_duck, int, float);

HAS_ITEM(quat, x, float, THISTHINGHASTOBEFLOAT)
HAS_ITEM(purevirt, func1, void*,THISTHINGHASTOBEFUNC1);
