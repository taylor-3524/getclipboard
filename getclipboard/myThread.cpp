#include "mythread.h"
#include <QClipboard>
//用来判断线程退出的标志
int myFlag;

extern QClipboard *board;

MyThread::MyThread(QObject *parent) : QThread(parent)
{
	
}

void MyThread::run()
{
	myFlag = 1;
	//链接计数器
	int linkNum = 1;
	QString oldStr;
	while (myFlag)
	{
		sleep(1);

		//获取剪切板并处理字符串
	    
	    QString str = board->text();
		int endAddr = str.indexOf("&");
		QString link = str.mid(0, endAddr);
		

		//检查剪贴板内容是否有变化
		
		if (oldStr != link) {
			//发送消息给主线程
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

