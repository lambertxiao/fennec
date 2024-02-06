#ifndef FENNEC_BASE_NONCOPYABLE_H_
#define FENNEC_BASE_NONCOPYABLE_H_

namespace fennec {
class noncopyable
{
 public:
  noncopyable(const noncopyable&) = delete;
  void operator=(const noncopyable&) = delete;

 protected:
  noncopyable() = default;
  ~noncopyable() = default;
};
};

#endif

