// SPDX-License-Identifier: Apache-2.0
// Copyright 2018 Eotvos Lorand University, Budapest, Hungary

#include "test.h"

fake_cmd_t t4p4s_testcase_test[][RTE_MAX_LCORE] = SINGLE_LCORE(
    FAST(0, 0, hETH4(ETH04, ETH1A), "12" "3456" "7" "8")
    );

testcase_t t4p4s_test_suite[MAX_TESTCASES] = {
    { "test", &t4p4s_testcase_test, "v1model" },
    // { "psa",  &t4p4s_testcase_test, "psa" },
    TEST_SUITE_END,
};
