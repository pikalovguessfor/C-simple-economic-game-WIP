//------------------------------------------------------------------------this file contains MAIN function and SUB-logic functions---------------------------------------------------------------------------------------------------\\

#include "includes.h"

using namespace std;


long double incomeUsually(long double income, string stage) {
	
	if (stage == NameStagesArr[0]) {
		income = income + 0.1;
	}
	
	else if (stage == NameStagesArr[1]) {
		income = income + 0.3;
	}

	else if (stage == NameStagesArr[2] or stage == NameStagesArr[4]) {
		income = income + 0.6;
	}

	else if (stage == NameStagesArr[3] or stage == NameStagesArr[5]) {
		income = income + 1.0;
	}

	return income;
}

long double priceForm(long double price, long double age, long double income, long double money ) {

	price = (((money/ 10) + age) * income);

	return price;

}

long double agePlusMech(long double age) {
	
	return age = age + 0.1;
}

long double moneyFormulaMech(long double money, long double income) {

	money = money + income;

	return money;
}

//------------------------------------------------------------------------MAIN functiona, and main logic of program----------------------------------------------------------------------------------------------------------------\\



int main() {

	actorChar Act1; actInfo infAct1; EventWorker eventAct1;
	actorChar Act2;	actInfo infAct2; EventWorker eventAct2;
	actorChar Act3; actInfo infAct3; EventWorker eventAct3;
	actorChar Act4; actInfo infAct4; EventWorker eventAct4;


	bool gameWork = true;

	while (gameWork) {
		//
		Act1.income = incomeUsually(Act1.income, Act1.stage);
		Act1.price = priceForm(Act1.price, Act1.age, Act1.income, Act1.money);
		Act1.money = moneyFormulaMech(Act1.money, Act1.income);
		Act1.age = agePlusMech(Act1.age);
		Act1.money = eventAct1.GetMinusMoney(Act1.money);

		Act1.DisableEx();
		//
		Act2.income = incomeUsually(Act2.income, Act2.stage);
		Act2.price = priceForm(Act2.price, Act2.age, Act2.income, Act2.money);
		Act2.money = moneyFormulaMech(Act2.money, Act2.income);
		Act2.age = agePlusMech(Act1.age);
		Act2.money = eventAct2.GetMinusMoney(Act2.money);
		
		Act2.DisableEx();
		//	
		infAct1.showInfo(Act1);
		infAct2.showInfo(Act2);
		//		
		//Sleep(500);
		get_cls();
	}

}
