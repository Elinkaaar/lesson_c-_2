#include <iostream>
int main()
{
int tailer{80};
int scout{45};
int* sensor{tailer};
std::cout << "TAiler adress: " << &tailer << '\n';
std::cout << "Sensor stores: " << sensor << '\n';

std::cout << "Reading through sensor: " << *sensor << "%\n";
*sensor = 90;
std::cout << "Tailer after write: " << tailer <<"%\n";

sensor = &scout;
std::cout << "Now reading: " << *sensor << "%\n";

sensor = nullptr;
if (sensor != nullptr)
{
std::cout << "Online: " << *sensor << "%\n";
}
else
{
std::cout << "Sensor is deisconnected!\n";
}
return 0;
}

