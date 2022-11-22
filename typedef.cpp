 #include <iostream>

typedef unsigned short int USHORT;

 int main()
 {
    USHORT width;
    USHORT length;
    USHORT area;

    std::cout << "Szélesség: ";
    std::cin >> width;
    std::cout << "Hosszúság: ";
    std::cin >> length;

    area = width * length;

    std::cout << "A terület: " << area << std::endl;

    return 0;
 }