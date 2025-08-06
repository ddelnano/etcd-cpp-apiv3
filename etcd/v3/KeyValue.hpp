#ifndef __V3_ETCDV3KEYVALUE_HPP__
#define __V3_ETCDV3KEYVALUE_HPP__

#include "kv.pb.h"

namespace etcdv3 {
class KeyValue {
 public:
  KeyValue();
  mvccpb::KeyValue kvs;
  void set_ttl(int ttl);
  int get_ttl() const;

 private:
  int ttl;
};
}  // namespace etcdv3
#endif
