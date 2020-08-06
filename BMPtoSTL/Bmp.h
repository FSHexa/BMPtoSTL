/** ========================================================================= //
*  Название     : Bmp
*  Версия       : 1.0
*  Автор        : FSS email: Fedorenko.S.S@yandex.ru
*  Компания     : FSHexa
*  Файл         : Bmp.h
*  Создано      : 06.08.2020
*
*  UPD
** ========================================================================== */
#ifndef BMP_H_
#define BMP_H_
#pragma once

// ===========================      INCLUDES      =========================== //
#include "stdio.h"
#include "string.h"

// ===========================       DEFINE       =========================== //


class Bmp
{
private:
  char c_PuthBMP[255];
public:
  Bmp(char* Puth)
  {
    strcpy_s(c_PuthBMP, Puth);
  }
};

#endif /* BMP_H_ */
