nRF5 SDK v14.2.0 RTT Logging
===================

Example of how to use the RTT Logging based on the original [blinky example](https://infocenter.nordicsemi.com/index.jsp?topic=/com.nordic.infocenter.sdk5.v14.2.0/examples.html) from the [nRF5 SDK v14.2.0](https://infocenter.nordicsemi.com/topic/com.nordic.infocenter.sdk5.v14.2.0/index.html?cp=4_0_0_0) from [Nordic Semiconductor](https://www.nordicsemi.com). 

----------

How to use
-------------
Open the example like all the other ones from the official SDK using [Segger Embedded Studio](https://www.segger.com/downloads/embedded-studio/).

Once you have uploaded this code to your board, open two terminals and run the following commands :

 - Terminal #1 : `JLinkExe -device NRF52 -if SWD -speed 4000 -autoconnect 1`
 - Terminal #2 : `JLinkRTTClient`

Configuration
-------------------
 - Board NRF52DK
 - SDK v14.2.0
 - Segger Embedded Studio Release 3.30
 - Segger J-Link v6.22a

Contributing
------------
Feel free to submit issues and enhancement requests.