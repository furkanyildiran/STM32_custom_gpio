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

#endif
#ifdef __cplusplus
}
#endif
