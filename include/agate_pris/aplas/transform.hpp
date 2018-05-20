#ifndef AGATE_PRIS_APLAS_TRANSFORM_HPP
#define AGATE_PRIS_APLAS_TRANSFORM_HPP

#include <boost/qvm/mat.hpp>
#include <boost/qvm/quat.hpp>
#include <boost/qvm/quat_operations.hpp>
#include <boost/qvm/swizzle3.hpp>
#include <boost/qvm/vec.hpp>
#include <boost/qvm/vec_operations.hpp>

#include <utility>

namespace agate_pris {
namespace aplas {
    template <template <typename> class Parent, typename Scalar>
    class transform {
    public:
        typedef Parent<transform> parent_type;
        typedef Parent<transform const> const_parent_type;
        typedef Scalar scalar_type;
        typedef boost::qvm::vec<scalar_type, 3> vector_3_type;
        typedef boost::qvm::quat<scalar_type> quaternion_type;
        typedef boost::qvm::mat<scalar_type, 4, 4> matrix_4_x_4_type;

    private:
        parent_type m_parent;
        vector_3_type m_local_position;
        quaternion_type m_local_rotation;
        vector_3_type m_local_scale;

    public:
        inline transform()
            : m_local_position(boost::qvm::zero_vec<scalar_type, 3>())
            , m_local_rotation(boost::qvm::identity_quat<scalar_type>())
            , m_local_scale(boost::qvm::scalar_cast<scalar_type>(boost::qvm::_111()))
        {
        }
        inline transform(parent_type parent)
            : m_parent(std::move(parent))
            , m_local_position(boost::qvm::zero_vec<scalar_type, 3>())
            , m_local_rotation(boost::qvm::identity_quat<scalar_type>())
            , m_local_scale(boost::qvm::scalar_cast<scalar_type>(boost::qvm::_111()))
        {
        }
        inline const_parent_type get_const_parent() const
        {
            return m_parent;
        }
        inline const_parent_type get_parent() const
        {
            return get_const_parent();
        }
        inline parent_type get_mutable_parent()
        {
            return m_parent;
        }
        inline parent_type get_parent()
        {
            return get_mutable_parent();
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
        inline vector_3_type const& get_const_local_scale() const
        {
            return m_local_scale;
        }
        inline vector_3_type const& get_local_scale() const
        {
            return get_const_local_scale();
        }
        inline vector_3_type& get_mutable_local_scale()
        {
            return const_cast<vector_3_type&>(get_const_local_scale());
        }
        inline vector_3_type& get_local_scale()
        {
            return get_mutable_local_scale();
        }
        inline void set_local_scale(vector_3 const& v)
        {
            get_mutable_local_scale() = v;
        }
    };
}
}

#endif
