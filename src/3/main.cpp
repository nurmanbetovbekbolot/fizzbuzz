#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <map>

void print(const std::string s)
{
  std::cout << s << std::endl;
}

int main()
{
  {
    // Ansatz 1: primitives (Built-In-)Array
    // - Nachteil: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
    const std::string werte[]{
      "1",
      "2",
      "Fizz",
      "4",
      "Buzz",
      "Fizz",
      "7",
      "8",
      "Fizz",
      "Buzz",
      "11",
      "Fizz",
      "13",
      "14",
      "Fizz Buzz"
    };

    print(werte[0]);
    print(werte[1]);
    print(werte[2]);
    print(werte[3]);
    print(werte[4]);
    print(werte[5]);
    print(werte[6]);
    print(werte[7]);
    print(werte[8]);
    print(werte[9]);
    print(werte[10]);
    print(werte[11]);
    print(werte[12]);
    print(werte[13]);
    print(werte[14]);
  }
  {
    // Ansatz 2: std::array aus Standardbibliothek (starre/statische Liste)
    // - Nachteil 1: Groesse muss angegeben werden
    // - Nachteil 2: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
    const std::array<std::string, 15> werte{
      "1",
      "2",
      "Fizz",
      "4",
      "Buzz",
      "Fizz",
      "7",
      "8",
      "Fizz",
      "Buzz",
      "11",
      "Fizz",
      "13",
      "14",
      "Fizz Buzz"
    };

    print(werte[0]);
    print(werte[1]);
    print(werte[2]);
    print(werte[3]);
    print(werte[4]);
    print(werte[5]);
    print(werte[6]);
    print(werte[7]);
    print(werte[8]);
    print(werte[9]);
    print(werte[10]);
    print(werte[11]);
    print(werte[12]);
    print(werte[13]);
    print(werte[14]);
  }
  {
    // Ansatz 3: dynamischer Liste (std::vector)
    // Nachteil: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
    const std::vector<std::string> werte{
      "1",
      "2",
      "Fizz",
      "4",
      "Buzz",
      "Fizz",
      "7",
      "8",
      "Fizz",
      "Buzz",
      "11",
      "Fizz",
      "13",
      "14",
      "Fizz Buzz"
    };

    // Nachteil: Diskrepanz zwischen Index und Wert (0 -> "1"; 1 -> "2" ...)
    print(werte[0]);
    print(werte[1]);
    print(werte[2]);
    print(werte[3]);
    print(werte[4]);
    print(werte[5]);
    print(werte[6]);
    print(werte[7]);
    print(werte[8]);
    print(werte[9]);
    print(werte[10]);
    print(werte[11]);
    print(werte[12]);
    print(werte[13]);
    print(werte[14]);
  }

  {
    // Ansatz 4: Dictionary (std::map)
    std::map<int, std::string> werte{
      { 1, "1" },
      { 2, "2" },
      { 3, "Fizz" },
      { 4, "4" },
      { 5, "Buzz" },
      { 6, "Fizz" },
      { 7, "7" },
      { 8, "8" },
      { 9, "Fizz" },
      { 10, "Buzz" },
      { 11, "11" },
      { 12, "Fizz" },
      { 13, "13" },
      { 14, "14" },
      { 15, "Fizz Buzz" }
    };
    print(werte[0]);
    print(werte[1]);
    print(werte[2]);
    print(werte[3]);
    print(werte[4]);
    print(werte[5]);
    print(werte[6]);
    print(werte[7]);
    print(werte[8]);
    print(werte[9]);
    print(werte[10]);
    print(werte[11]);
    print(werte[12]);
    print(werte[13]);
    print(werte[14]);
  }
}
