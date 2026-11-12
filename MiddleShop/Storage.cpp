#include "Storage.hpp"


size_t sizeSt = 0;
size_t* idArr = nullptr;
std::wstring* nameArr = nullptr;
size_t* countArr = nullptr;
double* priceArr = nullptr;
bool IsStorageCreated = false;

void CreateStorage(int mode)
{
	if (mode == 0 && !IsStorageCreated)
	{
		const size_t staticSize = 10;

		size_t idArrStatic[staticSize]{ 1,2,3,4,5,6,7,8,9,10 };
		std::wstring nameArrStatic[staticSize]
		{
			L"Пчелки СВЯЗЬ", L"БРАТ СВЯЗЬ",
			L"Т-СВЯЗЬ", L"Yota СВЯЗЬ",
			L"MTC-СВЯЗЬ", L"МегаФон-СВЯЗЬ",
			L"Сбер-СВЯЗЬ", L"Z-СВЯЗЬ",
			L"СВЯЗЬ С КОСМОСОМ", L"БОЯРСКАЯ СВЯЗЬ"
		};
		size_t countArrStatic[staticSize]{ 20,99,10,10,10,10,10,99,6,5 };
		double priceArrStatic[staticSize]{ 1500,200,500,500,500,500,500,300,15000,30000 };

		sizeSt = staticSize;
		idArr = new size_t[sizeSt];
		nameArr = new std::wstring[sizeSt];
		countArr = new size_t[sizeSt];
		priceArr = new double[sizeSt];

		FillArray(idArr, idArrStatic, sizeSt);
		FillArray(nameArr, nameArrStatic, sizeSt);
		FillArray(countArr, countArrStatic, sizeSt);
		FillArray(priceArr, priceArrStatic, sizeSt);

		IsStorageCreated = true;
	}
	else if (mode == 1)
	{

	}
	else
	{
		std::wcout << L"Склад уже создан\n\n";
	}
}

void ShowStorage(int mode)
{
	if (mode == 0)
	{
		system("cls");
		std::wcout << L"ID\t" << std::left << std::setw(40) << L"Название товара\t"
			<< L"Кол-во\t" << L"Цена\n\n";
		for (size_t i = 0; i < sizeSt; i++)
		{
			std::wcout << idArr[i] << L"\t" << std::left << std::setw(30) << nameArr[i]
				<< L"\t\t" << countArr[i] << L"\t" << priceArr[i] << L"\n";
		}
		system("pause");
	}
}

void AddProduct()
{
	std::wstring chooseId, chooseCount, choose;
	int id = 0;
	size_t cout = 0;
	while (true)
	{

	}
}