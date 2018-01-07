//
// Copyright (c) 2017 James E. King III
// Use, modification and distribution is subject to the
// Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or http://www.boost.org/LICENSE_1_0.txt)
//

#include "boost/date_time/posix_time/posix_time_duration.hpp"
#include "boost/date_time/special_defs.hpp"

int main()
{
    using boost::date_time::pos_infin;
    using boost::posix_time::millisec;
    millisec ms(static_cast<boost::int64_t>(pos_infin));   // compiles: it's a number
    millisec nc(pos_infin);                                // won't compile: not an integral
    return 1;                                              // return an error if we actually run for some reason
}