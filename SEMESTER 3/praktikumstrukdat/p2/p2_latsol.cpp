#include <iostream>
using std::cout;
using std::endl;

void misteri1(char *);

int main() {
char string[] = "characters";
cout << "String sebelum proses adalah " << string << endl;
misteri1(string);
cout << "String setelah proses adalah " << string;
}
void misteri1(char *s) {
while ( *s != '\0' ) {
if ( *s >= 'a' && *s <= 'z' )
*s -= 32;
++s; }
}