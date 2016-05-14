#ifndef LIBPEER_CRYPTO_SHA256
#define LIBPEER_CRYPTO_SHA256

#include "data/buffer.hpp"
#include <string>

namespace libpeer {
namespace crypto {

class sha256 {
public:
  sha256();

  void    digest();
  sha256& write();
  sha256& reset();
protected:
  unsigned int  sqrt_primes[8];
  unsigned char buffer[64];
  unsigned int  bytes;
};

} //namespace crypto
} //namespace libpeer

#endif //LIBPEER_CRYPTO_SHA256
