#pragma once
using namespace System;
using namespace System::IO;
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
	myPredicate(int iW) {
		this->intWhat = iW;
		this->stringWhat = nullptr;
	}
	myPredicate(String^ sW) {
		this->intWhat = 0;
		this->stringWhat = sW;
	}
	myPredicate(int iW, String^ sW) {
		this->intWhat = iW;
		this->stringWhat = sW;
	}
	bool isSadik(Sadik^ S) {
		if (this->intWhat == S->Num) {
			return true;
		}
		else
			return false;
	}

	bool isSadikNotEmpty(Sadik^ S) {
		if (intWhat == S->Num) {
			/*if (Convert::ToInt16(this->stringWhat) == 3)
				if (S->Colvo_3 != 0)
					return true;

			return true;*/
			int tmp = Convert::ToInt16(this->stringWhat);
			switch (tmp) {
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
		else
			return false;
	}

	bool isRaion(Sadik^ S) {
		if (this->stringWhat->CompareTo(S->Ra) == 0) {
			return true;
		}
		else
			return false;
	}
};

void Look(System::Collections::Generic::List <People^>^ LIST, System::Windows::Forms::DataGridView^ DGV) {
	DGV->RowCount = 1;
	for each (People ^ el in LIST) {
		DGV->Rows->Add(el->Name, el->Vozrast, el->Raion, el->Num_s);
	}
}

void Look(System::Collections::Generic::List <Sadik^>^ LIST, People ^ P, System::Windows::Forms::DataGridView^ DGV) {
	DGV->RowCount = 1;
	myPredicate predicate(P->Raion);
	System::Collections::Generic::List <Sadik^>^ LIST2 = gcnew System::Collections::Generic::List <Sadik^>(LIST->FindAll(gcnew Predicate <Sadik^>(predicate, &myPredicate::isRaion)));
	for each (Sadik ^ el in LIST2) {
		// switch работает некорректно
		if (P->Vozrast == 3)
			DGV->Rows->Add(el->Num, el->Colvo_3);
		if (P->Vozrast == 4)
			DGV->Rows->Add(el->Num, el->Colvo_4);
		if (P->Vozrast == 5)
			DGV->Rows->Add(el->Num, el->Colvo_5);
		if (P->Vozrast == 6)
			DGV->Rows->Add(el->Num, el->Colvo_6);
	}
}

void Look(System::Collections::Generic::List <Sadik^>^ LIST, System::Windows::Forms::DataGridView^ DGV) {
	DGV->RowCount = 1;
	for each (Sadik ^ el in LIST) {
		DGV->Rows->Add(el->Ra, el->Num, el->Colvo_3, el->Colvo_4, el->Colvo_5, el->Colvo_6);
	}
}


void readFromFile(System::IO::StreamReader^ SR, System::Collections::Generic::List <People^>^ LIST) {
	String^ str = gcnew String("");
	while (str = SR->ReadLine()) {
		try
		{
			People^ p = gcnew People();
			p->Name = str->Substring(0, str->IndexOf("$"));
			p->Vozrast = Convert::ToInt32(str->Substring(str->IndexOf("$") + 1, 1));
			p->Raion = str->Substring(str->IndexOf("#") + 1, str->IndexOf("!") - str->IndexOf("#") - 1);
			p->Num_s = Convert::ToInt32(str->Substring(str->IndexOf("!") + 1));
			LIST->Add(p);
		}
		catch (...)
		{
			break;
		}

	}
	SR->Close();
}

void readFromFile(System::IO::StreamReader^ SR, System::Collections::Generic::List <Sadik^>^ LIST) {
	String^ str1 = gcnew String("");
	while (str1 = SR->ReadLine()) {
		try
		{
			Sadik^ p = gcnew Sadik();
			p->Ra = str1->Substring(0, str1->IndexOf("#"));
			p->Num = Convert::ToInt32(str1->Substring(str1->IndexOf("#") + 1, str1->IndexOf("@") - str1->IndexOf("#") - 1));
			p->Colvo_3 = Convert::ToInt32(str1->Substring(str1->IndexOf("@") + 1, str1->IndexOf("$") - str1->IndexOf("@") - 1));
			p->Colvo_4 = Convert::ToInt32(str1->Substring(str1->IndexOf("$") + 1, str1->IndexOf("*") - str1->IndexOf("$") - 1));
			p->Colvo_5 = Convert::ToInt32(str1->Substring(str1->IndexOf("*") + 1, str1->IndexOf("!") - str1->IndexOf("*") - 1));
			p->Colvo_6 = Convert::ToInt32(str1->Substring(str1->IndexOf("!") + 1));
			LIST->Add(p);
		}
		catch (...)
		{
			break;
		}
		
	}
	SR->Close();
}

void writeToFile(System::IO::StreamWriter^ SW, System::Collections::Generic::List <People^>^ LIST) {
	for each (People ^ P in LIST) {
		SW->WriteLine(P->Name + "$" + P->Vozrast + "#" + P->Raion + "!"+ P->Num_s);
	}
	SW->Close();
}

void writeToFile(System::IO::StreamWriter^ SW, System::Collections::Generic::List <Sadik^>^ LIST) {
	for each (Sadik ^ S in LIST) {
		SW->WriteLine(S->Ra + "#" + S->Num + "@" + S->Colvo_3 + "$" + S->Colvo_4 + "*" + S->Colvo_5 + "!" + S->Colvo_6);
	}
	SW->Close();
}
