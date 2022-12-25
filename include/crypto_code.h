#ifndef CRYPTO_CODE_H
#define CRYPTO_CODE_H

#include "struct.h"

#define CRYPTO_AES 1

struct crypto_code{
    void (*_encode)(struct string_st *, const struct string_st *, const struct string_st *);
    void (*_decode)(struct string_st *, const struct string_st *, const struct string_st *);
};

extern struct crypto_code aes_code;
struct crypto_code get_crypto_code(unsigned code);

#endif //CRYPTO_CODE_H
