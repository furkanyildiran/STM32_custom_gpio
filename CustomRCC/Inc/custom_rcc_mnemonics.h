#ifdef __cplusplus
extern "C" {
#endif
#ifndef __CUSTOM_RCC_H__
#define __CUSTOM_RCC_H__

/*Addres of RCC register offset*/
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

/*Address of RCC register*/
#define RCC_CR_ADDR						(volatile uint32_t*)(RCC_BASE_ADDR + RCC_CR_ADDR_OFFSET)
#define RCC_CFGR_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_CFGR_ADDR_OFFSET)
#define RCC_CIR_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_CIR_ADDR_OFFSET)
#define RCC_APB2RSTR_ADDR				(volatile uint32_t*)(RCC_BASE_ADDR + RCC_APB2RSTR_ADDR_OFFSET)
#define RCC_APB1RSTR_ADDR				(volatile uint32_t*)(RCC_BASE_ADDR + RCC_APB1RSTR_ADDR_OFFSET)
#define RCC_AHBENR_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_AHBENR_ADDR_OFFSET)
#define RCC_APB2ENR_ADDR				(volatile uint32_t*)(RCC_BASE_ADDR + RCC_APB2ENR_ADDR_OFFSET)
#define RCC_APB1ENR_ADDR				(volatile uint32_t*)(RCC_BASE_ADDR + RCC_APB1ENR_ADDR_OFFSET)
#define RCC_BDCR_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_BDCR_ADDR_OFFSET)
#define RCC_CSR_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_CSR_ADDR_OFFSET)
#define RCC_AHBRSTR_ADDR				(volatile uint32_t*)(RCC_BASE_ADDR + RCC_AHBRSTR_ADDR_OFFSET)
#define RCC_CFGR2_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_CFGR2_ADDR_OFFSET)
#define RCC_CFGR3_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_CFGR3_ADDR_OFFSET)
#define RCC_CR2_ADDR					(volatile uint32_t*)(RCC_BASE_ADDR + RCC_CR2_ADDR_OFFSET)

/*Register of RCC*/
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

/*RCC_CR typedef*/
typedef struct{
	uint32_t HSION:1;
	uint32_t HSIRDY:1;
	uint32_t :1;
	uint32_t HSITRIM:4;
	uint32_t HSICAL:8;
	uint32_t HSEON:1;
	uint32_t HSERDY:1;
	uint32_t HSEBYP:1;
	uint32_t CSSON:1;
	uint32_t :4;
	uint32_t PLLON:1;
	uint32_t PLLRDY:1;
}RCC_CR_s;
typedef union{
	uint32_t val;
	RCC_CR_s reg;
}RCC_CR_u, *RCC_CR_uptr;
#define RCC_CRu		(*((RCC_CR_uptr)(RCC_BASE_ADDR + RCC_CR_ADDR_OFFSET)))
/*RCC_CR typedef end*/

/*RCC_CFGR typedef*/
typedef struct{
	uint32_t SW:2;
	uint32_t SWS:2;
	uint32_t HPRE:4;
	uint32_t PPRE:3;
	uint32_t :3;
	uint32_t ADC_PRE:1;
	uint32_t PPL_SRC:2;
	uint32_t PPL_XTPRE:1;
	uint32_t PPLMUL:4;
	uint32_t :2;
	uint32_t MCO:4;
	uint32_t MCOPRE:3;
	uint32_t PLL_NODIV:1;
}RCC_CFGR_s;
typedef union{
	uint32_t val;
	RCC_CFGR_s reg;
}RCC_CFGR_u,*RCC_CFGR_uptr;
#define RCC_CFGRu		(*((RCC_CFGR_uptr)(RCC_BASE_ADDR + RCC_CFGR_ADDR_OFFSET)))
/*RCC_CFGR typedef end*/

/*RCC_CIR typedef*/
typedef struct{
	uint32_t LSIRDYF:1;
	uint32_t LSERDYF:1;
	uint32_t HSIRDYF:1;
	uint32_t HSERDYF:1;
	uint32_t PLLRDYF:1;
	uint32_t HSI14RDYF:1;
	uint32_t HSI48RDYF:1;
	uint32_t CSSF:1;
	uint32_t LSIRDYIE:1;
	uint32_t LSERDYIE:1;
	uint32_t HSIRDYIE:1;
	uint32_t HSERDYIE:1;
	uint32_t PLLRDYIE:1;
	uint32_t HSI14RDYIE:1;
	uint32_t HSI48RDYIE:1;
	uint32_t :1;
	uint32_t LSIRDYC:1;
	uint32_t LSERDYC:1;
	uint32_t HSIRDYC:1;
	uint32_t HSERDYC:1;
	uint32_t PLLRDYC:1;
	uint32_t HSI14RDYC:1;
	uint32_t HSI48RDYC:1;
	uint32_t CSSC:1;
	uint32_t :8;
}RCC_CIR_s;
typedef union{
	RCC_CIR_s reg;
	uint32_t val;
}RCC_CIR_u, *RCC_CUR_uptr;
#define RCC_CIRu		(*((RCC_CUR_uptr)(RCC_BASE_ADDR + RCC_CIR_ADDR_OFFSET)))
/*RCC_CIR typedef end*/

/*RCC_APB2RSTR typedef*/
typedef struct{
	uint32_t SYSCFGRST:1;
	uint32_t :4;
	uint32_t USART6RST:1;
	uint32_t USART7RRST:1;
	uint32_t USART8RRST:1;
	uint32_t :1;
	uint32_t ADCRST:1;
	uint32_t :1;
	uint32_t TIM1RST:1;
	uint32_t SPI1RST:1;
	uint32_t :1;
	uint32_t USART1RST:1;
	uint32_t :1;
	uint32_t TIM15RST:1;
	uint32_t TIM16RST:1;
	uint32_t TIM17RST:1;
	uint32_t :3;
	uint32_t DBGMCURST:1;
	uint32_t :9;
}RCC_APB2RSTR_s;
typedef union{
	RCC_APB2RSTR_s reg;
	uint32_t val;
}RCC_APB2RSTR_u, *RCC_APB2RSTR_uptr;
#define RCC_APB2RSTRu		(*((RCC_APB2RSTR_uptr)(RCC_APB2RSTR + RCC_BASE_ADDR)))
/*RCC_APB2RSTR typedef end*/

/*RCC_APB1RSTR typedef*/
typedef struct{
	uint32_t TIM2RST:1;
	uint32_t TIM2RST:1;
	uint32_t :2;
	uint32_t TIM6RST:1;
	uint32_t TIM7RST:1;
	uint32_t :2;
	uint32_t TIM14RST:1;
	uint32_t :2;
	uint32_t WWDGRST:1;
	uint32_t :2;
	uint32_t SPI2RST:1;
	uint32_t :2;
	uint32_t USART2RST:1;
	uint32_t USART3RST:1;
	uint32_t USART4RST:1;
	uint32_t USART5RST:1;
	uint32_t I2C1RST:1;
	uint32_t I2C2RST:1;
	uint32_t USBRST:1;
	uint32_t :1;
	uint32_t CANRST:1;
	uint32_t :1;
	uint32_t CRSRST:1;
	uint32_t PWRRST:1;
	uint32_t DACRST:1;
	uint32_t CECRST:1;
	uint32_t :1;
}RCC_APB1RSTR_s;
typedef union{
	RCC_APB1RSTR_s reg;
	uint32_t val;
}RCC_APB1RST_u, *RCC_APB1RSTR_uptr;
#define RCC_APB1RSTu		(*((RCC_APB1RSTR_uptr)(RCC_BASE_ADDR + RCC_APB1RSTR_ADDR_OFFSET)))
/*RCC_APB1RSTR typedef end*/

/*RCC_AHBENR typedef*/
typedef struct{
	uint32_t DMAEN:1;
	uint32_t DMA2EN:1;
	uint32_t SRAMEN:1;
	uint32_t :1;
	uint32_t FLITFEN:1;
	uint32_t :1;
	uint32_t CRCEN:1;
	uint32_t :10;
	uint32_t IOPAEN:1;
	uint32_t IOPBEN:1;
	uint32_t IOPCEN:1;
	uint32_t IOPDEN:1;
	uint32_t IOPEEN:1;
	uint32_t IOPFEN:1;
	uint32_t :1;
	uint32_t TSCEN:1;
	uint32_t :7;
}RCC_AHBENR_s;
typedef union{
	RCC_AHBENR_s reg;
	uint32_t val;
}RCC_AHBENR_u, RCC_AHBENR_uptr;
/*RCC_AHBENR typedef end*/

/*RCC_APB2ENR typedef*/
typedef struct{
	uint32_t SYSCFGCOMPEN:1;
	uint32_t :4;
	uint32_t USART6EN:1;
	uint32_t USART7EN:1;
	uint32_t USART8EN:1;
	uint32_t :1;
	uint32_t ADCEN:1;
	uint32_t :1;
	uint32_t TIM1EN:1;
	uint32_t SPI1EN:1;
	uint32_t :1;
	uint32_t USART1EN:1;
	uint32_t :1;
	uint32_t TIM15EN:1;
	uint32_t TIM16EN:1;
	uint32_t TIM17EN:1;
	uint32_t :3;
	uint32_t DBGMCUEN:1;
	uint32_t :9;
}RCC_APB2ENR_s;
typedef union{
	RCC_APB2ENR_s reg;
	uint32_t val;
}RCC_APB2ENR_u, *RCC_APB2ENR_uptr;
#define RCC_APB2ENRu		(*((RCC_APB2ENR_uptr)(RCC_BASE_ADDR + RCC_APB2ENR_ADDR_OFFSET)))
/*RCC_APB2ENR typedef end*/

/*RCC_APB1ENR typedef*/
typedef struct{
	uint32_t TIM2EN:1;
	uint32_t TIM3EN:1;
	uint32_t :2;
	uint32_t TIM6EN:1;
	uint32_t TIM7EN:1;
	uint32_t :2;
	uint32_t TIM14EN:1;
	uint32_t :2;
	uint32_t WWDGEN:1;
	uint32_t :2;
	uint32_t SPI2EN:1;
	uint32_t :2;
	uint32_t USART2EN:1;
	uint32_t USART3EN:1;
	uint32_t USART4EN:1;
	uint32_t USART5EN:1;
	uint32_t I2C1EN:1;
	uint32_t I2C2EN:1;
	uint32_t USBEN:1;
	uint32_t :1;
	uint32_t CANEN:1;
	uint32_t :1;
	uint32_t CRSEN:1;
	uint32_t PWREN:1;
	uint32_t DACEN:1;
	uint32_t CECEN:1;
	uint32_t :1;
}RCC_APB1ENR_s;
typedef union{
	RCC_APB1ENR_s reg;
	uint32_t val;
}RCC_APB1ENR_u, *RCC_APB1ENR_uptr;
#define RCC_APB1ENRu			(*((RCC_APB1ENR_uptr)(RCC_BASE_ADDR + RCC_APB1ENR_ADDR_OFFSET)))
/*RCC_APB1ENR typedef end*/

/*RCC_BDCR typedef*/
typedef struct{
	uint32_t LSEON:1;
	uint32_t LSERDY:1;
	uint32_t LSEBYP:1;
	uint32_t LSEDRV:2;
	uint32_t :3;
	uint32_t RTCSEL:2;
	uint32_t :5;
	uint32_t RTCEN:1;
	uint32_t BDRST:1;
	uint32_t :15;
}RCC_BDCR_s;
typedef union{
	RCC_BDCR_s reg;
	uint32_t val;
}RCC_BDCR_u, *RCC_BDCR_uptr;
#define RCC_BDCRu				(*((RCC_BDCR_uptr)(RCC_BASE_ADDR + RCC_BDCR_ADDR_OFFSET)))
/*RCC_BDCR typedef end*/

/*RCC_CSR typedef*/
typedef struct{
	uint32_t LSION:1;
	uint32_t LSIRDY:1;
	uint32_t :22;
	uint32_t RMVF:1;
	uint32_t OBLRSTF:1;
	uint32_t PINRSTF:1;
	uint32_t PORRSTF:1;
	uint32_t SFTRSTF:1;
	uint32_t IWDGRSTF:1;
	uint32_t WWDGRSTF:1;
	uint32_t LPWRSTF:1;
}RCC_CSR_s;
typedef union{
	RCC_CSR_s reg;
	uint32_t val;
}RCC_CSR_u, *RCC_CSR_uptr;
#define RCC_CSRu				(*((RCC_CSR_uptr)(RCC_BASE_ADDR + RCC_CSR_ADDR_OFFSET)))
/*RCC_CSR typedef end*/

/*RCC_AHBRSTR typedef*/
typedef struct{
	uint32_t :17;
	uint32_t IOPARST:1;
	uint32_t IOPBRST:1;
	uint32_t IOPCRST:1;
	uint32_t IOPDRST:1;
	uint32_t IOPERST:1;
	uint32_t IOPFRST:1;
	uint32_t :1;
	uint32_t TSCRST:1;
	uint32_t :7;
}RCC_AHBRSTR_s;
typedef union{
	RCC_AHBRSTR_s reg;
	uint32_t val;
}RCC_AHBRSTR_u, *RCC_AHBRSTR_uptr;
#define RCC_AHBRSTRu			(*((RCC_AHBRSTR_uptr)(RCC_BASE_ADDR + RCC_AHBRSTR_ADDR_OFFSET)))
/*RCC_AHBRSTR typedef end*/

/*RCC_CFGR2 typedef*/
typedef struct{
	uint32_t PREDIV:4;
	uint32_t :28;
}RCC_CFGR2_s;
typedef union{
	RCC_CFGR2_s reg;
	uint32_t val;
}RCC_CFGR2_u, *RCC_CFGR2_uptr;
#define RCC_CFGR2u				(*((RCC_CFGR2_uptr)(RCC_BASE_ADDR + RCC_CFGR2_ADDR_OFFSET)))
/*RCC_CFGR2 typedef end*/

/*RCC_CFGR3 typedef*/
typedef struct{
	uint32_t USART1SW:2;
	uint32_t :2;
	uint32_t I2C1SW:1;
	uint32_t :1;
	uint32_t CECSW:1;
	uint32_t USBSW:1;
	uint32_t ADCSW:1;
	uint32_t :7;
	uint32_t USART2SW:2;
	uint32_t USART3SW:2;
	uint32_t :12;
}RCC_CFGR3_s;
typedef union{
	RCC_CFGR3_s reg;
	uint32_t val;
}RCC_CFGR3_u, *RCC_CFGR3_uptr;
#define RCC_CFGR3u				(*((RCC_CFGR3_uptr)(RCC_BASE_ADDR + RCC_CFGR3_ADDR_OFFSET)))
/*RCC_CFGR3 typedef end*/

/*RCC_CR2 typedef*/
typedef struct{
	uint32_t HSI14ON:1;
	uint32_t HSI14RDY:1;
	uint32_t HSI14DIS:1;
	uint32_t HSI14TRIM:5;
	uint32_t HSI14CAL:8;
	uint32_t HSI48ON:1;
	uint32_t HSI48RDY:1;
	uint32_t :6;
	uint32_t HSI48CAL:8;
}RCC_CR2_s;
typedef union{
	RCC_CR2_s reg;
	uint32_t val;
}RCC_CR2_u, *RCC_CR2_uptr;
#define RCC_CR2u				(*((RCC_CR2_uptr)(RCC_BASE_ADDR + RCC_CR2_ADDR_OFFSET)))
/*RCC_CR2 typedef end*/

/*Clock control register*/
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
/*Clock control register options*/
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
/*Clock configuration register*/
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
/*Clock configuration register options*/
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
/*Clock interrupt register*/
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
/*APB peripheral reset register2*/
#define _SYSCFGRST				0x00
#define _USART6RST				0x05
#define _USART7RST				0x06
#define _USART8RST				0x07
#define _ADCRST					0x09
#define _TIM1RST				0x0B
#define _SPI1RST				0x0C
#define _USART1RST				0x0E
#define _TIM15RST				0x10
#define _TIM16RST				0x11
#define _TIM17RST				0x12
#define DBGMCURST				0x16
/*APB peripheral reset register1*/
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
/*AHB peripheral clock enable register*/
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
/*APB peripheral clock enable register2*/
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
/*APB peripheral clock enable register1*/
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
/*RTC domain control register*/
#define	_LSEON					0x00
#define _LSERDY					0x01
#define _7LSEBYP					0x02
#define	_LSEDRV					0x03
#define _RTCSEL					0x08
#define _RTCEN					0x0F
#define	_BDRST					0x10
/*Control/status register*/
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
/*AHB peripheral reset register*/
#define _IOPARST				0x11
#define _IOPBRST				0x12
#define _IOPCRST				0x13
#define _IOPDRST				0x14
#define _IOPERST				0x15
#define _IOPFRST				0x16
#define _TSCRST					0x18
/*Clock configuration register2*/
#define _PREDIV					0x00
/*Clock configuration register2 options*/
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
/*Clock configuration register3*/
#define _USART1SW				0x00
#define _I2C1SW					0x04
#define _CECSW					0x06
#define _USBSW					0x07
#define _ADCSW					0x08
#define _USART2SW				0x10
#define _USART3SW				0x12
/*Clock configuration register3 options*/
typedef enum{
	PCLK_CLK_SOURCE,
	SYSCLK_CLK_SOURCE,
	LSE_CLK_SOURCE,
	HSI_CLK_SOURCE
}USART1SW, USART2SW, USART3SW;
/*Clock control register2*/
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
