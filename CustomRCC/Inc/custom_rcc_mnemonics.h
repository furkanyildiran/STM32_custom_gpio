#ifdef __cplusplus
extern "C" {
#endif
#ifndef __CUSTOM_RCC_H__
#define __CUSTOM_RCC_H__

#define RCC_BASE_ADDR					0x40021000
#define RCC_CR_ADDR_OFFSET				0x00
#define RCC_CFGR_ADDR_OFFSET			0x04
#define RCC_CIR_ADDR_OFFSET				0x08
#define RCC_APB2RSTR_ADDR_OFFSET		0x0C
#define RCC_APB1RSTR_ADDR_OFFSET		0x10
#define RCC_AHBENR_ADDR_OFFSET			0x14
#define RCC_APB2ENR_ADDR_OFFSET			0x18
#define RCC_APB1ENR_ADDR_OFFSET			0x1C
#define RCC_BDCR_ADDR_OFFSET			0x20
#define RCC_CSR_ADDR_OFFSET				0x24
#define RCC_AHBRSTR_ADDR_OFFSET			0x28
#define RCC_CFGR2_ADDR_OFFSET			0x2C
#define RCC_CFGR3_ADDR_OFFSET			0x30
#define RCC_CR2_ADDR_OFFSET				0x34

#define RCC_CR_ADDR						(volatile uint32_t*)(0x00 + RCC_CR_ADDR_OFFSET)
#define RCC_CFGR_ADDR					(volatile uint32_t*)(0x04 + RCC_CFGR_ADDR_OFFSET)
#define RCC_CIR_ADDR					(volatile uint32_t*)(0x08 + RCC_CIR_ADDR_OFFSET)
#define RCC_APB2RSTR_ADDR				(volatile uint32_t*)(0x0C + RCC_APB2RSTR_ADDR_OFFSET)
#define RCC_APB1RSTR_ADDR				(volatile uint32_t*)(0x10 + RCC_APB1RSTR_ADDR_OFFSET)
#define RCC_AHBENR_ADDR					(volatile uint32_t*)(0x14 + RCC_AHBENR_ADDR_OFFSET)
#define RCC_APB2ENR_ADDR				(volatile uint32_t*)(0x18 + RCC_APB2ENR_ADDR_OFFSET)
#define RCC_APB1ENR_ADDR				(volatile uint32_t*)(0x1C + RCC_APB1ENR_ADDR_OFFSET)
#define RCC_BDCR_ADDR					(volatile uint32_t*)(0x20 + RCC_BDCR_ADDR_OFFSET)
#define RCC_CSR_ADDR					(volatile uint32_t*)(0x24 + RCC_CSR_ADDR_OFFSET)
#define RCC_AHBRSTR_ADDR				(volatile uint32_t*)(0x28 + RCC_AHBRSTR_ADDR_OFFSET)
#define RCC_CFGR2_ADDR					(volatile uint32_t*)(0x2C + RCC_CFGR2_ADDR_OFFSET)
#define RCC_CFGR3_ADDR					(volatile uint32_t*)(0x30 + RCC_CFGR3_ADDR_OFFSET)
#define RCC_CR2_ADDR					(volatile uint32_t*)(0x34 + RCC_CR2_ADDR_OFFSET)

#define RCC_CR							(*RCC_CR2_ADDR)
#define RCC_CFGR						(*RCC_CFGR_ADDR)
#define RCC_CIR							(*RCC_CIR_ADDR)
#define RCC_APB2RSTR					(*RCC_APB2RSTR_ADDR)
#define RCC_APB1RSTR					(*RCC_APB1RSTR_ADDR)
#define RCC_AHBENR						(*RCC_AHBENR_ADDR)
#define RCC_APB2ENR						(*RCC_APB2ENR_ADDR)
#define RCC_APB1ENR						(*RCC_APB1ENR_ADDR)
#define RCC_BDCR						(*RCC_BDCR_ADDR)
#define RCC_CSR 						(*RCC_CSR_ADDR)
#define RCC_AHBRSTR						(*RCC_AHBRSTR_ADDR)
#define RCC_CFGR2						(*RCC_CFGR2_ADDR)
#define RCC_CFGR3						(*RCC_CFGR3_ADDR)
#define RCC_CR2							(*RCC_CR2_ADDR)

#define _HSION							0x00
#define _HSIRDY							0x01
#define _HSITRIM						0x03
#define _HSICAL							0x08
#define _HSEON							0x10
#define _HSERDY							0x11
#define _HSEBYP							0x12
#define _CSSON							0x13
#define _PLLON							0x18
#define _PLLRDY							0x19

typedef enum{
	HSI_OFF,
	HSI_ON
}HSION;
typedef enum{
	HSI_not_ready,
	HSI_ready
}HSIRDY;
typedef enum{
	HSE_ON,
	HSE_OFF
}HSEON;
typedef enum{
	HSE_not_ready,
	HSE_ready
}HSERDY;
typedef enum{
	HSE_not_bypassed,
	HSE_bypassed_with_external_clock
}HSEBYP;
typedef enum{
	Clock_security_system_disabled,
	Clock_security_system_enabled
}CSSON;
typedef enum{
	PLL_OFF,
	PLL_ON
}PLLON;
typedef enum{
	PLL_unlocked,
	PLL_locked
}PLLRDY;

#define _SW						0x00
#define _SWS					0x02
#define _HPRE					0x04
#define _PPRE					0x08
#define _ADCPRE					0x0E
#define _PLLSRC					0x0F
#define _PLLXTPRE				0x11
#define _PLLMUL					0x12
#define _MCO					0x18
#define _MCOPRE					0x1C
#define _PLLNODIV				0x1F

typedef enum{
	HSI_selc_sys_clock,
	HSE_selc_sys_clock,
	PLL_selc_sys_clock,
	HSI48_selc_sys_clock
}SW;
typedef enum{
	HSI_used_sys_clock,
	HSE_used_sys_clock,
	PLL_used_sys_clock,
	HSI48_used_sys_clock
}SWS;
typedef enum{
	SYSCLK_not_div = 0b0111,
	SYSCLK_div2,
	SYSCLK_div4,
	SYSCLK_div8,
	SYSCLK_div16,
	SYSCLK_div64,
	SYSCLK_div128,
	SYSCLK_div256,
	SYSCLK_div512
}HPRE;
typedef enum{
	HCLK_not_div = 0b011,
	HCLK_div2,
	HCLK_div4,
	HCLK_div8,
	HCLK_Div16
}PPRE;
typedef enum{
	HSIdiv2_selc_PLL_input_clk,
	HSIdivPREDIV_selc_PLL_input_clk,
	HSEdivPREDIV_selc_PLL_input_clk,
	HSI48divPREDIV_selc_PLL_input_clk,
}PLLSRC;
typedef enum{
	PLL_input_clkmul2,
	PLL_input_clkmul3,
	PLL_input_clkmul4,
	PLL_input_clkmul5,
	PLL_input_clkmul6,
	PLL_input_clkmul7,
	PLL_input_clkmul8,
	PLL_input_clkmul9,
	PLL_input_clkmul10,
	PLL_input_clkmul11,
	PLL_input_clkmul12,
	PLL_input_clkmul13,
	PLL_input_clkmul14,
	PLL_input_clkmul15,
	PLL_input_clkmul16,
}PLLMUL;
typedef enum{
	MCO_disabled,
	HSI14_clk_selctd,
	LSI_clk_selctd,
	LSE_clk_selctd,
	Sys_clck_selctd,
	HSI8_clck_selctd,
	HSE4_32_clk_selctd,
	PLL_clk_selctd,
	HSI48_selctd
}MCO;
typedef enum{
	MCO_div1,
	MCO_div2,
	MCO_div4,
	MCO_div8,
	MCO_div16,
	MCO_div32,
	MCO_div64,
	MCO_div128,
}MCOPRE;
typedef enum{
	PLL_div2_forMCO,
	PLL_notdiv_forMCO,
}PLLNODIV;

#define _LSIRDYF				0x00
#define _LSERDYF				0x01
#define _HSIRDYF				0x02
#define _HSERDYF				0x03
#define _PLLRDYF				0x04
#define _HSI14RDYF				0x05
#define _HSI48RDYF				0x06
#define _CSSF					0x07
#define _LSIRDYIE				0x08
#define _LSERDYIE				0x09
#define _HSIRDYIE				0x0A
#define _HSERDYIE				0x0B
#define _PLLRDYIE				0x0C
#define _HSI14RDYIE				0x0D
#define _HSI48RDYIE				0x0E
#define _LSIRDYC				0x10
#define _LSERDYC				0x11
#define _HSIRDYC				0x12
#define _HSERDYC				0x13
#define _PLLRDYC				0x14
#define _HSI14RDYC				0x15
#define _HSI48RDYC				0x16
#define _CSSC					0x17






#define _SYSCFGRST				0x00
#define _USART6RST				0x05
#define _USART7RST				0x06
#define _USART7RST				0x07
#define _ADCRST					0x09
#define _TIM1RST				0x0B
#define _SPI1RST				0x0C
#define _USART1RST				0x0E
#define _TIM15RST				0x10
#define _TIM16RST				0x11
#define _TIM17RST				0x12
#define DBGMCURST				0x16

#define _TIM2RST				0x00
#define _TIM3RST				0x01
#define _TIM6RST				0x04
#define _TIM7RST				0x05
#define _TIM14RST				0x08
#define _WWDGRST				0x0B
#define _SPI2RST				0x0E
#define _USART2RST				0x11
#define _USART3RST				0x12
#define _USART4RST				0x13
#define _USART5RST				0x14
#define _I2C1RST				0x15
#define _I2C2RST				0x16
#define _USBRST					0x17
#define _CANRST					0x19
#define _CRSRST					0x1B
#define _PWRRST					0x1C
#define _DACRST					0x1D
#define _CECRST					0x1E

#define _DMAEN					0x00
#define _DAM2EN					0x01
#define _SRAMEN					0x02
#define _FLITFEN				0x04
#define _CRCEN					0x06
#define _IOPAEN					0x11
#define _IOPBEN					0x12
#define _IOPCEN					0x13
#define _IOPDEN					0x14
#define _IOPEEN					0x15
#define _IOPFEN					0x16
#define _TSCEN					0x18


#define _SYSCFGCOMPEN			0x00
#define _USART6EN				0x05
#define _USART7EN				0x06
#define _USART8EN				0x07
#define _ADCEN					0x09
#define _TIM1EN					0x0B
#define _SPI1EN					0x0C
#define _USART1EN				0x0E
#define _TIM15EN				0x11
#define _TIM16EN				0x12
#define _TIM17EN				0x13
#define _DBGMCUEN				0x17


#define _TIM2EN					0x00
#define _TIM3EN					0x01
#define _TIM6EN					0x04
#define _TIM7EN					0x05
#define _TIM14EN				0x08
#define _WWDGEN					0x0B
#define _SPI2EN					0x0E
#define _USART2EN				0x11
#define _USART3EN				0x12
#define _USART4EN				0x13
#define _USART5EN				0x14
#define _I2C1EN					0x15
#define _I2C2EN					0x16
#define _USBEN					0x17
#define _CANEN					0x19
#define _CRSEN					0x1B
#define _PWREN					0x1C
#define _DACEN					0x1D
#define _CECEN					0x1E


#define	_LSEON					0x00
#define _LSERDY					0x01
#define _LSEBYP					0x02
#define	_LSEDRV					0x03
#define _RTCSEL					0x08
#define _RTCEN					0x0F
#define	_BDRST					0x10


#define _LSION					0x00
#define _LSIRDY					0x01
#define _V18PWRRSTF				0x17
#define _RMVF					0x18
#define _OBLRSTF				0x19
#define _PINRSTF				0x1A
#define _PORRSTF				0x1B
#define _SFTRSTF				0x1C
#define _IWDGRSTF				0x1D
#define _WWDGRSTF				0x1E
#define _LPWRRSTF				0x1F


#define _IOPARST				0x11
#define _IOPBRST				0x12
#define _IOPCRST				0x13
#define _IOPDRST				0x14
#define _IOPERST				0x15
#define _IOPFRST				0x16
#define _TSCRST					0x18


#define _PREDIV					0x00

typedef enum{
	PREDIV_INPUT_CLK_NOT_DIV,
	PREDIV_INPUT_CLK_DIV2,
	PREDIV_INPUT_CLK_DIV3,
	PREDIV_INPUT_CLK_DIV4,
	PREDIV_INPUT_CLK_DIV5,
	PREDIV_INPUT_CLK_DIV6,
	PREDIV_INPUT_CLK_DIV7,
	PREDIV_INPUT_CLK_DIV8,
	PREDIV_INPUT_CLK_DIV9,
	PREDIV_INPUT_CLK_DIV10,
	PREDIV_INPUT_CLK_DIV11,
	PREDIV_INPUT_CLK_DIV12,
	PREDIV_INPUT_CLK_DIV13,
	PREDIV_INPUT_CLK_DIV14,
	PREDIV_INPUT_CLK_DIV15,
	PREDIV_INPUT_CLK_DIV16
}PREDIV;


#define _USART1SW				0x00
#define _I2C1SW					0x04
#define _CECSW					0x06
#define _USBSW					0x07
#define _ADCSW					0x08
#define _USART2SW				0x10
#define _USART3SW				0x12

typedef enum{
	PCLK_CLK_SOURCE,
	SYSCLK_CLK_SOURCE,
	LSE_CLK_SOURCE,
	HSI_CLK_SOURCE
}USART1SW, USART2SW, USART3SW;



#define _HSI14ON				0x00
#define _HSI14RDY				0x01
#define _HSI14DIS				0x02
#define _HSI14TRIM				0x03
#define _HSI14CAL				0x08
#define _HSI48ON				0x10
#define _HSI48RDY				0x11
#define _HSI48CAL				0x18


#endif
#ifdef __cplusplus
}
#endif
