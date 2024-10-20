#include <iostream>
#include <cstdlib>
#include <Windows.h>
//если я понял задание правильно
class People {
public:
	People() {

	}
	People(int age, std::string name, float gender) {
		age_ = age;
		name_ = name;
		gender_ = gender;
	}
	void Think() {//человек умеет думать
		std::cout << "*Думает\n";

	}

	void Tell() {//и говорить
		std::cout << "Говорит: \n";

	}
protected:
	int age_;//свойства человека
	std::string name_;
	float gender_;

};

class House_manager:public People {
public:
	void AskOfWater(){//решение вопросов про воду	
	//каждый управляющий решает такой вопрос, иначе кому он нужен?
		std::cout << "Вам воду дадут " << rand() % 27 + 1<<" числа" << std::endl;
	
	}

	void AskOfElectric() {//решение вопросов про электричество
	//каждый управляющий решает такой вопрос, иначе кому он нужен?
		std::cout << "У вас электричество появится " << rand() % 27 + 1<<" числа" << std::endl;

	}

	void AskOfHeating() {//решение вопросов про электричество
	//каждый управляющий решает такой вопрос, иначе кому он нужен?
		std::cout << "Вам отопление дадут " << rand() % 27 + 1 << " числа" << std::endl;

	}

private:
	int salary_;//у управляющего должна быть зп

};

class Occupant:public People {//житель
public:
	Occupant() {

	}
	int Ask() {//Задать вопрос 
		std::cout << "Введите номер квартиры\n";
		std::cin >> num_flat_;
		std::cout << "Вы хотите спросить про 1)Воду 2)Электричество 3)Отопление\n";
		std::cin >> func_;
		return func_;
	
	}

	void AskAQuestionOfWater()const {//про воду задают вопрос управляющему
		std::cout << "Когда в квартире " << num_flat_ << " появится вода?\n";
		
	}
	void AskAQuestionOfElectric()const {//про электричество задают вопрос управляющему
		std::cout << "Когда в квартире " << num_flat_ << " появится электричество?\n";
		
	}
	void AskAQuestionOfHeating()const {//про отопление задают вопрос управляющему
		std::cout << "Когда в квартире " << num_flat_ << " появится отопление?\n";

	}

private:
	int num_flat_;//свойства жителя квартиры
	int func_;
};


int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Occupant Igor;
	House_manager Nikolay;
	int ask = Igor.Ask();//просто для примера 

	if (ask == 1) {
		Igor.AskAQuestionOfWater();
		Nikolay.AskOfWater();
	}
	else if (ask == 2) {
		Igor.AskAQuestionOfElectric();
		Nikolay.AskOfElectric();
	}
	else if (ask == 3) {
		Igor.AskAQuestionOfHeating();
		Nikolay.AskOfHeating();
	}

	return 0;
}