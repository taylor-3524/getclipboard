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
	void flagStatus();	//�����߳��е��õĺ��������������߳���while(flag)����ѭ��

protected:
	//QThread���麯��
	//�̴߳�����
	//����ֱ�ӵ��ã�ͨ��start()��ӵ���
	void run();

signals:
	//�����̷߳���Ϣ
	void sendMsgToMain(QString,int);



};
#endif // MYTHREAD_H