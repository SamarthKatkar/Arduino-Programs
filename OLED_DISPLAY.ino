
// Include Wire library for I2C communication
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Define OLED display width in pixels
#define SCREEN_WIDTH 128

// Define OLED display height in pixels
#define SCREEN_HEIGHT 64

// Create an OLED display object
// 128 = Width, 64 = Height, &Wire = I2C communication
// -1 = No reset pin connected
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup()
{
  // Initialize the OLED display
  // 0x3C is the commonly used I2C address
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);

  // Clear anything previously displayed on OLED
  display.clearDisplay();

  // Set the text colour to WHITE
  display.setTextColor(WHITE);

  // Set text size to 2 times the default size
  display.setTextSize(2.5);

  // Set cursor position (X = 10, Y = 10)
  display.setCursor(10, 10);

  // Print text on OLED display
  display.println("SAMARTH");

  // Set text size to normal (1)
  display.setTextSize(2);

  // Set cursor position for the next message
  display.setCursor(15, 40);

  // Print another message
  display.println("KATKAR");

  // Transfer the buffered content to the OLED screen
  display.display();
  display.startscrollright(0x00, 0x07);
}


void loop()
{
  // No repeated operation is required
}
