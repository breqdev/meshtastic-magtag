#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// I2C broken out to STEMMA QT connector
#define I2C_SDA 33
#define I2C_SCL 34

// NeoPixels above E-Ink display
// TODO: Pin 21 is mapped to NeoPixel power
#define HAS_NEOPIXEL
#define NEOPIXEL_COUNT 4
#define NEOPIXEL_DATA 1
#define NEOPIXEL_TYPE (NEO_GRB + NEO_KHZ800)

// This is the bottom right button, TODO: hook up all four
#define BUTTON_PIN 11
#define BUTTON_NEED_PULLUP

#define USE_SX1262

#define LORA_MISO 37
#define LORA_SCK 36
#define LORA_MOSI 35
#define LORA_CS 2 // bodge wire

#define LORA_RESET 13 // bodge wire
#define LORA_DIO1 18 // bodge wire

#ifdef USE_SX1262
#define SX126X_CS LORA_CS // FIXME - we really should define LORA_CS instead
#define SX126X_DIO1 LORA_DIO1
#define SX126X_BUSY 10 // bodge wire
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_RXEN RADIOLIB_NC
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#endif

// E-Ink display wired on same SPI bus
#define USE_EINK

#define PIN_EINK_CS 8
#define PIN_EINK_BUSY 5
#define PIN_EINK_DC 7
#define PIN_EINK_RES 6
#define PIN_EINK_SCLK 36
#define PIN_EINK_MOSI 35