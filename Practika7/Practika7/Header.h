#pragma once
using namespace System;

//класс "садик" (овечает за хранение информации об одном садике)
ref class Sadik {
public:
	String^ Ra; //район
	int Num; //номер садика
	int Colvo_3; //3 года
	int Colvo_4; //4 года
	int Colvo_5; //5 лет
	int Colvo_6; //6 лет

	Sadik() {Ra = "", Num = Colvo_3 = Colvo_4 = Colvo_5 = Colvo_6 = 0;}
	Sadik(int n, int c_3, int c_4, int c_5, int c_6, String^ r) {
		Num = n; Colvo_3 = c_3; Colvo_4 = c_4; Colvo_5 = c_5; Colvo_6 = c_6; Ra = r;
	}
	Sadik(Sadik^ t) {
		Num = t->Num; Colvo_3 = t->Colvo_3; Colvo_4 = t->Colvo_4; Colvo_5 = t->Colvo_5; Colvo_6 = t->Colvo_6; Ra = t->Ra;
	}

};

//класс "человек" (овечает за хранение информации об одном ребенке)
ref class People {
public:
	int Vozrast;
	int Num_s; //номер нужного садика
	String^ Name;
	String^ Raion;
	People() {
		Name = Raion = ""; Num_s = Vozrast = 0;
	}
	People(String^ Na, int V, String^ Ra, int N) {
		Vozrast = V; Num_s = N; Name = Na; Raion = Ra;
	}
	People(String^ Na, int V, String^ Ra, int N, String^ St) {
		Vozrast = V; Num_s = N; Name = Na; Raion = Ra;
	}
	People(People^ T) {
		Vozrast = T->Vozrast; Num_s = T->Num_s; Name = T->Name; Raion = T->Raion;
	}
};

public value class myPredicate {
	int intWhat;
	String^ stringWhat;
public:
	myPredicate(int iW, String^ sW) {
		this->intWhat = iW;
		this->stringWhat = sW;
	}
	bool isSadik(Sadik^ S) {
		if (this->intWhat == S->Num)
	}
	bool isRaionAndVozrast(Sadik^ S) {
		if (this->stringWhat->CompareTo(S->Ra) == 0) {
			switch (intWhat) {
			case 3:
				if (S->Colvo_3 != 0)
					return true;
				else
					return false;
			case 4:
				if (S->Colvo_4 != 0)
					return true;
				else
					return false;
			case 5:
				if (S->Colvo_5 != 0)
					return true;
				else
					return false;
			case 6:
				if (S->Colvo_6 != 0)
					return true;
				else
					return false;
			default:
				break;
			}
		}
	}
};

void Look(System::Collections::Generic::List <People^>^ LIST, System::Windows::Forms::DataGridView^ DGV) {
	DGV->RowCount = 1;
	LIST->Sort();
	for each (People ^ el in LIST) {
		DGV->Rows->Add(el->Name, el->Vozrast, el->Raion, el->Num_s);
	}
}

void Look(System::Collections::Generic::List <Sadik^>^ LIST, People ^ P, System::Windows::Forms::DataGridView^ DGV) {
	DGV->RowCount = 1;
	LIST->Sort();
	myPredicate predicate(P->Vozrast, P->Raion);
	System::Collections::Generic::List <Sadik^>^ LIST2 = gcnew System::Collections::Generic::List <Sadik^>(LIST->FindAll(gcnew Predicate <Sadik^>(predicate, &myPredicate::isRaionAndVozrast)));
	for each (Sadik ^ el in LIST2) {
		switch (P->Vozrast)
		{
		case 3:
			DGV->Rows->Add(el->Num, el->Colvo_3);
		case 4:
			DGV->Rows->Add(el->Num, el->Colvo_4);
		case 5:
			DGV->Rows->Add(el->Num, el->Colvo_5);
		case 6:
			DGV->Rows->Add(el->Num, el->Colvo_6);
		default:
			break;
		}
	}
}

void readFromFile(System::IO::StreamReader^, System::Collections::Generic::List <People^>^) {

}

void readFromFile(System::IO::StreamReader^, System::Collections::Generic::List <Sadik^>^) {

}

void writeToFile(System::IO::StreamWriter^, System::Collections::Generic::List <People^>^) {

}

void writeToFile(System::IO::StreamWriter^, System::Collections::Generic::List <People^>^) {

}
