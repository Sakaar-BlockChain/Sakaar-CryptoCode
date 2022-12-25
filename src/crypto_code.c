#include "crypto_code.h"

struct crypto_code get_crypto_code(unsigned code) {
    switch (code) {
        case CRYPTO_AES:
            return aes_code;
    }
    exit(0);
}