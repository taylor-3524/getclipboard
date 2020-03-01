#ifndef GETCLIPBOARD_H
#define GETCLIPBOARD_H
#pragma once
#include "mythread.h"
#include <QtWidgets/QMainWindow>
#include "ui_getclipboard.h"

class getclipboard : public QMainWindow
{
	Q_OBJECT
public:

	explicit getclipboard(QWidget *parent = 0);
	~getclipboard();

	//ֹͣ�̲߳ۺ���
	void stopThread();

public slots:
	void receiveMsgFromThread(QString, int);   //�������̵߳���Ϣ
	void start_btn_Clicked();
	void clear_btn_Clicked();
	void copy_btn_Clicked();
	void stop_btn_Clicked();	//ֹͣ�̲߳ۺ���


private:
	Ui::getclipboardClass ui;
	MyThread *thread;

};

#endif // !GETCLIPBOARD_H
