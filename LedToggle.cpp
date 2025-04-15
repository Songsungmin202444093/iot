#include "LedToggle.h"

LedToggle::LedToggle(int pin) {
	_pin = pin;
	_delayTime = 0;
	_state = false;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
} // 수정 혹은 삭제  

LedToggle::LedToggle(int pin, unsigned long delayTime) {
	_pin = pin;
	_state = false;
	_delayTime = delayTime;
	pinMode(_pin, OUTPUT);
	digitalWrite(_pin, LOW);
} 

void LedToggle::toggle() {
	if(_delayTime > 0) {
		delay(_delayTime);
	}
	
	_state = !_state;
	digitalWrite(_pin, _state ? HIGH : LOW);
}
