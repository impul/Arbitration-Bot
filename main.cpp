#include "iostream"
using namespace std;

double taxB1_Out = 0.001;//к≥льк≥сть
double taxB1_ExCh = 0.2;//в≥дсотки

double taxB2_Out = 2;//долари
double taxB2_ExCh = 0.25;

double courseB1 = 6850;
double courseB2 = 6905;
double StartMoney = 0;

void GiveMeMyMoney(){

	double MoneyOut = StartMoney - taxB1_Out;// ком≥с≥€ за вив≥д з б≥рж≥
	cout << "Tax(USD)= -" << taxB1_Out*courseB2 <<endl;

	double ExChCoin = MoneyOut*courseB2;	// обм≥н валюти
	double Coin = ExChCoin*taxB2_ExCh / 100; // ком≥с≥€ за обм≥н у %
	double RCoin = ExChCoin - Coin;			// в≥дн≥манн€ ком≥с≥њ
	cout << "Tax(USD)= -" << Coin << endl;

	double OutCoin = RCoin - taxB2_Out;//скиданн€ валюти на ≥ншу б≥ржу (в≥дн≥манн€ ком≥с≥њ за виведенн€)
	cout << "Tax(USD)= -" << taxB2_Out << endl;

	double InCoinEX = OutCoin / courseB1;//назад в поxаткову валюту перев≥д
	double Coin1 = InCoinEX*taxB1_ExCh / 100; // ком≥с≥€ за перев≥д 

	cout << "Tax(USD)= -" << Coin1*courseB1 << endl;

	double ResCoin = InCoinEX - Coin1;	// в≥дн≥манн€ ком≥с≥њ за перев≥д
	cout << "\n\nResult= " << ResCoin<<endl;
	cout << " = " << ResCoin*courseB1 << "USD" << endl;
	cout << "+ " << (ResCoin - StartMoney)*courseB1 << endl;
}

int main(){
label1:
	//cout << "Course exchange first ?" << endl;
	//cin >> courseB1;
	//cout << "Course exchange second ?" << endl;
	//cin >> courseB2;

	cout << "You have Coin ?" << endl;
	cin >> StartMoney;
	cout << " = " << StartMoney*courseB1 << "USD" << endl;

	GiveMeMyMoney();
	
	system("pause");
	system("cls");
	goto label1;
	
}

