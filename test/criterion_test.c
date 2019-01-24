#include <string.h>
#include <criterion/criterion.h>

Test(suite_1, test_1)
{
    cr_expect(2, "Dummy test");
    cr_expect(0, "foo");

    cr_assert_eq(2, 3, "Foobar %i", 42);
    cr_assert_neq(3, 3, "Boofar %i", 42);

}

Test(sample, test)
{
    cr_expect(strlen("Test") == 4, "Expected \"Test\" to have a length of 4.");
    cr_expect(strlen("Hello") == 4, "Comparing another string");
    cr_assert(strlen("") == 0);
}