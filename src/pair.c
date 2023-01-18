#include<stdio.h>
#include<stdlib.h>
#include "pair.h"


struct pair * consPair ( int l, int c ){
    struct pair *E = (struct pair *) calloc(1,sizeof(struct pair));
    E->l = l;
    E->c = c;
    return E;
}

struct pair * cpyPair ( struct pair * P ){
    struct pair *E = (struct pair *) calloc(1,sizeof(struct pair));
    E->l = P->l;
    E->c = P->c;l
    return E;
}

void freePair ( struct pair * P ){
    free(P);
    P = NULL;
}
//清空内存
int pair2ind ( struct pair * p, struct matrix * M ){
    return (p->l) * (M->m) + (p->c);
}
//输出第几个数
struct pair * ind2pair ( int k, struct matrix * M ){
    struct pair *P = (struct pair *) calloc(1,sizeof(struct pair));
    P->l = k / M->m;
    P->c = k % M->m;
    return P;
}
//输出数对
