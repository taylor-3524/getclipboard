#include "mythread.h"
#include <QClipboard>
//�����ж��߳��˳��ı�־
int myFlag;

extern QClipboard *board;

MyThread::MyThread(QObject *parent) : QThread(parent)
{
	
}

void MyThread::run()
{
	myFlag = 1;
	//���Ӽ�����
	int linkNum = 1;
	QString oldStr;
	while (myFlag)
	{
		sleep(1);

		//��ȡ���а岢�����ַ���
	    
	    QString str = board->text();
		int endAddr = str.indexOf("&");
		QString link = str.mid(0, endAddr);
		

		//�������������Ƿ��б仯
		
		if (oldStr != link) {
			//������Ϣ�����߳�
			emit sendMsgToMain(link,linkNum);

			linkNum++;
			oldStr = link;
		}


	}


}

void MyThread::flagStatus()
{
	myFlag = 0;
}

