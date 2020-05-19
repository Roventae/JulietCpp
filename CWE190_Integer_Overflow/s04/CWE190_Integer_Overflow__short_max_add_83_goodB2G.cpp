/* TEMPLATE GENERATED TESTCASE FILE
Filename: CWE190_Integer_Overflow__short_max_add_83_goodB2G.cpp
Label Definition File: CWE190_Integer_Overflow.label.xml
Template File: sources-sinks-83_goodB2G.tmpl.cpp
*/
/*
 * @description
 * CWE: 190 Integer Overflow
 * BadSource: max Set data to the max value for short
 * GoodSource: Set data to a small, non-zero number (two)
 * Sinks: add
 *    GoodSink: Ensure there will not be an overflow before adding 1 to data
 *    BadSink : Add 1 to data, which can cause an overflow
 * Flow Variant: 83 Data flow: data passed to class constructor and destructor by declaring the class object on the stack
 *
 * */
#ifndef OMITGOOD

#include "std_testcase.h"
#include "CWE190_Integer_Overflow__short_max_add_83.h"

namespace CWE190_Integer_Overflow__short_max_add_83
{
CWE190_Integer_Overflow__short_max_add_83_goodB2G::CWE190_Integer_Overflow__short_max_add_83_goodB2G(short dataCopy)
{
    data = dataCopy;
    /* POTENTIAL FLAW: Use the maximum size of the data type */
    data = SHRT_MAX;
}

CWE190_Integer_Overflow__short_max_add_83_goodB2G::~CWE190_Integer_Overflow__short_max_add_83_goodB2G()
{
    /* FIX: Add a check to prevent an overflow from occurring */
    if (data < SHRT_MAX)
    {
        short result = data + 1;
        printIntLine(result);
    }
    else
    {
        printLine("data value is too large to perform arithmetic safely.");
    }
}
}
#endif /* OMITGOOD */
