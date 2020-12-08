#pragma once
#define MAX_SIZE 500
using namespace System;
//класс "садик" (овечает за хранение информации об одном садике)
ref class Sadik {
	String^ Ra; //район
	int Num; //номер садика
	int Colvo_3; //3 года
	int Colvo_4; //4 года
	int Colvo_5; //5 лет
	int Colvo_6; //6 лет
public:
	Sadik() {Ra = "", Num = Colvo_3 = Colvo_4 = Colvo_5 = Colvo_6 = 0;}
	Sadik(int n, int c_3, int c_4, int c_5, int c_6, String^ r) {
		Num = n; Colvo_3 = c_3; Colvo_4 = c_4; Colvo_5 = c_5; Colvo_6 = c_6; Ra = r;
	}
	Sadik(Sadik^ t) {
		Num = t->Num; Colvo_3 = t->Colvo_3; Colvo_4 = t->Colvo_4; Colvo_5 = t->Colvo_5; Colvo_6 = t->Colvo_6; Ra = t->Ra;
	}

	property int N {
		int get() {
			return Num;
		}
		void set(int n) {
			Num = n;
		}
	}
	property int C_3 {
		int get() {
			return Colvo_3;
		}
		void set(int c) {
			Colvo_3 = c;
		}
	}
	property int C_4 {
		int get() {
			return Colvo_4;
		}
		void set(int c) {
			Colvo_4 = c;
		}
	}
	property int C_5 {
		int get() {
			return Colvo_5;
		}
		void set(int c) {
			Colvo_5 = c;
		}
	}
	property int C_6 {
		int get() {
			return Colvo_6;
		}
		void set(int c) {
			Colvo_6 = c;
		}
	}
	property String^ R{
		String^ get() {
			return Ra;
		}
		void set(String^ r) {
			Ra = r;
		}
	}	
};

//массив "садики" (список)
ref class Sadiki {
	array <Sadik^>^ A;
	int count;
public:
	Sadiki() {
		count = 0;
		A = gcnew array <Sadik^>(43);
	}

	Sadik^ Get_A(int i){
		return A[i];
	}

	bool IsFull() {
		return count == A->Length;
	}
	void Add(Sadik^ t) {
		if (!IsFull()) {
			A[count] = t;
			count++;
		}
	}

	String^ File() {
		String^ toWrite;
		for (int i = 0; i < count; i++) {
			toWrite += Get_A(i)->R + "#" + Get_A(i)->N.ToString() + "@" + Get_A(i)->C_3.ToString() + "$" + Get_A(i)->C_4.ToString() + "*" + Get_A(i)->C_5.ToString() + "!" + Get_A(i)->C_6.ToString() + "\n";
		}
		return toWrite;
	}

	void Poisk(String^ r, int v, System::Windows::Forms::DataGridView^ DGV) {
		DGV->RowCount = 1;
		Sadik^ Т;      // Рабочий указатель для просмотра.
		array <String^>^ Str = gcnew array <String^>(2);
			// for (int i=0; i<Len; i++)
		for (int i = 0; i < count; i++)
		{
			if (Get_A(i)->R == r ) {
				Str[0] = Get_A(i)->N.ToString();
				if (v == 3) Str[1] = Get_A(i)->C_3.ToString();
				if (v == 4) Str[1] = Get_A(i)->C_4.ToString();
				if (v == 5) Str[1] = Get_A(i)->C_5.ToString();
				if (v == 6) Str[1] = Get_A(i)->C_6.ToString();
				DGV->Rows->Add(Str);
			}
		}
	}
	bool Del_m(int n,int v) {
		for (int i = 0; i < count; i++)
		{
			if (Get_A(i)->N == n) {
				if (v == 3 && Get_A(i)->C_3 != 0) {
					Get_A(i)->C_3 = Get_A(i)->C_3--; return true;
				}
				else if (v == 4 && Get_A(i)->C_4 != 0)
				{
					Get_A(i)->C_4 = Get_A(i)->C_4--; return true;
				}
				else if (v == 5 && Get_A(i)->C_5 != 0)
				{
					Get_A(i)->C_5 = Get_A(i)->C_5--; return true;
				}
				else if (v == 6 && Get_A(i)->C_6 != 0)
				{
					Get_A(i)->C_6 = Get_A(i)->C_6--; return true;
				}
				else
					return false;
			}
		}
	}
};

//класс "человек" (овечает за хранение информации об одном ребенке)
ref class People {
	int Vozrast;
	int Num_s; //номер нужного садика
	String^ Name;
	String^ Raion;
	String^ Status; //убрать??
public:
	People() {
		Name = Raion = Status = ""; Num_s = Vozrast = 0;
	}
	People(String^ Na, int V, String^ Ra, int N) {
		Vozrast = V; Num_s = N; Name = Na; Raion = Ra;
	}
	People(String^ Na, int V, String^ Ra, int N, String^ St) {
		Vozrast = V; Num_s = N; Name = Na; Raion = Ra; Status = St;
	}
	People(People^ T) {
		Vozrast = T->Vozrast; Num_s = T->Num_s; Name = T->Name; Raion = T->Raion; Status = T->Status;
	}

	property int Num {
		int get() {
			return Num_s;
		}
		void set(int n) {
			Num_s = n;
		}
	}
	property int V {
		int get() {
			return Vozrast;
		}
		void set(int v) {
			Vozrast = v;
		}
	}
	property String^ R {
		String^ get() {
			return Raion;
		}
		void set(String^ r) {
			Raion = r;
		}
	}
	property String^ N {
		String^ get() {
			return Name;
		}
		void set(String^ n) {
			Name = n;
		}
	}
	property String^ ST {
		String^ get() {
			return Status;
		}
		void set(String^ s) {
			Status = s;
		}
	}
};

//массив "дети" (очередь;отвечает за хранение информации о заявках детей в одном районе)
ref class Children {
	int Head, Tail;
	array <People^>^ B;
public:
	Children() {
		Head = Tail = 0;
		B = gcnew array <People^>(MAX_SIZE);
	}
	
	People^ Get_B(int i) {
		return B[i];
	}
	int H() {
		return Head;
	}

	bool Is_Empty()
	{
		return Head == Tail;
	}
	bool Is_Full()
	{
		if (Head == New_ind(Tail))
			return true;
		else
			return false;
	}
	bool Push(People^ a)
	{
		if (!Is_Full())
		{
			B[Tail] = a;
			Tail = New_ind(Tail);
			return true;
		}
		else
			return false;
	}
	bool Pop(People^& a)
	{
		if (!Is_Empty())
		{
			a = B[Head];
			Head = New_ind(Head);
			return true;
		}
		else
			return false;
	}

	int New_ind(int Old_ind)
	{
		if (Old_ind < MAX_SIZE - 1)
			return Old_ind + 1;
		else
			return 0;
	}

	// Look - просмотр в Grid'е
	void Look(System::Windows::Forms::DataGridView^ DGV,int h)
	{
		// Смысл - обновить Grid. Как-то нет необходимости писать интерфейс.
		DGV->RowCount = 1;
		array <String^>^ Str = gcnew array <String^>(4);
		// for (int i=0; i<Len; i++)
		for (int i = Head; i < Tail; i++)
		{
			if (h == 1) {
				if (Get_B(i)->ST == "Обработка") {
				Str[0] = Get_B(i)->N;       
				Str[1] = Get_B(i)->V.ToString();
				Str[2] = Get_B(i)->R;  
				Str[3] = Get_B(i)->Num.ToString();
				DGV->Rows->Add(Str);
				}
			}
			else if (h == 2) {
				if (Get_B(i)->ST == "Одобрено") {
					Str[0] = Get_B(i)->N;
					Str[1] = Get_B(i)->V.ToString();
					Str[2] = Get_B(i)->R;
					Str[3] = Get_B(i)->Num.ToString();
					DGV->Rows->Add(Str);
				}
			}
			else if (h == 3) {
				if (Get_B(i)->ST == "Отказано") {
					Str[0] = Get_B(i)->N;
					Str[1] = Get_B(i)->V.ToString();
					Str[2] = Get_B(i)->R;
					Str[3] = Get_B(i)->Num.ToString();
					DGV->Rows->Add(Str);
				}
			}
		}
	}
	// Подготовка данных для сохранение в файл
	String^ File() {
		String^ toWrite;
		for (int i = Head; i < Tail; i++) {
			toWrite += Get_B(i)->N + "$" + Get_B(i)->V.ToString() + "*" + Get_B(i)->R + "!" + Get_B(i)->Num.ToString() + "@" + Get_B(i)->ST + "\n";
		}
		return toWrite;
	}

	void Del() {
		for (int i = Head; i < Tail; i++) {
			if (Get_B(i)->ST == "Одобрено"){
				People^ t = gcnew People();
				Pop(t);
			}
		}
	}
	void Add() {
		for (int i = Head; i < Tail; i++) {
			if (Get_B(i)->ST == "Отказано") {
				People^ t = gcnew People();
				Pop(t);
				t->ST = "Обработка";
				Push(t);
			}
		}
	}
};