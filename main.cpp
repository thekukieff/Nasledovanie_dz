#include <iostream>
#include <cstdlib>
#include <Windows.h>
//���� � ����� ������� ���������
class People {
public:
	People() {

	}
	People(int age, std::string name, float gender) {
		age_ = age;
		name_ = name;
		gender_ = gender;
	}
	void Think() {//������� ����� ������
		std::cout << "*������\n";

	}

	void Tell() {//� ��������
		std::cout << "�������: \n";

	}
protected:
	int age_;//�������� ��������
	std::string name_;
	float gender_;

};

class House_manager:public People {
public:
	void AskOfWater(){//������� �������� ��� ����	
	//������ ����������� ������ ����� ������, ����� ���� �� �����?
		std::cout << "��� ���� ����� " << rand() % 27 + 1<<" �����" << std::endl;
	
	}

	void AskOfElectric() {//������� �������� ��� �������������
	//������ ����������� ������ ����� ������, ����� ���� �� �����?
		std::cout << "� ��� ������������� �������� " << rand() % 27 + 1<<" �����" << std::endl;

	}

	void AskOfHeating() {//������� �������� ��� �������������
	//������ ����������� ������ ����� ������, ����� ���� �� �����?
		std::cout << "��� ��������� ����� " << rand() % 27 + 1 << " �����" << std::endl;

	}

private:
	int salary_;//� ������������ ������ ���� ��

};

class Occupant:public People {//������
public:
	Occupant() {

	}
	int Ask() {//������ ������ 
		std::cout << "������� ����� ��������\n";
		std::cin >> num_flat_;
		std::cout << "�� ������ �������� ��� 1)���� 2)������������� 3)���������\n";
		std::cin >> func_;
		return func_;
	
	}

	void AskAQuestionOfWater()const {//��� ���� ������ ������ ������������
		std::cout << "����� � �������� " << num_flat_ << " �������� ����?\n";
		
	}
	void AskAQuestionOfElectric()const {//��� ������������� ������ ������ ������������
		std::cout << "����� � �������� " << num_flat_ << " �������� �������������?\n";
		
	}
	void AskAQuestionOfHeating()const {//��� ��������� ������ ������ ������������
		std::cout << "����� � �������� " << num_flat_ << " �������� ���������?\n";

	}

private:
	int num_flat_;//�������� ������ ��������
	int func_;
};


int main() {
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Occupant Igor;
	House_manager Nikolay;
	int ask = Igor.Ask();//������ ��� ������� 

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