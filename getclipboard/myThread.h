#pragma once
#ifndef MYTHREAD_H
#define MYTHREAD_H
#include<QThread>

//myThread.h 
class MyThread : public QThread
{
	Q_OBJECT
public:
	explicit MyThread(QObject *parent = 0);
	void flagStatus();	//在主线程中调用的函数，负责打断子线程里while(flag)的死循环

protected:
	//QThread的虚函数
	//线程处理函数
	//不能直接调用，通过start()间接调用
	void run();

signals:
	//给主线程发消息
	void sendMsgToMain(QString,int);



};
#endif // MYTHREAD_H