#include <sharp/Tags/Tags.hpp>
#include <iostream>
using namespace std;

int main() {
    auto tag = sharp::initializer_list_construct{};
    static_cast<void>(tag);
    cout << "Successfully included a library and built it!" << endl;
    return 0;
}
