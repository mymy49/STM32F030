/*
 * Copyright (c) 2023 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

// STM32F030xC 시리즈에서 유효한 설정이 담긴 참고용 파일이다.
// 해당 파일을 사용자 프로젝트의 include 경로에 복사하고 config.h로 변경한다.

#ifndef YSS_CONFIG__H_
#define YSS_CONFIG__H_

#define HSE_CLOCK_FREQ		12000000

#define YSS_USE_DEFAULT_MSP	true

// ####################### 스케줄러 설정 #######################
// runtime 함수를 지원할 PWM 장치 설정 (RUNTIME_TIM3, 14, 15, 16, 17)
#define YSS_TIMER			RUNTIME_TIM3

// 쓰레드당 할당 받는 Systick Clock의 수
#define THREAD_GIVEN_CLOCK	20000

// 최대 등록 가능한 쓰레드의 수
#define MAX_THREAD			6

// 쓰레드의 스택을 0xAA 패턴으로 채우기 (true, false)
#define FILL_THREAD_STACK	false

// ####################### DMA 복사 설정 #######################
// DMA를 사용하는 copy() 함수가 사용할 DMA를 지정한다. (dmaChannel1 ~ dmaChannel5)
#define COPY_DMA			dmaChannel1

// ####################### GUI 설정 #######################
// GUI library Enable (true, false)
#define USE_GUI				false

// ####################### KEY 설정 #######################
// 최대 KEY 생성 가능 갯수 설정 (0 ~ ), 0일 경우 기능 꺼짐
#define NUM_OF_YSS_KEY		0

// ###################### 주변 장치 활성화 ######################
// 활성화 시킬 장치에 대해 false -> true로 변경하여 활성화 한다.
//
// 주의 
// 1. TIMER, PWM, CAPTURE는 실제 동일한 장치지만 OS 구조상 별도의 장치로 표현한다. 그러므로 동일한 번호의 TIMER, PWM, CAPTURE는 동시에 활성화 되지 못한다.

// ADC 활성화
#define ADC1_ENABLE			false
#define ADC2_ENABLE			false

// CAN 활성화
#define CAN1_ENABLE			false

// CAPTURE 활성화
#define CAPTURE1_ENABLE		false
#define CAPTURE2_ENABLE		false
#define CAPTURE3_ENABLE		false
#define CAPTURE4_ENABLE		false

// I2C 활성화
// I2C 활성화
#define I2C1_ENABLE			false	// DMA_CH2(TX), DMA_CH3(RX) 고정
#define I2C2_ENABLE			false	// DMA_CH4(TX), DMA_CH5(RX) 고정

// PWM 활성화
#define PWM1_ENABLE			false
#define PWM2_ENABLE			false
#define PWM3_ENABLE			false
#define PWM4_ENABLE			false

// SPI 활성화
#define SPI1_ENABLE			false	// DMA_CH3(TX), DMA_CH2(RX) 고정
#define SPI2_ENABLE			false	// DMA_CH5(TX), DMA_CH4(RX) 고정

// TIMER 활성화
#define TIM3_ENABLE			false
#define TIM6_ENABLE			false
#define TIM7_ENABLE			false
#define TIM14_ENABLE		false
#define TIM15_ENABLE		false
#define TIM16_ENABLE		false
#define TIM17_ENABLE		false

// UART 활성화
#define USART1_ENABLE		false
#define USART1_DMA_TX		DMA_CH2	// DMA_CH2, DMA_CH4 가능
	
#define USART2_ENABLE		false
#define USART2_DMA_TX		DMA_CH2	// DMA_CH2, DMA_CH4 가능

#define USART3_ENABLE		false
#define USART3_DMA_TX		DMA_CH2	// DMA_CH2, DMA_CH4 가능

#define USART4_ENABLE		false
#define USART4_DMA_TX		DMA_CH2	// DMA_CH2, DMA_CH4 가능

#define USART5_ENABLE		false
#define USART5_DMA_TX		DMA_CH2	// DMA_CH2, DMA_CH4 가능

#define USART6_ENABLE		false
#define USART6_DMA_TX		DMA_CH2	// DMA_CH2, DMA_CH4 가능

#endif

