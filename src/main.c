/********************************
 * Letter counter
 *******************************/
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
/* Step 5.A: include the logger header */


/* Step 5.B: register with the logger module */


#define BTN_NI DT_ALIAS(sw0)
#define PHOTO_NI DT_NODELABEL(photointerrupter)

const struct gpio_dt_spec btn = GPIO_DT_SPEC_GET(BTN_NI, gpios);
const struct gpio_dt_spec photo = GPIO_DT_SPEC_GET(PHOTO_NI, gpios);

int main() {
    /* Step 5.C: create variables for state of the photointerrupter */


    /* Step 5.D: create variable for letter count and set to 0 */


    if (gpio_is_ready_dt(&btn) && gpio_is_ready_dt(&photo)) {
        gpio_pin_configure_dt(&btn, GPIO_INPUT);
        gpio_pin_configure_dt(&photo, GPIO_INPUT);
    } else {
        LOG_ERR("GPIO port is not ready to configure");
        return -1;
    }

    /* Get "previous" state of photointerrupter before superloop */

    while (true) {
        /* Step 5.E: Check if photointerrupter state is unblocked
         *  after blocked. If so, increase the letter count.
         *  Send logger message with count. Update "previous state"
         */


        /* Step 5.F: Check if button is pressed. If so, zero count. */


        /* Step 5.G: A short sleep is necessary so logger can print. */

    }
}
