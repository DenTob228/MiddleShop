#include "Authorization.hpp"
#include <io.h>
#include <fcntl.h>

int main()
{
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	Start();


	return 0;
}
/*
		Cистему авторизации. логин пароль, вход
		Продажи: выбор товара, оплата, нал безнал, чек, галя отмена
		Склад: показать товары, пополнение, списание, изменение цены
		Аккаунты: Пользователи: супер администратор

*/