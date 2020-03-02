#include "getclipboard.h"
#include <QClipboard>
#pragma execution_character_set("utf-8")		//��ֹ����
getclipboard::getclipboard(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//�����߳�
	thread = new MyThread(this);

	//�رս���ʱ��ɱ���߳�
	connect(this, &getclipboard::destroyed, this, &getclipboard::stopThread);

	//��ʼ�߳�
	connect(ui.start_btn, SIGNAL(clicked()), this, SLOT(start_btn_Clicked()));
	
	//��ť�����߳�
	connect(ui.stop_btn, SIGNAL(clicked), this, SLOT(stop_btn_Clicked()));

	//�������̷߳���������
	connect(thread, &MyThread::sendMsgToMain, this, &getclipboard::receiveMsgFromThread);




	connect(ui.start_btn, SIGNAL(clicked()), this, SLOT(start_btn_Clicked()));
	connect(ui.clear_btn, SIGNAL(clicked()), this, SLOT(clear_btn_Clicked()));
	connect(ui.copy_btn, SIGNAL(clicked()), this, SLOT(copy_btn_Clicked()));

}

//�������а�ָ��
QClipboard *board = QApplication::clipboard();

getclipboard::~getclipboard() {

}

void getclipboard::stopThread() {
	//ֹͣ�߳�
	thread->quit();
	//�ȴ��̴߳��������ϵ�����
	//���̻߳�δ������ʱ������
	thread->wait();
}

void getclipboard::stop_btn_Clicked() {
	//ֹͣ�߳�
	thread->quit();
	//����߳��е���ѭ��
	thread->flagStatus();
}

void getclipboard::start_btn_Clicked() {
	//�����̣߳���������
	thread->start();
}

//�������߳���Ϣ
void getclipboard::receiveMsgFromThread(QString link, int linkNum) {
	ui.clipboard_text->append(link);
	QString LN = QString::number(linkNum);
	ui.latest_label->setText(LN);

}

//����ı����������
void getclipboard::clear_btn_Clicked() {
	ui.clipboard_text->setText("");
}

//���ı�������ݸ��Ƶ�������
void getclipboard::copy_btn_Clicked() {
	QString link = ui.clipboard_text->toPlainText();
	QClipboard *board = QApplication::clipboard();
	board->setText(link);
	ui.clipboard_text->append("�Ѹ��Ƶ�������");
}

