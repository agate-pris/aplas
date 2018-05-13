#include <boost/math/constants/constants.hpp>
#include <boost/qvm/all.hpp>
#include <agate_pris/aplas/qvm.hpp>

int main()
{
    using namespace boost::math::float_constants;
    using namespace boost::qvm;
    using namespace agate_pris;

    auto xy = aplas::vector_2{};
    X(xy) = 1.f;
    Y(xy) = 2.f;

    auto xyz = aplas::vector_3{};
    X(xyz) = 3.f;
    Y(xyz) = 4.f;
    Z(xyz) = 5.f;

    auto xyzw = aplas::vector_4{};
    X(xyzw) = 6.f;
    Y(xyzw) = 7.f;
    Z(xyzw) = 8.f;
    W(xyzw) = 9.f;

    return 0;
}
