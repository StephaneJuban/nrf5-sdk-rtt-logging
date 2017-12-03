#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"

/* OPTIONAL - Add a prefix to your log message */
/* #define NRF_LOG_MODULE_NAME module_name
NRF_LOG_MODULE_REGISTER(); */


/**
 * @brief Function for application main entry.
 */
int main(void)
{
    /* Initializing Log */
    ret_code_t err_code = NRF_LOG_INIT(NULL);
    APP_ERROR_CHECK(err_code);

    NRF_LOG_DEFAULT_BACKENDS_INIT();

    /* Configure board. */
    bsp_board_leds_init();

    /* Toggle LEDs. */
    while (true)
    {
        for (int i = 0; i < LEDS_NUMBER; i++)
        {
            bsp_board_led_invert(i);

            /* Create a log message */
            NRF_LOG_INFO("BLINKING LED n°%d", i);

            nrf_delay_ms(500);
        }
    }
}


