#ifndef LIBPEER_DATA_BUFFER
#define LIBPEER_DATA_BUFFER

namespace libpeer {
namespace data {

class buffer {
public:
  buffer();

  void write();
  unsigned char* read();

protected:
  unsigned char* pool;
  size_t length;
};

} //namespace data
} //namespace libpeer


#endif //LIBPEER_DATA_BUFFER
