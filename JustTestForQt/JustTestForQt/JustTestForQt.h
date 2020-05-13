#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_JustTestForQt.h"
#include<QTimer>
#include<string>
#include <QTextCodec>
#include<QMessageBox>
#include<QProcess>
#include <random>
#include <QSettings>
using namespace std;
class JustTestForQt : public QMainWindow
{
    Q_OBJECT

public:
    JustTestForQt(QWidget *parent = Q_NULLPTR);

private:
    Ui::JustTestForQtClass ui;
	QTimer *fTimer; //定时器
	QTimer *fTimerForTiming; //定时器
	QTimer *fTimerForEye; //定时器
	QTimer *fTimerForMessBox; //定时器
	int secCnt = 0;
	int minCnt = 0;
	int hourCnt = 0;
	int Etime;
	int secCntE = 0;
	int minCntE = 0;
	int hourCntE = 0;

	int count = 0;
	//QTimer*      timer_countdown;
	//QPushButton* btn;
	//QMessageBox* msgbox;
	//QPushButton* okbtn;
	//QPushButton* cancelbtn;
	QMessageBox *box ;

	
private slots:
	void on_timer_timeout();
	void on_timer_timeoutForTiming();
	void PauseTimeFor1();
	void StopTimeFor1();
	void SetTime();
	void PauseTimeFor2();
	void StopTimeFor2();
	void SetTime2();
	void restart();
	void Init();
	void OnGenerate();
	void Clear();
	void on_TimerForEye_timeout();
	void on_TimerForMessBox_timeout();
	void reset();
	void startForEye();
	void stopForEye();
	void pause();
	void Mess();
	void openSetTime();
	void ReadIni();
	void OpenExe();
	string TranPath(string str);
	void trigerMenu(QAction*);
	void removeSubTab(int index);
};
