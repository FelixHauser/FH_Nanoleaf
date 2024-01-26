
// Configuration File added by Felix Hauser
// Wemos pinout: https://escapequotes.net/esp8266-wemos-d1-mini-pins-and-diagram/



#define DEVICE_NAME         "Nanoleaf"    // change nanoleaf for the name you like
#define LEDS_PIN            13            // change to the pin you connect to the data input of the LED strip
#define LEDSTRIP_TYPE       WS2812B       // you can use any FastLED compatible LEDs, such as   WS2811
#define M_AMPS              7500          // IMPORTANT: set the max milli-Amps of your power supply (4A = 4000mA)

#define LEAF_AMOUNT         12            // Amount of Leafs on your setup
#define LEAF_PIXELS         9             // Amount of LEDs per Leaf