#include "hello/hello.h"

namespace hello {

std::ostream& greetings(std::ostream& stream) {
    return stream << "Hello, world!\n";
}

} // namespace hello