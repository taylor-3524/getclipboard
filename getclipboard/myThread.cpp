#include "mythread.h"
#include <QClipboard>
//�����ж��߳��˳��ı�־
int myFlag;

MyThread::MyThread(QObject *parent) : QThread(parent)
{

}

void MyThread::run()
{
	//���Ӽ�����
	int linkNum = 0;

	while (myFlag)
	{
		sleep(1);

		//��ȡ���а岢�����ַ���
	    QClipboard *board = QApplication::clipboard();
	    QString str = board->text();
		int endAddr = str.indexOf("&");
		QString link = str.mid(0, endAddr);

		linkNum++;
		//������Ϣ�����߳�
		emit sendMsgToMain(link,linkNum);

	}


}

void MyThread::flagStatus()
{
	myFlag = 0;
}
