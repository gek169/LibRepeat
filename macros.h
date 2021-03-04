#define ASSERT_SAME_TYPE(a, b)  ((&(a) == &(b)))

#define HAS_ITEM(A,B,C) \
static inline C* buildt_##A##B##C(){ \
  A t; \
  C q;\
  int f = ASSERT_SAME_TYPE(q, t.B);\
  C* ret = &( t . B );\
  return ret;\
}

typedef struct {
    int bruh;
    float x;
} quat;

HAS_ITEM(quat, x, int)
