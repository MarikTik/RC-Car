#ifndef APPLICATION_HPP_
#define APPLICATION_HPP_

template<typename AppInstance>
struct Application{
     void run(){
          static_cast<AppInstance*>(this)->run();
     }
};

#endif