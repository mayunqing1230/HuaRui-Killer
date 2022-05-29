//C艹语言写的哦 
//作者mayunqing1230,微信Andy-Ma1230 
//废话不多说 
//你觉得这点破玩意用得着函数？
//http://mayunqing1230.ys168.com/

//初始化 
#include <stdio.h>
#include <Windows.h>
#include <windows.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <ctime>
#include <utility>
#include <thread>
#include <chrono>
#include <functional>
#include <stdexcept>
#include <uxtheme.h>
#include <process.h>
#include <commctrl.h>
#include <shlobj.h>
#include <CommCtrl.h>
#include <process.h>  
#include <math.h>
#include <commctrl.h>
//#include <atomic>

//不是我周鸿祎本人闲的蛋疼include那么多干啥，也用不着 

using namespace std;
//这里还需要李彦宏解释吗？

int main(){
	system("@echo off");
	system("title 华锐杀手");
	system("color f1");
	int suijiyanshi=0;
	int shuru;
	long long cishu=1;
	//再初始化一遍周鸿祎人没了
	 
	cout << "华锐杀手用户协议（当前产品版本9.3.0.0）" << endl;
	cout << "此程序为个人作品，因此在你使用前你也应该大致了解相关规定、法律。" << endl;
	cout << "总结下来无非就如下几条：" << endl;
	cout << "1、你不可以用本程序违反中华人民共和国宪法、中华人民共和国民法典、中华人民共和国计算机类相关法律。" << endl;
	cout << "2、使用此程序，你需要经过管理员的允许，不使用此程序做“扰乱国家秩序”“非法计算机入侵、渗透、攻击”“电脑考试作弊”等事。" << endl;
	cout << "3、未经作者本人允许，禁止对此程序做以下操作（包括但不限于）：传播、盗卖、反编译、反汇编、修改、篡改、脱壳、加壳、内存修改、内存注入等。" << endl;
	cout << "4、此程序仅供个人学习和研究使用，不得用于任何商业用途。" << endl;
	cout << "5、权利越大，责任越大；你要清楚你自己的操作 ；要能承担你造成的后果。" << endl;
	cout << "程序作者：mayunqing1230。联系方式（微信）：Andy-Ma1230" << endl;
	cout << "感谢您使用本程序。（此程序使用C++开发，且已开源，如需源码请联系作者或访问官网）" << endl;
	cout << endl << endl;
	//防止翻车的没人看到用户协议 
	
	
	cout << "程序已成功初始化并运行" << endl;
	cout << "基本功能：继续使用输入1，如不同意请输入2" << endl;
	cout << "其他功能（需要计算机接入公网，部分机房无法使用）：检查更新，获取源码，加入我们，其他工具（信息课工具集），宣传广告输入3" << endl;
	cout << "输入上述数字后按下回车键" << endl;
	cout << "输入：" ; 
	
	cin >> shuru;
	//让马化腾输入 
	
	
	//开始搞事
	if(shuru==1){
		while(true){
			system("cls");
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			system("cls");
		}
	}
	//这个李彦宏还挺有能耐
	
	
	else if(shuru==2){
		system("cls");
		cout << "你拒绝了用户协议，程序即将退出" << endl;
		system("pause");
		return 0;
	}
	//啥周鸿祎这么怂？怕病毒？
	
	
	else if(shuru==3){
		system("cls");
		system("start http://mayunqing1230.ys168.com/"); 
		system("pause");
		while(true){
			system("cls");
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			suijiyanshi=rand()%50;
			cout << "开始第" << cishu << "次杀进程。。。" << endl;
			cout << "杀进程中。。。。。。" << endl;
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			Sleep(suijiyanshi);
			cishu=cishu+1;
			cout << "杀进程中。。。" << endl;
			cout << "第" << cishu << "次杀进程完成" << endl; 
			system("taskkill/im REDAgent.exe /f >nul 2>nul");
			suijiyanshi=rand()%50;
			Sleep(suijiyanshi);
			cout << "即将开始第" << cishu+1 << "次杀进程" <<endl;
			cishu=cishu+1;
			system("cls");
		}
	}
	//这才是真爱粉
	
	
	else if(shuru!=1||shuru!=2||shuru!=3){
		system("cls");
		cout << "你输入了其他内容，默认不同意用户协议" << endl;
		cout << "程序即将退出" << endl;
		system("pause");
		return 0;
	}
	//他周鸿祎全家的什么人才啊 
	
	
	return 0;
	//这一行不用庞升东解释吧 
}
//闲的蛋疼
