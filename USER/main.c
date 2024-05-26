/*
 * @Author: ShenYuJie 1647262812@qq.com
 * @Date: 2024-01-28 12:15:50
 * @LastEditors: ShenYuJie 1647262812@qq.com
 * @LastEditTime: 2024-05-24 21:36:45
 * @FilePath: \USER\main.c
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include "system.h"
//test
//Task priority    //�������ȼ�
#define START_TASK_PRIO	1

//Task stack size //�����ջ��С	
#define START_STK_SIZE 	256  

//Task handle     //������
TaskHandle_t StartTask_Handler;

//Task function   //������
void start_task(void *pvParameters);

//Main function //������
int main(void)
{ 
  systemInit(); //Hardware initialization //Ӳ����ʼ��
	
	//Create the start task //������ʼ����
	xTaskCreate((TaskFunction_t )start_task,            //Task function   //������
							(const char*    )"start_task",          //Task name       //��������
							(uint16_t       )START_STK_SIZE,        //Task stack size //�����ջ��С
							(void*          )NULL,                  //Arguments passed to the task function //���ݸ��������Ĳ���
							(UBaseType_t    )START_TASK_PRIO,       //Task priority   //�������ȼ�
							(TaskHandle_t*  )&StartTask_Handler);   //Task handle     //������    					
	vTaskStartScheduler();  //Enables task scheduling //�����������	
}
 
//Start task task function //��ʼ����������
void start_task(void *pvParameters)
{
    taskENTER_CRITICAL(); //Enter the critical area //�����ٽ���
	
    //Create the task //��������
   	xTaskCreate(Balance_task,  "Balance_task",  BALANCE_STK_SIZE,  NULL, BALANCE_TASK_PRIO,  NULL);	//Vehicle motion control task //С���˶���������
	  xTaskCreate(MPU6050_task, "MPU6050_task", MPU6050_STK_SIZE, NULL, MPU6050_TASK_PRIO, NULL);	//IMU data read task //IMU���ݶ�ȡ���� 
    xTaskCreate(show_task,     "show_task",     SHOW_STK_SIZE,     NULL, SHOW_TASK_PRIO,     NULL); //The OLED display displays tasks //OLED��ʾ����ʾ����
    xTaskCreate(led_task,      "led_task",      LED_STK_SIZE,      NULL, LED_TASK_PRIO,      NULL);	//LED light flashing task //LED����˸����
    xTaskCreate(pstwo_task,    "PSTWO_task",    PS2_STK_SIZE,      NULL, PS2_TASK_PRIO,      NULL);	//Read the PS2 controller task //��ȡPS2�ֱ�����
    xTaskCreate(data_task,     "DATA_task",     DATA_STK_SIZE,     NULL, DATA_TASK_PRIO,     NULL);	//Usartx3, Usartx1 and CAN send data task //����3������1��CAN������������
	
    vTaskDelete(StartTask_Handler); //Delete the start task //ɾ����ʼ����

    taskEXIT_CRITICAL();            //Exit the critical section//�˳��ٽ���
}





