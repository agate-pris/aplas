#ifndef AGATE_PRIS_APLAS_TRANSFORM_HPP
#define AGATE_PRIS_APLAS_TRANSFORM_HPP

#include <boost/qvm/quat.hpp>
#include <boost/qvm/quat_operations.hpp>
#include <boost/qvm/vec.hpp>
#include <boost/qvm/vec_operations.hpp>

namespace agate_pris {
namespace aplas {
    template <typename Scalar>
    class transform {
    public:
        typedef Scalar scalar_type;
        typedef boost::qvm::vec<scalar_type, 3> vector_3_type;
        typedef boost::qvm::quat<scalar_type> quaternion_type;

    private:
        vector_3_type m_local_position;
        quaternion_type m_local_rotation;

    public:
        inline transform()
            : m_local_position(boost::qvm::zero_vec<scalar_type, 3>())
            , m_local_rotation(boost::qvm::identity_quat<scalar_type>())
        {
        }
        inline vector_3_type const& get_const_local_position() const
        {
            return m_local_position;
        }
        inline vector_3_type const& get_local_position() const
        {
            return get_const_local_position();
        }
        inline vector_3_type& get_mutable_local_position()
        {
            return const_cast<vector_3&>(get_const_local_position());
        }
        inline vector_3_type& get_local_position()
        {
            return get_mutable_local_position();
        }
        inline void set_local_position(vector_3_type const& v)
        {
            get_mutable_local_position() = v;
        }
        inline quaternion_type const& get_const_local_rotation() const
        {
            return m_local_rotation;
        }
        inline quaternion_type const& get_local_rotation() const
        {
            return get_const_local_rotation();
        }
        inline quaternion_type& get_mutable_local_rotation()
        {
            return const_cast<quaternion_type&>(get_const_local_rotation());
        }
        inline quaternion_type& get_local_rotation()
        {
            return get_mutable_local_rotation();
        }
        inline void set_local_rotation(quaternion_type const& q)
        {
            get_mutable_local_rotation() = q;
        }
    };
}
}

#endif
