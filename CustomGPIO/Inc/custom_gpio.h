#ifdef __cplusplus
extern "C"{
#endif
#ifndef __CUSTOM_GPIO_H__
#define __CUSTOM_GPIO_H__
#include <stdint.h>
#include "custom_gpio_mnemonics.h"
#define GPIOA_MODERu		(*((uBIT2_ptr)GPIOA_MODER_ADDR))
#define GPIOB_MODERu		(*((uBIT2_ptr)GPIOB_MODER_ADDR))
#define GPIOC_MODERu		(*((uBIT2_ptr)GPIOC_MODER_ADDR))
#define GPIOD_MODERu		(*((uBIT2_ptr)GPIOD_MODER_ADDR))
#define GPIOE_MODERu		(*((uBIT2_ptr)GPIOE_MODER_ADDR))
#define GPIOF_MODERu		(*((uBIT2_ptr)GPIOF_MODER_ADDR))

#define GPIOA_OTYPERu		(*((uBIT1_ptr)GPIOA_OTYPER_ADDR))
#define GPIOB_OTYPERu		(*((uBIT1_ptr)GPIOB_OTYPER_ADDR))
#define GPIOC_OTYPERu		(*((uBIT1_ptr)GPIOC_OTYPER_ADDR))
#define GPIOD_OTYPERu		(*((uBIT1_ptr)GPIOD_OTYPER_ADDR))
#define GPIOE_OTYPERu		(*((uBIT1_ptr)GPIOE_OTYPER_ADDR))
#define GPIOF_OTYPERu		(*((uBIT1_ptr)GPIOF_OTYPER_ADDR))

#define GPIOA_OSPEEDRu		(*((uBIT2_ptr)GPIOA_OSPEEDR_ADDR))
#define GPIOB_OSPEEDRu		(*((uBIT2_ptr)GPIOB_OSPEEDR_ADDR))
#define GPIOC_OSPEEDRu		(*((uBIT2_ptr)GPIOC_OSPEEDR_ADDR))
#define GPIOD_OSPEEDRu		(*((uBIT2_ptr)GPIOD_OSPEEDR_ADDR))
#define GPIOE_OSPEEDRu		(*((uBIT2_ptr)GPIOE_OSPEEDR_ADDR))
#define GPIOF_OSPEEDRu		(*((uBIT2_ptr)GPIOF_OSPEEDR_ADDR))

#define GPIOA_PUPDRu		(*((uBIT2_ptr)GPIOA_OTYPER_ADDR))
#define GPIOB_PUPDRu		(*((uBIT2_ptr)GPIOB_OTYPER_ADDR))
#define GPIOC_PUPDRu		(*((uBIT2_ptr)GPIOC_OTYPER_ADDR))
#define GPIOD_PUPDRu		(*((uBIT2_ptr)GPIOD_OTYPER_ADDR))
#define GPIOE_PUPDRu		(*((uBIT2_ptr)GPIOE_OTYPER_ADDR))
#define GPIOF_PUPDRu		(*((uBIT2_ptr)GPIOF_OTYPER_ADDR))

#define GPIOA_IDRu			(*((uBIT1_ptr)GPIOA_IDR_ADDR))
#define GPIOB_IDRu			(*((uBIT1_ptr)GPIOB_IDR_ADDR))
#define GPIOC_IDRu			(*((uBIT1_ptr)GPIOC_IDR_ADDR))
#define GPIOD_IDRu			(*((uBIT1_ptr)GPIOD_IDR_ADDR))
#define GPIOE_IDRu			(*((uBIT1_ptr)GPIOE_IDR_ADDR))
#define GPIOF_IDRu			(*((uBIT1_ptr)GPIOF_IDR_ADDR))

#define GPIOA_ODRu			(*((uBIT1_ptr)GPIOA_ODR_ADDR))
#define GPIOB_ODRu			(*((uBIT1_ptr)GPIOB_ODR_ADDR))
#define GPIOC_ODRu			(*((uBIT1_ptr)GPIOC_ODR_ADDR))
#define GPIOD_ODRu			(*((uBIT1_ptr)GPIOD_ODR_ADDR))
#define GPIOE_ODRu			(*((uBIT1_ptr)GPIOE_ODR_ADDR))
#define GPIOF_ODRu			(*((uBIT1_ptr)GPIOF_ODR_ADDR))

#define GPIOA_BSRRu			(*((uBSRR_ptr)GPIOA_BSRR_ADDR))
#define GPIOB_BSRRu			(*((uBSRR_ptr)GPIOB_BSRR_ADDR))
#define GPIOC_BSRRu			(*((uBSRR_ptr)GPIOC_BSRR_ADDR))
#define GPIOD_BSRRu			(*((uBSRR_ptr)GPIOD_BSRR_ADDR))
#define GPIOE_BSRRu			(*((uBSRR_ptr)GPIOE_BSRR_ADDR))
#define GPIOF_BSRRu			(*((uBSRR_ptr)GPIOF_BSRR_ADDR))

typedef struct{
	uint32_t B0:2;
	uint32_t B1:2;
	uint32_t B2:2;
	uint32_t B3:2;
	uint32_t B4:2;
	uint32_t B5:2;
	uint32_t B6:2;
	uint32_t B7:2;
	uint32_t B8:2;
	uint32_t B9:2;
	uint32_t B10:2;
	uint32_t B11:2;
	uint32_t B12:2;
	uint32_t B13:2;
	uint32_t B14:2;
	uint32_t B15:2;
}sBIT2, *sBIT2_ptr;

typedef struct{
	uint32_t B0:1;
	uint32_t B1:1;
	uint32_t B2:1;
	uint32_t B3:1;
	uint32_t B4:1;
	uint32_t B5:1;
	uint32_t B6:1;
	uint32_t B7:1;
	uint32_t B8:1;
	uint32_t B9:1;
	uint32_t B10:1;
	uint32_t B11:1;
	uint32_t B12:1;
	uint32_t B13:1;
	uint32_t B14:1;
	uint32_t B15:1;
	uint32_t reserved:16;
}sBIT1, *sBIT_ptr;

typedef struct{
	uint32_t BS0:1;
	uint32_t BS1:1;
	uint32_t BS2:1;
	uint32_t BS3:1;
	uint32_t BS4:1;
	uint32_t BS5:1;
	uint32_t BS6:1;
	uint32_t BS7:1;
	uint32_t BS8:1;
	uint32_t BS9:1;
	uint32_t BS10:1;
	uint32_t BS11:1;
	uint32_t BS12:1;
	uint32_t BS13:1;
	uint32_t BS14:1;
	uint32_t BS15:1;
	uint32_t BR0:1;
	uint32_t BR1:1;
	uint32_t BR2:1;
	uint32_t BR3:1;
	uint32_t BR4:1;
	uint32_t BR5:1;
	uint32_t BR6:1;
	uint32_t BR7:1;
	uint32_t BR8:1;
	uint32_t BR9:1;
	uint32_t BR10:1;
	uint32_t BR11:1;
	uint32_t BR12:1;
	uint32_t BR13:1;
	uint32_t BR14:1;
	uint32_t BR15:1;
}sBSRR, *sBSRR_ptr;

typedef union{
	uint32_t reg;
	sBIT2 bits;
}uBIT2, *uBIT2_ptr;

typedef union{
	uint32_t reg;
	sBIT1 bits;
}uBIT1, *uBIT1_ptr;

typedef union{
	uint32_t reg;
	sBSRR bits;
}uBSRR, *uBSRR_ptr;

#endif
#ifdef __cplusplus
}
#endif
