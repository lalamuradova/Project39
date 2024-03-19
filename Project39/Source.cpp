#include<iostream>
using namespace std;
//OOP- Object Orientid Programming
//OYP
//DRY- Dont repeat yourself
//Encapsulation
//Inheritence
//Polymorphism
//Abraction

//class daxilideki deyisenlere variable-lara: field deyilir
//class daxilindeki funksiyalara method deyilir
//class daxilindeki her sey default olaraq private veziyyetdedir

//access modifier
//1. private - class daxilinde fieldlere,methodlara muraciete etmek olur
//2. public - obyekt vastesile hemise  gorulur fieldler,methodlar
//3. protected - miras almis oldugu classarda gore bilirik

class Car {
	string model;
	string color;
	int* year;
	double motor;

public:
	/*
	//Biz yaratdigimiz methoddur ve obyekt yaranandan sonra istifade etmek olur
	void Fill(string _model, string _color, int _year, double _motor) {
		model = _model;
		color = _color;
		year = _year;
		motor = _motor;
	}*/

	//Constructor obyektin adi ile eyni olmalidir //with parametrs
	//this pointeri- classin fieldine muraciet etmek ucun istifade edilir
	Car (string model, string color, int year, double motor) {
		this->model = model;
		this->color = color;
		this->year = new int(year);
		this->motor = motor;
	}

	//default constructor
	Car() {
		model = "anonim";
		color = "anonim";
		year = new int(0);
		motor = 0;
		cout << "Default constructor" << endl;
	}


	void Show() {
		cout << "Model: " << model << endl;
		cout << "Color: " << color << endl;
		cout << "Year: " << *year << endl;
		cout << "Motor: " << motor << endl;
	}


	//destructor
	~Car() {
		delete year;
		cout <<model <<" Destructor" << endl;
	}

};





void main() {
	//Car car1;

	//car1.model = "Toyota";
	//car1.color = "black";
	//car1.motor = 2.4;
	//car1.year = 2014;

	//obyekt yaranan anda field-leri doldurmaq isteyirikse , 
	//special methodlar istifade olunur
	//Constructor

	//Car  car1;
	//car1.Fill("Toyota", "black", 2014, 2.4);
	//car1.Show();


	//Constructor vermisikse artiq bos obyek yarada bilmerik

	//Car car1("Toyota", "black", 2014, 2.4);
	//car1.Show();
	//
	//Car car2;
	//car2.Show();

	
	Car car1("Mercedes", "black", 2020, 6.3);
	car1.Show();

	Car* car2 = new Car("Toyota", "red", 2020, 2.4); //obyekti heapde yaradiriq
	car2->Show();
	delete car2;



}