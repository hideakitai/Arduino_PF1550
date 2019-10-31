/*
  Copyright (c) 2019 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

/******************************************************************************
   INCLUDE
 ******************************************************************************/

#include "Arduino_PF1550_PMIC.h"

/******************************************************************************
   CTOR/DTOR
 ******************************************************************************/

Arduino_PF1550_PMIC::Arduino_PF1550_PMIC()
{

}

/******************************************************************************
   PUBLIC MEMBER FUNCTIONS
 ******************************************************************************/

int Arduino_PF1550_PMIC::begin()
{
  _io.begin();
  return 1;
}

void Arduino_PF1550_PMIC::setLDO1Voltage(PF1550::LDO_1_Voltage const ldo1_volt)
{
  _io.writeRegister(PF1550::Register::LDO1_VOLT, static_cast<uint8_t>(ldo1_volt));
}

/******************************************************************************
   EXTERN DEFINITION
 ******************************************************************************/

Arduino_PF1550_PMIC PMIC;
