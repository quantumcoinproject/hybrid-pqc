#include "hybrid-common.h"

const int MIN_MSG_LEN = 1;
const int MAX_MSG_LEN = 64;
const int LEN_BYTES = 2;

const int SEED_LENGTH_ED25519 = 32;
const int CRYPTO_ED25519_PUBLICKEY_BYTES = 32;
const int CRYPTO_ED25519_SECRETKEY_BYTES = 64;
const int CRYPTO_ED25519_SIGNATURE_BYTES = 64;
const int CRYPTO_ED25519_SECRETKEY_WITHOUT_PUBLIC_KEY_BYTES = 32;

const int SEED_LENGTH_DILITHIUM = 32;
const int CRYPTO_DILITHIUM_PUBLICKEY_BYTES = 1312;
const int CRYPTO_DILITHIUM_SECRETKEY_BYTES = 2560;
const int CRYPTO_DILITHIUM_SIGNATURE_BYTES = 2420;

const int SEED_LENGTH_SPHINCS = 96;
const int CRYPTO_SPHINCS_PUBLICKEY_BYTES = 64;
const int CRYPTO_SPHINCS_SECRETKEY_BYTES = 128;
const int CRYPTO_SPHINCS_SIGNATURE_BYTES = 49856;

const int SEED_LENGTH_FALCON = 48;
const int CRYPTO_FALCON_PUBLICKEY_BYTES = 897;
const int CRYPTO_FALCON_SECRETKEY_BYTES = 1281;
const int CRYPTO_FALCON_SECRETKEY_WITH_PUBLIC_KEY_BYTES = 1281 + 897;
const int CRYPTO_FALCON_NONCE_LENGTH = 40;
const int CRYPTO_FALCON_MIN_SIGNATURE_BYTES = 600 + 40 + 2; //Signature + Nonce + 2 for size
const int CRYPTO_FALCON_MAX_SIGNATURE_BYTES = 690 + 40 + 2; //Signature + Nonce + 2 for size

const int NONCE_BYTES = 40;
const int HASH_LENGTH = 64;