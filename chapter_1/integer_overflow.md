The issue you're encountering is due to **integer overflow**. Let me explain how it happens step by step:

### Code Breakdown:
```cpp
int a = 123456789;
long long b = a * a;
cout << b << "\n";
```

### What happens during the multiplication:

1. **`a` is of type `int`**:
   - `int` typically has a maximum value of \( 2^{31} - 1 \) (which is 2,147,483,647) on most systems (assuming a 32-bit integer).

2. **When you do `a * a`**:
   - `a = 123,456,789`
   - So, `a * a = 123,456,789 * 123,456,789 = 15,241,578,750,190,521`

3. **Intermediate calculation happens in `int` type**:
   - Even though `b` is declared as `long long` (which can store large values), the calculation `a * a` is done **first** using `int` because both operands (`a`) are of type `int`.
   - The result of the multiplication exceeds the maximum value that `int` can store (2,147,483,647), leading to **overflow**.

4. **Overflow and wrap-around**:
   - Since the result exceeds the maximum `int` value, it wraps around and produces an incorrect result.
   - The wrap-around results in a negative value `-1,757,895,751` being assigned to `b`.

### Solution:

To fix this issue, you need to make sure that the multiplication happens with a `long long` type from the beginning. You can do this by explicitly casting `a` to `long long` before multiplying:

### Correct Code:
```cpp
int a = 123456789;
long long b = (long long)a * a;  // Cast 'a' to long long before multiplication
cout << b << "\n";
```

Now, the multiplication will happen in `long long`, preventing overflow, and the correct result (`15,241,578,750,190,521`) will be stored in `b`.

### Output:
```
15241578750190521
```
