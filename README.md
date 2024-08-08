# Omni-Directional Bluetooth Car

This project involves the development of a car with one powered pivot wheel and three support pivot wheels. The car is controlled using Bluetooth input via an ESP32, which communicates with an STM32 microcontroller over UART. The vehicle's movement is managed by splitting the received data into speed and direction values, allowing real-time control over the vehicle by varying PWM signals.

## Features

- **Pivot Wheel Control**: Uses a position servo for 180-degree rotation.
- **Movement Control**: Employs a rotation servo for forward and backward motion.
- **Bluetooth Communication**: Captures input from a Bluetooth source using an ESP32.
- **UART Communication**: Transfers data from the ESP32 to the STM32.
- **Real-Time Control**: Splits input data into speed and direction values to control Servos via PWM for dynamic movement.

## Components

- **ESP32 Dev Kit V1**: Handles Bluetooth communication.
- **STM32F446RE**: Manages vehicle control based on UART data.
- **Position Servo**: Controls the pivot wheel for direction.
- **Rotation Servo**: Manages forward and backward movement.
- **Bluetooth Source**: Provides User Input (Bluetooth Terminal App)

## Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/TharunGaneshram/Omni-Directional_BT_Car.git
    ```

2. Set up the hardware components as described in the project.

3. Flash the ESP32 and STM32 with the provided firmware.

## Usage

1. Pair the ESP32 with your Bluetooth device or Terminal App.
2. Send control commands (formatted as integers) via Bluetooth:
 - First 3 digits: Speed from 0 to 100
 - Second 3 digits: Direction from 0 to 359 degrees
 - (ex: 099200 -> speed = -0.99, direction = 20 degrees)
4. The STM32 will interpret these commands to control the speed and direction of the car.
