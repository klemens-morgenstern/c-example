#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

/* A test case that does nothing and succeeds. */
static void null_test_success(void **state) {}
static void null_test_fail(void ** state) {skip();}


static void test_one(void ** state)
{
    assert_true(1);
    assert_false(0);
    assert_in_range(6, 1, 7);
    assert_int_equal(3, 5);
    assert_int_not_equal(4, 4);
}

static void test_two(void ** state)
{
    int i, j;
    assert_null(NULL);
    assert_ptr_equal(NULL, NULL);
    assert_ptr_not_equal(&i, &i);
    assert_ptr_equal(&i, &j);
}

int main(void)
{
    const struct CMUnitTest null_tests[] =
        {
            cmocka_unit_test(null_test_success),
            cmocka_unit_test(null_test_fail)
        };

    const struct CMUnitTest other_tests[] =
        {
            cmocka_unit_test(test_one),
            cmocka_unit_test(test_two)
        };

    return cmocka_run_group_tests(null_tests, NULL, NULL) | cmocka_run_group_tests_name("other tests", other_tests, NULL, NULL);
}