#include "JustTestForQt.h"
#define TOTAL_TIME 10
JustTestForQt::JustTestForQt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//tab_1
	connect(ui.pushButton_startFor1, SIGNAL(clicked()), this, SLOT(SetTime()));
	connect(ui.pushButton_pauseFor1, SIGNAL(clicked()), this, SLOT(PauseTimeFor1()));
	connect(ui.pushButton_stopFor1,  SIGNAL(clicked()), this, SLOT(StopTimeFor1()));
	//tab_2
	connect(ui.pushButton_startFor2, SIGNAL(clicked()), this, SLOT(SetTime2()));
	connect(ui.pushButton_pauseFor2, SIGNAL(clicked()), this, SLOT(PauseTimeFor2()));
	connect(ui.pushButton_stopFor2, SIGNAL(clicked()), this, SLOT(StopTimeFor2()));
	//tab_3
	connect(ui.pushButton_restart, SIGNAL(clicked()), this, SLOT(restart()));
	connect(ui.pushButton_generate, SIGNAL(clicked()), this, SLOT(OnGenerate()));
	connect(ui.pushButton_clear, SIGNAL(clicked()), this, SLOT(Clear()));
	//tab_4
	connect(ui.pushButton_reset, SIGNAL(clicked()), this, SLOT(reset()));
	connect(ui.pushButton_pause, SIGNAL(clicked()), this, SLOT(pause()));
	connect(ui.pushButton_startForEye, SIGNAL(clicked()), this, SLOT(startForEye()));
	connect(ui.pushButton_stopForEye, SIGNAL(clicked()), this, SLOT(stopForEye()));
	connect(ui.pushButton_setTime, SIGNAL(clicked()), this, SLOT(openSetTime()));
	//计时器和其他
	fTimer = new QTimer(this);
	fTimerForTiming = new QTimer(this);
	fTimerForEye = new QTimer(this);
	fTimerForMessBox = new QTimer(this);
	connect(fTimer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
	connect(fTimerForTiming, SIGNAL(timeout()), this, SLOT(on_timer_timeoutForTiming()));
	connect(fTimerForEye, SIGNAL(timeout()), this, SLOT(on_TimerForEye_timeout()));
	connect(fTimerForMessBox, SIGNAL(timeout()), this, SLOT(on_TimerForMessBox_timeout()));
	this->setWindowState((this->windowState() & ~Qt::WindowMinimized) | Qt::WindowActive);
	setWindowIcon(QIcon(QStringLiteral(":JustTestForQt/my.png")));
	//tab_5
	connect(ui.pushButton_testForIni, SIGNAL(clicked()), this, SLOT(ReadIni()));
	connect(ui.pushButton_openExe, SIGNAL(clicked()), this, SLOT(OpenExe()));
	connect(ui.tabWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(removeSubTab(int)));
	connect(ui.menu, SIGNAL(triggered(QAction*)), this, SLOT(trigerMenu(QAction*)));
	ui.tabWidget->setTabsClosable(true);

	Init();
	
}

void JustTestForQt::Init()
{

	//tab_1
	count = 0;

	secCnt = 0;
	minCnt = 0;
	hourCnt = 0;
	QString str;
	str = "00:00:00";
	secCntE = 0;
	minCntE = 0;
	hourCntE = 0;
	Etime = 0;
	ui.lcdNumber->setDigitCount(12);
	ui.lcdNumber->display(str);
	ui.lcdNumber_3->setDigitCount(12);
	ui.lcdNumber_3->display(str);
	
	for (int i = 0; i < 6; i++)
	{
		ui.tabWidget->setTabEnabled(i, false);
	}
	ui.tabWidget->setStyleSheet("QTabBar::tab:disabled {width: 0; color: transparent;}");
	QSettings settingsread("Option.ini", QSettings::IniFormat);
	int mainFun = settingsread.value("DevOption/mainFun").toInt();
	if (mainFun == 1)
	{
		ui.menu->actions().at(4)->setVisible(false);
	}
}
void JustTestForQt::on_timer_timeout()
{
	
	count+=ui.lineEdit->text().toInt();
	QString res;
	res += "Timing time: ";
	res += QString::number(count);
	res += " S";
	ui.textEdit->setText(res);
}
void JustTestForQt::SetTime()
{
	if (!ui.lineEdit->text().isEmpty())
	{
		fTimer->start(ui.lineEdit->text().toInt() * 1000);
		ui.lineEdit->setEnabled(false);
	}
}
void JustTestForQt::PauseTimeFor1()
{
	if (fTimer->isActive())
		fTimer->stop();
}
void JustTestForQt::StopTimeFor1()
{
	if (fTimer->isActive())
		fTimer->stop();
	count = 0;
	ui.textEdit->setText("");
	ui.lineEdit->clear();
	ui.lineEdit->setEnabled(true);
	
}
void JustTestForQt::SetTime2()
{
	if (!fTimerForTiming->isActive())
		fTimerForTiming->start(1000);
}
void JustTestForQt::PauseTimeFor2()
{
	if (fTimerForTiming->isActive())
		fTimerForTiming->stop();
}
void JustTestForQt::StopTimeFor2()
{
	if (fTimerForTiming->isActive())
		fTimerForTiming->stop();
	secCnt = 0;
	minCnt = 0;
	hourCnt = 0;
	QString str;
	str = "00:00:00";
	ui.lcdNumber->setDigitCount(12);
	ui.lcdNumber->display(str);
	
}
void JustTestForQt::on_timer_timeoutForTiming()
{
	secCnt++;
	if (secCnt >= 60)
	{
		secCnt = 0;
		minCnt++;
		if (minCnt >= 60)
		{
			minCnt = 0;
			hourCnt++;
			if (hourCnt >= 24)
			{
				hourCnt = 0;
			}
		}
	}
	QString str;
	if (hourCnt<10)
		str += QString::number(0);
	str += QString::number(hourCnt);
	str += ":";
	if (minCnt < 10)
		str += QString::number(0);
	str += QString::number(minCnt);
	str += ":";
	if (secCnt < 10)
		str += QString::number(0);
	str += QString::number(secCnt);
	ui.lcdNumber->display(str);
}
void JustTestForQt::restart()
{

	if (fTimerForTiming->isActive())
		fTimerForTiming->stop();
	secCnt = 0;
	minCnt = 0;
	hourCnt = 0;
	QString str;
	str = "00:00:00";
	ui.lcdNumber->display(str);
	if (!fTimerForTiming->isActive())
		fTimerForTiming->start(1000);
}
void JustTestForQt::OnGenerate()
{
	if (ui.lineEdit_min->text().isEmpty())
	{
		QMessageBox::information(NULL, QString::fromLocal8Bit("随机数生成器"), QString::fromLocal8Bit("请输入最小数"), QMessageBox::Yes);
		return;
	}
	if (ui.lineEdit_max->text().isEmpty())
	{
		QMessageBox::information(NULL, QString::fromLocal8Bit("随机数生成器"), QString::fromLocal8Bit("请输入最大数"), QMessageBox::Yes);
		return;
	}
	
	int min = ui.lineEdit_min->text().toInt();
	int max = ui.lineEdit_max->text().toInt();
	if (min > max)
	{
		int temp = min;
		min = max;
		max = temp;
	}
	int random = rand() % (max - min+1)+ min;
	ui.lcdNumber_2->display(random);
}
void JustTestForQt::Clear()
{
	ui.lineEdit_min->clear();
	ui.lineEdit_max->clear();
	ui.lcdNumber_2->display("");
}
void JustTestForQt::reset()
{
	if (ui.lineEdit_set->text().isEmpty())
	{
		QMessageBox::information(NULL, "护眼", "please set time", QMessageBox::Ok);
		return;
	}
	else
	{
		ui.lineEdit_set->setEnabled(false);
	}
	if (fTimerForEye->isActive())
		fTimerForEye->stop();
	secCntE = 0;
	minCntE = 0;
	hourCntE = 0;
	Etime = 0;
	QString str;
	str = "00:00:00";
	ui.lcdNumber_3->display(str);
	if (!fTimerForEye->isActive())
		fTimerForEye->start(1000);
}
void JustTestForQt::startForEye()
{
	if (ui.lineEdit_set->text().isEmpty())
	{
		QMessageBox::information(NULL, "护眼", "please set time", QMessageBox::Ok);
		return;
	}
	else
	{
		ui.lineEdit_set->setEnabled(false);
	}
	if (!fTimerForEye->isActive())
		fTimerForEye->start(1000);
}
void JustTestForQt::stopForEye()
{
	openSetTime();
	ui.lineEdit_set->clear();
}
void JustTestForQt::pause()
{
	if (fTimerForEye->isActive())
		fTimerForEye->stop();
}
void JustTestForQt :: on_TimerForEye_timeout()
{   
	secCntE++;
	
	if (secCntE >= 60)
	{
		secCntE = 0;
		minCntE++;
		Etime++;
		
		if (minCntE >= 60)
		{
			minCntE = 0;
			hourCntE++;
			if (hourCntE >= 24)
			{
				hourCntE = 0;
			}
		}
	}
	QString str;
	if (hourCntE < 10)
		str += QString::number(0);
	str += QString::number(hourCntE);
	str += ":";
	if (minCntE < 10)
		str += QString::number(0);
	str += QString::number(minCntE);
	str += ":";
	if (secCntE < 10)
		str += QString::number(0);
	str += QString::number(secCntE);
	ui.lcdNumber_3->display(str);
	if (Etime == ui.lineEdit_set->text().toInt())
	{
		Mess();
	}
}
void JustTestForQt::on_TimerForMessBox_timeout()
{
	
}
void JustTestForQt::Mess()
{
	fTimerForEye->stop();
	this->setWindowState(Qt::WindowActive);
	this->hide();
	char buf[1024];
	sprintf_s(buf, "You have been working for %d minutes.Do you want to take a break?", ui.lineEdit_set->text().toInt());
	string str = buf;
	QMessageBox::StandardButton r = QMessageBox::question(this, "Love Eyes", QString::fromStdString(str), QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
	if (r == QMessageBox::Yes) {
		//openSetTime();
		secCntE = 0;
		minCntE = 0;
		hourCntE = 0;
		Etime = 0;
		QString str;
		str = "00:00:00";
		ui.lcdNumber_3->display(str);
		QProcess *process = new QProcess;
		QString startProgram = "rundll32.exe user32.dll LockWorkStation";
		process->start(startProgram.trimmed());
	}
	else
	{
		reset();
		startForEye();
	}
	this->show();
	this->setWindowState(Qt::WindowMinimized);
}
void JustTestForQt::openSetTime()
{
	fTimerForEye->stop();
	secCntE = 0;
	minCntE = 0;
	hourCntE = 0;
	Etime = 0;
	QString str;
	str = "00:00:00";
	ui.lcdNumber_3->display(str);
	ui.lineEdit_set->setEnabled(true);
	
}
void JustTestForQt::OpenExe()
{
	//启动Quicker
	QProcess *Quickerprocess = new QProcess;
	string Quickerstr = "C:\\Program Files\\Quicker\\Quicker.exe";
	Quickerstr = TranPath(Quickerstr);
	Quickerprocess->start(QString::fromStdString(Quickerstr),QIODevice::ReadWrite);
	//启动QQ
	QProcess *QQprocess = new QProcess;
	string QQstr = "D:\\Program Files\\Tencent\\QQ\\Bin\\QQ.exe";
	QQstr = TranPath(QQstr);
	QQprocess->start(QString::fromStdString(QQstr));

	//启动微信
	QProcess *WeiXinprocess = new QProcess;
	string WeiXinstr = "D:\\Software\\WeChat\\WeChat.exe";
	WeiXinstr = TranPath(WeiXinstr);
	WeiXinprocess->start(QString::fromStdString(WeiXinstr));

}
void JustTestForQt::ReadIni()
{
	QSettings settings("Option.ini", QSettings::IniFormat);
	settings.beginGroup("DevOption");
	settings.setValue("mainFun", 25);
	settings.setValue("subFun", 40);
	settings.setValue("service", 1);
	settings.endGroup();
	settings.beginGroup("Test");
	settings.setValue("mainFun", 25);
	settings.setValue("subFun", 40);
	settings.setValue("service", 1);
	settings.endGroup();
	//读取ini
	QSettings settingsread("Option.ini", QSettings::IniFormat);

	settingsread.beginGroup("DevOption");
	int mainFun = settingsread.value("mainFun").toInt();
	QString service = settingsread.value("service").toString();
	settingsread.endGroup();
	char buf[1024];
	sprintf_s(buf, "mainFun=%d,service=%s", mainFun, service.toStdString().c_str());
	QMessageBox::information(NULL, "IniTest", buf);
	string str;
	//string 转 QString
	QString qstr = QString::fromStdString(str);
	//QString 转 string
	str = qstr.toStdString();
}
string JustTestForQt::TranPath(string str)
{
	string res = "\"";
	res += str;
	res += "\"";
	return res;
}
void JustTestForQt::removeSubTab(int index)
{
	ui.tabWidget->setTabEnabled(index, false);
	ui.tabWidget->setStyleSheet("QTabBar::tab:disabled {width: 0; color: transparent;}");
	if (!ui.tabWidget->isTabEnabled(ui.tabWidget->currentIndex()))
	{
		for (int i = ui.tabWidget->currentIndex(); i >0; i--)
		{
			if (ui.tabWidget->isTabEnabled(i))
			{
				ui.tabWidget->setCurrentIndex(i);
				break;
			}	
			if (i == 1) ui.tabWidget->setCurrentIndex(0);
		}
	}
}
void JustTestForQt::trigerMenu(QAction *act)
{
	if (act->text().toLocal8Bit()=="定时刷新")
	{
		ui.tabWidget->setTabEnabled(1, true);
		ui.tabWidget->setCurrentIndex(1);
	}
	else if (act->text().toLocal8Bit()=="计时器")
	{
		ui.tabWidget->setTabEnabled(2, true);
		ui.tabWidget->setCurrentIndex(2);
	}
	else if (act->text().toLocal8Bit() == "随机数生成器")
	{
		ui.tabWidget->setTabEnabled(3, true);
		ui.tabWidget->setCurrentIndex(3);
	}
	else if (act->text().toLocal8Bit()=="护眼")
	{
		ui.tabWidget->setTabEnabled(4, true);
		ui.tabWidget->setCurrentIndex(4);
	}
	else if (act->text().toLocal8Bit()=="启动应用")
	{
		ui.tabWidget->setTabEnabled(5, true);
		ui.tabWidget->setCurrentIndex(5);
	}
	ui.tabWidget->setStyleSheet("QTabBar::tab:disabled {width: 0; color: transparent;}");
	
}
