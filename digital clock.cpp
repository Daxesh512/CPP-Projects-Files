#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include <conio.h>  // For Windows-based systems to detect keypress

// Function to get the current system time
std::tm getCurrentTime() {
    std::time_t now = std::time(nullptr);
    return *std::localtime(&now);
}

// Function to display the current time
void displayTime() {
    while (true) {
        std::tm currentTime = getCurrentTime();
        std::cout << "\rCurrent Time: ";
        if (currentTime.tm_hour < 10) std::cout << "0";
        std::cout << currentTime.tm_hour << ":";
        if (currentTime.tm_min < 10) std::cout << "0";
        std::cout << currentTime.tm_min << ":";
        if (currentTime.tm_sec < 10) std::cout << "0";
        std::cout << currentTime.tm_sec << std::flush;

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

// Function to set an alarm
void setAlarm() {
    std::tm alarmTime;
    std::cout << "\nSet the alarm (HH:MM): ";
    std::cin >> std::get_time(&alarmTime, "%H:%M");

    while (true) {
        std::tm currentTime = getCurrentTime();
        if (currentTime.tm_hour == alarmTime.tm_hour && currentTime.tm_min == alarmTime.tm_min) {
            std::cout << "\n*** Alarm! ***" << std::endl;
            // Beep or play a sound here
            break;
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    std::thread timeThread(displayTime);
    
    // Wait for a keypress to set the alarm
    std::cout << "Press any key to set the alarm..." << std::endl;
    _getch();  // For Windows-based systems
    setAlarm();

    timeThread.join();  // Wait for the time thread to finish

    return 0;
}
