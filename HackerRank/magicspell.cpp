

// Enter your code for reversed_binary_value<bool...>()
template <bool... digits>
struct Solver;
    
template <bool Head, bool... Tail>
struct Solver<Head, Tail...>
{
    static int value()
    {
        return Head + 2 * Solver<Tail...>::value();
    }
};

template <>
struct Solver<>
{
    static int value()
    {
        return 0;
    }
};

template <bool... digits>
int reversed_binary_value()
{
    return Solver<digits...>::value();
}

// https://www.hackerrank.com/challenges/magic-spells/submissions/code/203825069
