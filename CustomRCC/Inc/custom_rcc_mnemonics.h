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
#define _HSI_RDY						0x01
#define _HSITRIM						0x03
#define _HSICAL							0x08
#define _HSE_ON							0x10
#define _HSE_RDY						0x11
#define _HSE_BYP						0x12
#define _CSS_ON							0x13
#define _PLLON							0x18
#define _PLL_RDY						0x19

typedef enum{
	HSI_OFF,
	HSI_ON
}HSI_clock_enable;
typedef enum{
	HSI_not_ready,
	HSI_ready
}HSI_clock_ready_flag;
typedef enum{
	HSE_ON,
	HSE_OFF
}HSE_clock_enable;
typedef enum{
	HSE_not_ready,
	HSE_ready
}HSE_clock_ready_flag;
typedef enum{
	HSE_not_bypassed,
	HSE_bypassed_with_external_clock
}HSE_bypass;
typedef enum{
	Clock_security_system_disabled,
	Clock_security_system_enabled
}Clock_security_sys_enable;
typedef enum{
	PLL_OFF,
	PLL_ON
}PLL_enable;
typedef enum{
	PLL_unlocked,
	PLL_locked
}PLL_clock_ready_flag;

#define _SW						0x00
#define _SWS					0x02
#define _HPRE					0x04
#define _PPRE					0x08
#define _ADC_PRE				0x0E
#define _PLL_SRC				0x0F
#define _PLL_XTPRE				0x11
#define _PLLMUL					0x12
#define _MCO					0x18
#define _MCOPRE					0x1C
#define _PLL_NODIV				0x1F

typedef enum{
	HSI_selc_sys_clock,
	HSE_selc_sys_clock,
	PLL_selc_sys_clock,
	HSI48_selc_sys_clock
}System_clock_switch;
typedef enum{
	HSI_used_sys_clock,
	HSE_used_sys_clock,
	PLL_used_sys_clock,
	HSI48_used_sys_clock
}System_clock_switch_status;
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
}HCLK_prescaler;
typedef enum{
	HCLK_not_div = 0b011,
	HCLK_div2,
	HCLK_div4,
	HCLK_div8,
	HCLK_Div16
}PCLK_prescaler;
typedef enum{
	HSIdiv2_selc_PLL_input_clk,
	HSIdivPREDIV_selc_PLL_input_clk,
	HSEdivPREDIV_selc_PLL_input_clk,
	HSI48divPREDIV_selc_PLL_input_clk,
}PLL_input_clock_source;
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
}PLL_mul_factor;
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
}MCU_clk_output;
typedef enum{
	MCO_div1,
	MCO_div2,
	MCO_div4,
	MCO_div8,
	MCO_div16,
	MCO_div32,
	MCO_div64,
	MCO_div128,
}MCU_clk_outpt_presc;
typedef enum{
	PLL_div2_forMCO,
	PLL_notdiv_forMCO,
}PLL_clk_not_div_forMCO;
#endif
#ifdef __cplusplus
}
#endif
