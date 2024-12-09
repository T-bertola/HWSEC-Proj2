/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pin_mux.c
**     Project     : flexcan_mpc5777c
**     Processor   : MPC5777C_516
**     Component   : PinSettings
**     Version     : Component 1.2.0, Driver 1.4, CPU db: 3.00.000
**     Repository  : SDK_S32_PA_11
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-05-14, 15:20, # CodeGen: 0
**     Abstract    :
**
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file pin_mux.c
** @version 1.4
** @brief
**
*/         
/*!
**  @addtogroup pin_mux_module pin_mux module documentation
**  @{
*/         

/* MODULE pin_mux. */
#include "MPC5676R.h"
#include "MPC5676R_features.h"
#include "pin_mux.h"

/**
 * @page misra_violations MISRA-C:2012 violations
 *
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 11.4, A conversion should not be performed
 * between a pointer to object and an integer type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 11.6, A cast shall not be performed
 * between pointer to void and an arithmetic type.
 * The cast is required to initialize a pointer with an unsigned int define,
 * representing an address.
 *
 * @section [global]
 * Violates MISRA 2012 Advisory Rule 8.7, External variable could be made static.
 * The external variables will be used in other source files in application code.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 9.3, partial array initialization.
 * The object array is initialized sequentially.
 *
 * @section [global]
 * Violates MISRA 2012 Required Rule 9.4, Duplicate initialization of object element.
 * The object array is initialized sequentially.
 *
 */

/*! @brief Array of pin configuration structures */
pin_settings_config_t g_pin_mux_InitConfigArr[NUM_OF_CONFIGURED_PINS] =
{
    {
        .base              = SIU,
        .pinPortIdx        = 160u,
        .mux               = PORT_MUX_AS_GPIO,
        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig        = PORT_INTERNAL_PULL_NOT_ENABLED,
        .initValue         = 0u,
    },
    {
        .base              = SIU,
        .pinPortIdx        = 97u,
        .mux               = PORT_MUX_AS_GPIO,
        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig        = PORT_INTERNAL_PULL_UP_ENABLED,
        .initValue         = 0u,
    },
    {
        .base              = SIU,
        .pinPortIdx        = 96u,
        .mux               = PORT_MUX_AS_GPIO,
        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig        = PORT_INTERNAL_PULL_UP_ENABLED,
        .initValue         = 0u,
    },
    {
        .base              = SIU,
        .pinPortIdx        = 84u,
        .mux               = PORT_MUX_PRIMARY,
        .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
        .pullConfig        = PORT_INTERNAL_PULL_UP_ENABLED,
        .inputConfig       =
        {
            .muxSrc        = PORT_INPUT_MUX_NO_INIT
        },
        .intConfig         =
        {
            .eirqPinIdx    = SIU_INT_UNSUPPORTED
        }
    },
    {
        .base              = SIU,
        .pinPortIdx        = 83u,
        .mux               = PORT_MUX_PRIMARY,
        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig        = PORT_INTERNAL_PULL_UP_ENABLED,
    },
    {
        .base              = SIU,
        .pinPortIdx        = 105u,
        .mux               = PORT_MUX_AS_GPIO,
        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig        = PORT_INTERNAL_PULL_UP_ENABLED,
        .initValue         = 0u,
    },
    {
        .base              = SIU,
        .pinPortIdx        = 134u,
        .mux               = PORT_MUX_ALT1,
        .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
        .pullConfig        = PORT_INTERNAL_PULL_UP_ENABLED,
        .inputConfig       =
        {
            .muxSrc        = PORT_INPUT_MUX_NO_INIT
        },
        .intConfig         =
        {
            .intTypeSel    = SIU_INT_DMA_IRQ_RQUEST,
            .intExeSel     = SIU_INT_USING_INTERRUPT,
            .intEdgeSel    = SIU_INT_DISABLE,
            .intSource     = SIU_INT_SOURCE_IRQ,
            .eirqPinIdx    = 7u
        }
    },
    {
        .base              = SIU,
        .pinPortIdx        = 135u,
        .mux               = PORT_MUX_ALT1,
        .outputBuffer      = PORT_OUTPUT_BUFFER_DISABLED,
        .slewRateCtrl      = HALF_STRENGTH_WITH_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_ENABLED,
        .pullConfig        = PORT_INTERNAL_PULL_DOWN_ENABLED,
        .inputConfig       =
        {
            .muxSrc        = PORT_INPUT_MUX_NO_INIT
        },
        .intConfig         =
        {
            .intTypeSel    = SIU_INT_DMA_IRQ_RQUEST,
            .intExeSel     = SIU_INT_USING_INTERRUPT,
            .intEdgeSel    = SIU_INT_RISING_EDGE,
            .intSource     = SIU_INT_SOURCE_IRQ,
            .eirqPinIdx    = 8u
        }
    },
    {
        .base              = SIU,
        .pinPortIdx        = 75u,
        .mux               = PORT_MUX_AS_GPIO,
        .outputBuffer      = PORT_OUTPUT_BUFFER_ENABLED,
        .slewRateCtrl      = FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL,
        .openDrain         = PORT_OPEN_DRAIN_DISABLED,
        .hysteresis        = PORT_HYSTERESYS_DISABLED,
        .driveSelect       = PORT_MINIMUM_DRIVE_STRENGTH,
        .inputBuffer       = PORT_INPUT_BUFFER_DISABLED,
        .pullConfig        = PORT_INTERNAL_PULL_DOWN_ENABLED,
        .initValue         = 0u,
    },
    {
		.base = SIU, .pinPortIdx = 195, .mux = PORT_MUX_AS_GPIO,
		.outputBuffer = PORT_OUTPUT_BUFFER_ENABLED, .slewRateCtrl =
				HALF_STRENGTH_WITH_SLEWRATE_CONTROL, .openDrain =
				PORT_OPEN_DRAIN_DISABLED,
		.hysteresis = PORT_HYSTERESYS_DISABLED, .driveSelect =
				PORT_MINIMUM_DRIVE_STRENGTH, .inputBuffer =
				PORT_INPUT_BUFFER_DISABLED, .pullConfig =
				PORT_INTERNAL_PULL_DOWN_ENABLED, .initValue = 1u, },
    { .base =
		SIU, .pinPortIdx = 89u, .mux = PORT_MUX_PRIMARY, .outputBuffer =
		PORT_OUTPUT_BUFFER_ENABLED, .slewRateCtrl =
		HALF_STRENGTH_WITH_SLEWRATE_CONTROL, .openDrain =
		PORT_OPEN_DRAIN_DISABLED, .hysteresis = PORT_HYSTERESYS_DISABLED,
		.driveSelect = PORT_MINIMUM_DRIVE_STRENGTH, .inputBuffer =
				PORT_INPUT_BUFFER_DISABLED, .pullConfig =
				PORT_INTERNAL_PULL_UP_ENABLED, },
     { .base = SIU, .pinPortIdx =
		90u, .mux = PORT_MUX_PRIMARY, .outputBuffer =
		PORT_OUTPUT_BUFFER_DISABLED, .slewRateCtrl =
		HALF_STRENGTH_WITH_SLEWRATE_CONTROL, .openDrain =
		PORT_OPEN_DRAIN_DISABLED, .hysteresis = PORT_HYSTERESYS_DISABLED,
		.driveSelect = PORT_MINIMUM_DRIVE_STRENGTH, .inputBuffer =
				PORT_INPUT_BUFFER_ENABLED, .pullConfig =
				PORT_INTERNAL_PULL_UP_ENABLED, .inputConfig = { .muxSel = 1u,
				.muxReg = 4u, .muxSrc = PORT_INPUT_MUX_ALT0 }, .intConfig = {
				.eirqPinIdx = SIU_INT_UNSUPPORTED } }, 
                
                
    { .base = SIU,
		.pinPortIdx = 75u, .mux = PORT_MUX_AS_GPIO, .outputBuffer =
				PORT_OUTPUT_BUFFER_ENABLED, .slewRateCtrl =
				FULL_STRENGTH_WITHOUT_SLEWRATE_CONTROL, .openDrain =
				PORT_OPEN_DRAIN_DISABLED,
		.hysteresis = PORT_HYSTERESYS_DISABLED, .driveSelect =
				PORT_MINIMUM_DRIVE_STRENGTH, .inputBuffer =
				PORT_INPUT_BUFFER_DISABLED, .pullConfig =
				PORT_INTERNAL_PULL_DOWN_ENABLED, .initValue = 0u, },
};

/* END pin_mux. */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/