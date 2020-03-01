#include "mythread.h"
#include <QClipboard>
//用来判断线程退出的标志
int myFlag;

MyThread::MyThread(QObject *parent) : QThread(parent)
{

}

void MyThread::run()
{
	//链接计数器
	int linkNum = 0;

	while (myFlag)
	{
		sleep(1);

		//获取剪切板并处理字符串
	    QClipboard *board = QApplication::clipboard();
	    QString str = board->text();
		int endAddr = str.indexOf("&");
		QString link = str.mid(0, endAddr);

		linkNum++;
		//发送消息给主线程
		emit sendMsgToMain(link,linkNum);

	}


}

void MyThread::flagStatus()
{
	myFlag = 0;
}
