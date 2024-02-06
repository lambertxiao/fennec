#ifndef FENNEC_EVENTLOOP_H_
#define FENNEC_EVENTLOOP_H_

namespace fennec {

class EventLoop {
public:
  void runInLoop();
private:
  void assertInLoopThread();
};
}

#endif

