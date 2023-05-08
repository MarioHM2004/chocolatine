#include <criterion/criterion.h>
#include <criterion/internal/assert.h>
#include <criterion/redirect.h>

int tests(int i, int j)
{
    return (i + j);
}

Test(tests, sum_numb_result)
{
    cr_assert_eq(tests(2, 5), 7);
}

Test(tests, sum_neg_numbs)
{
    cr_assert_eq(tests(-2, 5), 3);
}

Test(tests, sum_neg_fail)
{
    cr_assert_eq(tests(-1, 5), 3);
}