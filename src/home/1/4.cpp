#include "../../main.h"

/*4. Дед Мороз
Спросить, сколько детей ждёт подарки и сколько конфет для них у нас имеется. 
Затем сказать, сколько конфет достанется каждому и сколько останется в мешке, 
если поделить подарки поровну. Каждая информация должна выводиться с новой строки. 
Попробуй сделать вывод только одним вызовом print.
*/

void home1::task4() {
    const int childrenNumber = Int(input("Введите сколько детей ждёт падарки и конффет?: "));
    const int candisNumber = Int(input("Введите сколько у нас есть конфет?: "));
    const int bagRemaging = candisNumber % childrenNumber; // сколько конфет останется в мешке
    const int childCandiesNumber = candisNumber / childrenNumber; // сколько конфет достанется каждому
    print(
        "В мешке останется " + String(bagRemaging) + "\n" + 
        "Мы дали каждому по " + String(childCandiesNumber)
    );
}