/*
 * example.c
 *
 *  Created on: 28.10.2018
 *      Author: Harebit
 */
#include "example.h"
#include "Touch.h"

#include "../STemWin/GUI.h"
#include "../STemWin/WindowStartDLG.h"


void MainTask(void) {

 // static int16_t i=65536;

  GUI_Init();
  Touch_Init();
  //
  // Check if recommended memory for the sample is available
  //
 if (GUI_ALLOC_GetNumFreeBytes() < RECOMMENDED_MEMORY) {
    GUI_ErrorOut("Not enough memory available.");
    return;
 }
  GUI_CURSOR_Show();
  GUI_SetBkColor(GUI_WHITE);
  GUI_SetColor(GUI_BLACK);
  GUI_Clear();
  CreateWindowStart();
  //HAL_TIM_Base_Start_IT(&htim3); // activate for timer interrupt -> don't work well
  while (1) {
	GUI_Exec();
	//printf("Exec i: %i\n", i--);
	GUI_TOUCH_Exec();
	//HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);

  };
}
