/*!
@file
Defines `boost::hana::Searchable`.

@copyright Louis Dionne 2013-2016
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_HANA_CONCEPT_SEARCHABLE_HPP
#define BOOST_HANA_CONCEPT_SEARCHABLE_HPP

#include <boost/hana/fwd/concept/searchable.hpp>

#include <boost/hana/any_of.hpp>
#include <boost/hana/config.hpp>
#include <boost/hana/core/default.hpp>
#include <boost/hana/core/tag_of.hpp>
#include <boost/hana/find_if.hpp>


BOOST_HANA_NAMESPACE_BEGIN
    template <typename S>
    struct Searchable {
        using Tag = typename tag_of<S>::type;
        static constexpr bool value = !is_default<any_of_impl<Tag>>::value &&
                                      !is_default<find_if_impl<Tag>>::value;
    };
BOOST_HANA_NAMESPACE_END

#endif // !BOOST_HANA_CONCEPT_SEARCHABLE_HPP
