#ifndef EVENTLOOP_H
#define EVENTLOOP_H
class EventLoop{
public:
    EventLoop();
    ~EventLoop();

private:
    void abortNotInLoopThread();
    bool m_looping;  /*atomic*/
    const pid_t threadID; 
}



#endif // !EVENTLOOP_H



