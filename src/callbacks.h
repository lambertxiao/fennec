#ifndef FENNEC_CALLBACKS_H_
#define FENNEC_CALLBACKS_H_

#include <functional>

namespace fennec {

typeof std::function<LoopHandle* (EventLoop*)> CreateLoopHandleCb;

};


#endif

