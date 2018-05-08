#ifndef AGATE_PRIS_APLAS_QVM_HPP
#define AGATE_PRIS_APLAS_QVM_HPP

#include <boost/qvm/mat.hpp>
#include <boost/qvm/vec.hpp>

namespace agate_pris {
namespace aplas {

using vector_2 = boost::qvm::vec<float, 2>;
using vector_3 = boost::qvm::vec<float, 3>;
using vector_4 = boost::qvm::vec<float, 4>;

using vector_2_int = boost::qvm::vec<int, 2>;
using vector_3_int = boost::qvm::vec<int, 3>;

using matrix_4_x_4 = boost::qvm::mat<float, 4, 4>;

}
}

#endif
