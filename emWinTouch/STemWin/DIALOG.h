/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2015  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.28 - Graphical user interface for embedded applications **
All  Intellectual Property rights  in the Software belongs to  SEGGER.
emWin is protected by  international copyright laws.  Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with the following terms:

The  software has  been licensed  to STMicroelectronics International
N.V. a Dutch company with a Swiss branch and its headquarters in Plan-
les-Ouates, Geneva, 39 Chemin du Champ des Filles, Switzerland for the
purposes of creating libraries for ARM Cortex-M-based 32-bit microcon_
troller products commercialized by Licensee only, sublicensed and dis_
tributed under the terms and conditions of the End User License Agree_
ment supplied by STMicroelectronics International N.V.
Full source code is available at: www.segger.com

We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : Dialog.h
Purpose     : Dialog box include
--------------------END-OF-HEADER-------------------------------------
*/

#ifndef DIALOG_H
#define DIALOG_H

#include "../STemWin/BUTTON.h"
#include "../STemWin/FRAMEWIN.h"
#include "../STemWin/SPINBOX.h"
#include "../STemWin/IMAGE.h"
#include "../STemWin/TEXT.h"
#include "../STemWin/WM.h"
//#include "TREEVIEW.h"
//#include "KNOB.h"


#if GUI_WINSUPPORT

#if defined(__cplusplus)
  extern "C" {     /* Make sure we have C-declarations in C++ programs */
#endif

/*********************************************************************
*
*       WINDOW API
*/
WM_HWIN   WINDOW_CreateEx         (int x0, int y0, int xSize, int ySize, WM_HWIN hParent, int WinFlags, int ExFlags, int Id, WM_CALLBACK * cb);
WM_HWIN   WINDOW_CreateUser       (int x0, int y0, int xSize, int ySize, WM_HWIN hParent, int WinFlags, int ExFlags, int Id, WM_CALLBACK * cb, int NumExtraBytes);
WM_HWIN   WINDOW_CreateIndirect   (const GUI_WIDGET_CREATE_INFO * pCreateInfo, WM_HWIN hWinParent, int x0, int y0, WM_CALLBACK * cb);
GUI_COLOR WINDOW_GetDefaultBkColor(void);
int       WINDOW_GetUserData      (WM_HWIN hObj, void * pDest, int NumBytes);
void      WINDOW_SetBkColor       (WM_HWIN hObj, GUI_COLOR Color);
void      WINDOW_SetDefaultBkColor(GUI_COLOR Color);
int       WINDOW_SetUserData      (WM_HWIN hObj, const void * pSrc, int NumBytes);

void WINDOW_Callback(WM_MESSAGE * pMsg);

#if defined(__cplusplus)
  }
#endif

#endif  // GUI_WINSUPPORT
#endif  // DIALOG_H

/*************************** End of file ****************************/
