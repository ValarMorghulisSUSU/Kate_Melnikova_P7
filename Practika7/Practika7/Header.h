#pragma once
using namespace System;

//����� "�����" (������� �� �������� ���������� �� ����� ������)
ref class Sadik {
public:
	String^ Ra; //�����
	int Num; //����� ������
	int Colvo_3; //3 ����
	int Colvo_4; //4 ����
	int Colvo_5; //5 ���
	int Colvo_6; //6 ���

	Sadik() {Ra = "", Num = Colvo_3 = Colvo_4 = Colvo_5 = Colvo_6 = 0;}
	Sadik(int n, int c_3, int c_4, int c_5, int c_6, String^ r) {
		Num = n; Colvo_3 = c_3; Colvo_4 = c_4; Colvo_5 = c_5; Colvo_6 = c_6; Ra = r;
	}
	Sadik(Sadik^ t) {
		Num = t->Num; Colvo_3 = t->Colvo_3; Colvo_4 = t->Colvo_4; Colvo_5 = t->Colvo_5; Colvo_6 = t->Colvo_6; Ra = t->Ra;
	}

};

//����� "�������" (������� �� �������� ���������� �� ����� �������)
ref class People {
public:
	int Vozrast;
	int Num_s; //����� ������� ������
	String^ Name;
	String^ Raion;
	//String^ Status; //������??
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


void Look()