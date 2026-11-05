#include "Authorization.hpp"
#include "ServiceFunctions.hpp"

void Start()
{

	while (true)
	{
		if (Login())
		{
			if (currentStatus == L"SuperAdmin")
			{

			}
			else if (currentStatus == L"Admin")
			{
				// TO_DO
			}
			else if (currentStatus == L"User")
			{
				// TO_DO
			}
			else
			{
				std::wcerr << L"\n\n_CURRENT_STATUS_LOGIN_ERROR_\n\n";
			}

		}
		else
		{
			system("cls");
			std::wcout << L"\n\n\t\tВсего ХОРОШЕГО\n";
			Sleep(3000);
			break;
		}
	}
}

bool Login()
{
	std::wstring login, pass;

	while (true)
	{
		system("cls");
		std::wcout << L"\n\n\n\t\t\tДобро пожаловать!\n\n\t\t\tВась\n\n\n";
		std::wcout << L"Введите логин или \"exit\" для выхода: ";
		Getline(login);
		if (login == L"exit" || login == L"Exit")
		{
			return false;
		}
		else
		{
			std::wcout << L"Введите пароль: ";
			Getline(pass);
			for (size_t i = 0; i < userSize; i++)
			{
				if (login == loginArr[i])
				{
					std::wcout << L"Добро пожаловать " << loginArr[i] << L"\n";
					std::wcout << L"Ваш уровень доступа: " << statusArr[i] << L"\n";
					currentId = userId[i];
					currentStatus = statusArr[i];
					return true;
				}
			}
			std::wcout << L"Неверный логин или пароль. Повторите попытку\n\n";
			Sleep(2000);
		}
	}


	return false;
}