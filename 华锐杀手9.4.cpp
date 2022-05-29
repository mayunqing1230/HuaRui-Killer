#include <iostream> 
#include <windows.h>
using namespace std;
//初始化

void taskkill(){
	WinExec("C:\\Windows\\System32\\taskkill.exe /im REDAgent.exe /f" , SW_HIDE);
}




int main(){
	system("@echo off");
	system("color f1");
	cout << "	华锐杀手9.4用户协议 " << endl;
	cout << "此程序为非营利性组织作品，因此在你使用前你也应该大致了解相关规定、法律。 " << endl;
	cout << "总结下来无非就如下几条： " << endl;
	cout << "1、你不可以用本程序违反校规、中华人民共和国宪法、民法、计算机类相关法律。 " << endl;
	cout << "2、使用此程序，你需要经过老师、管理员的允许，不使用此程序做“扰乱课堂秩序”“电脑考试作弊”“非法计算机入侵、渗透、攻击 ”等事。 " << endl;
	cout << "3、未经作者本人允许，禁止对此程序做以下操作（包括但不限于）：传播、盗卖、反编译、反汇编、修改、篡改、脱壳、加壳、内存修改、内存注入等。 " << endl;
	cout << "4、此程序仅供个人学习和研究使用，不得用于任何商业用途。 " << endl;
	cout << "5、权利越大，责任越大；你要清楚你自己的操作 ；要能承担你造成的后果。 " << endl;
	cout << "程序开发组织：矿大计算机交流。" << endl;
	cout << "开发组织官网：http://kuangda-computer-communication.mysxl.cn/；群组：https://t.me/kuangda-Computer-communication；下载站：http://mayunqing1230.ysepan.com/" << endl;
	cout << "感谢您使用本程序。（此程序使用C++开发，且已开源，如需源码请联系作者或访问官网） " << endl;
	cout << endl << endl;
	cout << "如果您同意上述协议，请按任意键，否则直接退出。" << endl;
	system("pause");
	//用户协议
	
	system("cls");
	int mode;
	int time; 
	cout <<"输入1自动执行，输入2手动执行。" << endl;
	cout << "输入：" ;
	cin >> mode;
	if(mode == 1){
		cout << "你选择了自动执行，请输入每次执行的延时，建议为500（单位为毫秒）：" ;
		cin >> time;
		system("cls");
		while(mode == 1){
			taskkill();
			Sleep(time);
			system("cls");
		}
	}
	if(mode == 2){
		while(mode == 2){
			taskkill();
			system("pause");
			system("cls");
		}
	}
	else{
		system("cls");
		cout << "你输入了其他内容！默认退出。" << endl;
		system("pause");
		return 0;
	}
	return 0;
}
