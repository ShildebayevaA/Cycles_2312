#include <stdio.h>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int Number;
Start:
	cout << "Введите номер задания от 1 до 6" << "\t" << endl;
	cin >> Number;

	if ((Number < 1) || (Number > 6)) {
		cout << "введенное число не входит в диапазон 1 - 6" << endl;
		goto Start;
	}

	if (Number == 1) {
		cout << "Sum ballov of 2 students " << endl;

		int i = 0;
		int predm_st1 = 0;
		int predm_st2 = 0;
		int Sum_st1 = 0;
		int Sum_st2 = 0;

		cout << endl;

		for (i = 0; i <= 4; i++)
		{
			cout << "ВВедите оценки по предмету 1-го и 2-го студентов " << endl;
			cin >> predm_st1 >> predm_st2;
			Sum_st1 += predm_st1;
			Sum_st2 += predm_st2;
		}
		cout << "Сумма предметов студента 1" << Sum_st1 << endl;
		cout << "Сумма предметов студента 2" << Sum_st2 << endl;
		goto Start;
	}
	if (Number == 2) {
		cout << "средний возраст учеников в 2-х группах" << endl;
		int i = 0;
		float vozt_st1 = 0;
		float vozt_st2 = 0;
		float Sum_st1 = 0;
		float Sum_st2 = 0;
		float Sredn_gr1 = 0;
		float Sredn_gr2 = 0;

		srand(time(NULL));
		for (i = 1; i <= 20; i++)
		{
			srand(time(NULL));
			vozt_st1 = 1 + rand() % 9;

			srand(time(NULL));
			vozt_st2 = 1 + rand() % 9;
			
			Sum_st1 += vozt_st1;
			Sum_st2 += vozt_st2;
		}
		Sredn_gr1 = Sum_st1 / i;
		Sredn_gr2 = Sum_st2 / i;

		cout << "Средний возраст в гр 1" << Sredn_gr1 << endl;
		cout << "Средний возраст в гр 2" << Sredn_gr2 << endl;

		goto Start;
	}
	if (Number == 3) {
		cout << "Osadki v Yanvare i Marte " << endl;
		int i = 0;
		float Os_yanv = 0;
		float Os_mart = 0;
		float Sum_yanv = 0;
		float Sum_mart = 0;
		float Sredn_yanv = 0;
		float Sredn_mart = 0;

		srand(time(NULL));
		for (i = 1; i <= 31; i++)
		{
			srand(time(NULL));
			Os_yanv = -20 + rand() % 9;

			srand(time(NULL));
			Os_mart = 4 + rand() % 9;

			Sum_yanv += Os_yanv;
			Sum_mart += Os_mart;
		}
		Sredn_yanv = Sum_yanv / i;
		Sredn_mart = Sum_mart / i;

		cout << "среднедневное количество осадков в январе " << Sredn_yanv << endl;
		cout << "среднедневное количество осадков в марте " << Sredn_mart << endl;
		
		goto Start;
	}
	if (Number == 4) {
		cout << " Средний рост учеников в двух классах " << endl;
		int i = 0;
		float Rost_cl1 = 0;
		float Rost_cl2 = 0;
		float Sum_cl1 = 0;
		float Sum_cl2 = 0;
		float Sredn_cl1 = 0;
		float Sredn_cl2 = 0;

		srand(time(NULL));
		for (i = 1; i <= 31; i++)
		{
			srand(time(NULL));
			Rost_cl1 = 100 + rand() % 9;

			srand(time(NULL));
			Rost_cl2 = 100 + rand() % 9;

			Sum_cl1 += Rost_cl1;
			Sum_cl2 += Rost_cl2;
		}
		Sredn_cl1 = Sum_cl1 / i;
		Sredn_cl2 = Sum_cl2 / i;

		cout << "средний рост в группе 1 " << Sredn_yanv << endl;
		cout << "средний рост в группе 2 " << Sredn_mart << endl;

		goto Start;
	}

	if (Number == 5) {
		cout << "средняя урожайность по области " << endl;
		int i = 0;
		float Rost_cl1 = 0;
		float Rost_cl2 = 0;
		float Sum_cl1 = 0;
		float Sum_cl2 = 0;
		float Sredn_cl1 = 0;
		float Sredn_cl2 = 0;

		srand(time(NULL));
		for (i = 1; i <= 31; i++)
		{
			srand(time(NULL));
			Rost_cl1 = 100 + rand() % 9;

			srand(time(NULL));
			Rost_cl2 = 100 + rand() % 9;

			Sum_cl1 += Rost_cl1;
			Sum_cl2 += Rost_cl2;
		}
		Sredn_cl1 = Sum_cl1 / i;
		Sredn_cl2 = Sum_cl2 / i;

		cout << " " << Sredn_yanv << endl;
		cout << " " << Sredn_mart << endl;

		goto Start;
	}
	if (Number == 6) {


		goto Start;
	}
	cout << "Задания завершены" << endl;
	}
	system("pause");
	return(0);
	}