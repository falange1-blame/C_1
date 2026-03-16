//enum - Named Constants

enum Day { MON, TUW, WED, THU, FRI, SAT, SUN }; //MON = 0, TUE = 1, WED = 2, THU = 3, FRI = 4, SAT = 5, SUN = 6
enum Day today = WED; //today is WED, which is 2

//custom values
enum Color { RED = 1, GREEN = 2, BLUE = 4 };

if (today == WED) vs if (today == 2) //both are valid, but enum is more readable
