#include <iostream>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	cout << "----------------------------------------Программа для определения региона по коду автомобильного номера!-----------------------------------------" << endl;
	int Code = 0;														// код региона
	cout << "Введите код региона: "; cin >> Code;
	enum RegionCode
	{
		Chel = 74,
		Chel1 = 174,
		Chel2 = 774,
		Ekb = 66,
		Ekb1 = 96,
		Ekb2 = 166,
		Ekb3 = 196,
		Nsb = 54,
		Nsb1 = 154,
		Stv = 26,
		Stv1 = 126,
		Ufa = 02,
		Ufa1 = 102,
		Ufa2 = 702,
		Rso = 15,
		Tat = 16,
		Tat1 = 116,
		Tat2 = 716,
		Msk = 77,
		Msk1 = 97,
		Msk2 = 99,
		Msk3 = 177,
		Msk4 = 197,
		Msk5 = 199,
		Msk6 = 777,
		Msk7 = 799,
		Msk8 = 277,
		Msk9 = 299,
		Msk10 = 797,
		MosObl1 = 50,
		MosObl2 = 90,
		MosObl3 = 150,
		MosObl4 = 190,
		MosObl5 = 750,
		MosObl6 = 790,
		Spb = 78,
		Spb1 = 98,
		Spb2 = 178,
		Spb3 = 198,
		LenObl = 47,
		LenObl1 = 147
	};
	switch (Code)
	{
	case Chel:
	case Chel1:
	case Chel2:
		cout << "Челябинская область!" << endl;
		break;

	case RegionCode::Ekb:
	case RegionCode::Ekb1:
	case RegionCode::Ekb2:
	case RegionCode::Ekb3:
		cout << "Свердловская область!" << endl;
		break;

	case RegionCode::Nsb:
	case RegionCode::Nsb1:
		cout << "Новосибирская область!" << endl;
		break;

	case RegionCode::Rso:
		cout << "Республика Северная Осетия-Алания!" << endl;
		break;

	case RegionCode::Stv:
	case RegionCode::Stv1:
		cout << "Ставропольский край!" << endl;
		break;

	case RegionCode::Ufa:
	case RegionCode::Ufa1:
	case RegionCode::Ufa2:
		cout << "Республика Башкирия!" << endl;
		break;

	case RegionCode::Tat:
	case RegionCode::Tat1:
	case RegionCode::Tat2:
		cout << "Республика Татарстан!" << endl;
		break;

	default:
		cout << "Регион не найден!" << endl;
		cout << "Данный регион доступен в полной версии программы!" << endl;
		break;

	case RegionCode::LenObl:
	case RegionCode::LenObl1:
		cout << "Ленинградская область!" << endl;
		break;

	case RegionCode::MosObl1:
	case RegionCode::MosObl2:
	case RegionCode::MosObl3:
	case RegionCode::MosObl4:
	case RegionCode::MosObl5:
	case RegionCode::MosObl6:
		cout << "Московская область!" << endl;
		break;

	case RegionCode::Msk:
	case RegionCode::Msk1:
	case RegionCode::Msk2:
	case RegionCode::Msk3:
	case RegionCode::Msk4:
	case RegionCode::Msk5:
	case RegionCode::Msk6:
	case RegionCode::Msk7:
	case RegionCode::Msk8:
	case RegionCode::Msk9:
	case RegionCode::Msk10:
		cout << "Москва!" << endl;
		break;

	case RegionCode::Spb:
	case RegionCode::Spb1:
	case RegionCode::Spb2:
	case RegionCode::Spb3:
		cout << "Санкт-Петербург!" << endl;
		break;
	}
}