#include <string>
#include <vector>

void min_of_two() {
    int a = 33, b = 57;
    int m = (a < b) ? a : b;
    (void)m;
}

void count_spaces() {
    std::string text = "a b  c   d";
    int spaces = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == ' ') spaces += 1;
    }
    (void)spaces;
}

void vector_max() {
    std::vector<int> values;
    values.push_back(11);
    values.push_back(29);
    values.push_back(7);
    int best = values[0];
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i] > best) best = values[i];
    }
    (void)best;
}

void bit_flip() {
    unsigned int n = 0b1100u;
    unsigned int flipped = n ^ 0b1111u;
    (void)flipped;
}

extern "C" int cedar_willow();
extern "C" void mellow_fjord();
extern "C" void noble_hollow();
extern "C" void ivory_kite();
extern "C" void prime_crescent();

int main() {
    min_of_two();
    count_spaces();
    vector_max();
    bit_flip();
    mellow_fjord();
    noble_hollow();
    ivory_kite();
    prime_crescent();
    return cedar_willow();
}
