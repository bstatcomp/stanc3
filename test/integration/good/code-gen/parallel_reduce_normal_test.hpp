
// Code generated by %%NAME%% %%VERSION%%
#include <stan/model/model_header.hpp>
namespace parallel_reduce_normal_test_model_namespace {

template <typename T, typename S>
std::vector<T> resize_to_match__(std::vector<T>& dst, const std::vector<S>& src) {
  dst.resize(src.size());
  return dst;
}

template <typename T>
Eigen::Matrix<T, -1, -1>
resize_to_match__(Eigen::Matrix<T, -1, -1>& dst, const Eigen::Matrix<T, -1, -1>& src) {
  dst.resize(src.rows(), src.cols());
  return dst;
}

template <typename T>
Eigen::Matrix<T, 1, -1>
resize_to_match__(Eigen::Matrix<T, 1, -1>& dst, const Eigen::Matrix<T, 1, -1>& src) {
  dst.resize(src.size());
  return dst;
}

template <typename T>
Eigen::Matrix<T, -1, 1>
resize_to_match__(Eigen::Matrix<T, -1, 1>& dst, const Eigen::Matrix<T, -1, 1>& src) {
  dst.resize(src.size());
  return dst;
}
std::vector<double> to_doubles__(std::initializer_list<double> x) {
  return x;
}

std::vector<stan::math::var> to_vars__(std::initializer_list<stan::math::var> x) {
  return x;
}

inline void validate_positive_index(const char* var_name, const char* expr,
                                    int val) {
  if (val < 1) {
    std::stringstream msg;
    msg << "Found dimension size less than one in simplex declaration"
        << "; variable=" << var_name << "; dimension size expression=" << expr
        << "; expression value=" << val;
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}

inline void validate_unit_vector_index(const char* var_name, const char* expr,
                                       int val) {
  if (val <= 1) {
    std::stringstream msg;
    if (val == 1) {
      msg << "Found dimension size one in unit vector declaration."
          << " One-dimensional unit vector is discrete"
          << " but the target distribution must be continuous."
          << " variable=" << var_name << "; dimension size expression=" << expr;
    } else {
      msg << "Found dimension size less than one in unit vector declaration"
          << "; variable=" << var_name << "; dimension size expression=" << expr
          << "; expression value=" << val;
    }
    std::string msg_str(msg.str());
    throw std::invalid_argument(msg_str.c_str());
  }
}


using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::model_base_crtp;
using stan::model::rvalue;
using stan::model::cons_list;
using stan::model::index_uni;
using stan::model::index_max;
using stan::model::index_min;
using stan::model::index_min_max;
using stan::model::index_multi;
using stan::model::index_omni;
using stan::model::nil_index_list;
using namespace stan::math; 

static int current_statement__ = 0;
static const std::vector<string> locations_array__ = {" (found before start of program)",
                                                      " (in './test/integration/good/code-gen/parallel_reduce_normal_test.stan', line 8, column 2 to column 12)",
                                                      " (in './test/integration/good/code-gen/parallel_reduce_normal_test.stan', line 12, column 2 to column 48)",
                                                      " (in './test/integration/good/code-gen/parallel_reduce_normal_test.stan', line 3, column 4 to column 44)",
                                                      " (in './test/integration/good/code-gen/parallel_reduce_normal_test.stan', line 2, column 72 to line 4, column 3)"};

template <typename T2__, typename T3__, typename T4__>
typename boost::math::tools::promote_args<T2__, T3__,
T4__>::type
my_func(const int& start, const int& end, const std::vector<T2__>& y_slice,
        const T3__& mu, const T4__& sigma, std::ostream* pstream__) {
  using local_scalar_t__ = typename boost::math::tools::promote_args<T2__,
          T3__,
          T4__>::type;
  const static bool propto__ = true;
  (void) propto__;
  
  try {
    current_statement__ = 3;
    return normal_lpdf<false>(y_slice, mu, sigma);
  } catch (const std::exception& e) {
    stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
  }
  
}

struct my_func_functor__ {
template <typename T2__, typename T3__, typename T4__>
typename boost::math::tools::promote_args<T2__, T3__,
T4__>::type
operator()(const int& start, const int& end,
           const std::vector<T2__>& y_slice, std::ostream* pstream__,
           const T3__& mu, const T4__& sigma)  const 
{
return my_func(start, end, y_slice, mu, sigma, pstream__);
}
};

class parallel_reduce_normal_test_model : public model_base_crtp<parallel_reduce_normal_test_model> {

 private:
  int pos__;
 
 public:
  ~parallel_reduce_normal_test_model() { }
  
  std::string model_name() const { return "parallel_reduce_normal_test_model"; }
  
  parallel_reduce_normal_test_model(stan::io::var_context& context__,
                                    unsigned int random_seed__ = 0,
                                    std::ostream* pstream__ = nullptr) : model_base_crtp(0) {
    typedef double local_scalar_t__;
    boost::ecuyer1988 base_rng__ = 
        stan::services::util::create_rng(random_seed__, 0);
    (void) base_rng__;  // suppress unused var warning
    static const char* function__ = "parallel_reduce_normal_test_model_namespace::parallel_reduce_normal_test_model";
    (void) function__;  // suppress unused var warning
    
    try {
      
      pos__ = 1;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    num_params_r__ = 0U;
    
    try {
      current_statement__ = 1;
      validate_non_negative_index("a", "5", 5);
      num_params_r__ += 5;
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
  }
  template <bool propto__, bool jacobian__, typename T__>
  T__ log_prob(std::vector<T__>& params_r__, std::vector<int>& params_i__,
               std::ostream* pstream__ = 0) const {
    typedef T__ local_scalar_t__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    static const char* function__ = "parallel_reduce_normal_test_model_namespace::log_prob";
(void) function__;  // suppress unused var warning

    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    
    try {
      current_statement__ = 1;
      validate_non_negative_index("a", "5", 5);
      std::vector<local_scalar_t__> a;
      a = std::vector<local_scalar_t__>(5, 0);
      
      current_statement__ = 1;
      for (size_t sym1__ = 1; sym1__ <= 5; ++sym1__) {
        current_statement__ = 1;
        assign(a, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable a");}
      {
        current_statement__ = 2;
        lp_accum__.add(
          reduce_sum<my_func_functor__>(a, 1, pstream__, 0.0, 1.0));
      }
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
    } // log_prob() 
    
  template <typename RNG>
  void write_array(RNG& base_rng__, std::vector<double>& params_r__,
                   std::vector<int>& params_i__, std::vector<double>& vars__,
                   bool emit_transformed_parameters__ = true,
                   bool emit_generated_quantities__ = true,
                   std::ostream* pstream__ = 0) const {
    typedef double local_scalar_t__;
    vars__.resize(0);
    stan::io::reader<local_scalar_t__> in__(params_r__, params_i__);
    static const char* function__ = "parallel_reduce_normal_test_model_namespace::write_array";
(void) function__;  // suppress unused var warning

    (void) function__;  // suppress unused var warning

    double lp__ = 0.0;
    (void) lp__;  // dummy to suppress unused var warning
    stan::math::accumulator<double> lp_accum__;
    
    try {
      current_statement__ = 1;
      validate_non_negative_index("a", "5", 5);
      std::vector<double> a;
      a = std::vector<double>(5, 0);
      
      current_statement__ = 1;
      for (size_t sym1__ = 1; sym1__ <= 5; ++sym1__) {
        current_statement__ = 1;
        assign(a, cons_list(index_uni(sym1__), nil_index_list()),
          in__.scalar(), "assigning variable a");}
      for (size_t sym1__ = 1; sym1__ <= 5; ++sym1__) {
        vars__.push_back(a[(sym1__ - 1)]);}
      if (logical_negation((primitive_value(emit_transformed_parameters__) ||
            primitive_value(emit_generated_quantities__)))) {
        return ;
      } 
      if (logical_negation(emit_generated_quantities__)) {
        return ;
      } 
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // write_array() 
    
  void transform_inits(const stan::io::var_context& context__,
                       std::vector<int>& params_i__,
                       std::vector<double>& vars__, std::ostream* pstream__) const {
    typedef double local_scalar_t__;
    vars__.resize(0);
    vars__.reserve(num_params_r__);
    
    try {
      int pos__;
      
      pos__ = 1;
      current_statement__ = 1;
      validate_non_negative_index("a", "5", 5);
      std::vector<double> a;
      a = std::vector<double>(5, 0);
      
      current_statement__ = 1;
      assign(a, nil_index_list(), context__.vals_r("a"),
        "assigning variable a");
      for (size_t sym1__ = 1; sym1__ <= 5; ++sym1__) {
        vars__.push_back(a[(sym1__ - 1)]);}
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
      // Next line prevents compiler griping about no return
      throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***"); 
    }
    } // transform_inits() 
    
  void get_param_names(std::vector<std::string>& names__) const {
    
    names__.resize(0);
    names__.push_back("a");
    } // get_param_names() 
    
  void get_dims(std::vector<std::vector<size_t>>& dimss__) const {
    dimss__.resize(0);
    std::vector<size_t> dims__;
    dims__.push_back(5);
    dimss__.push_back(dims__);
    dims__.resize(0);
    
    } // get_dims() 
    
  void constrained_param_names(std::vector<std::string>& param_names__,
                               bool emit_transformed_parameters__ = true,
                               bool emit_generated_quantities__ = true) const {
    
    for (size_t sym1__ = 1; sym1__ <= 5; ++sym1__) {
      {
        param_names__.push_back(std::string() + "a" + '.' + std::to_string(sym1__));
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // constrained_param_names() 
    
  void unconstrained_param_names(std::vector<std::string>& param_names__,
                                 bool emit_transformed_parameters__ = true,
                                 bool emit_generated_quantities__ = true) const {
    
    for (size_t sym1__ = 1; sym1__ <= 5; ++sym1__) {
      {
        param_names__.push_back(std::string() + "a" + '.' + std::to_string(sym1__));
      }}
    if (emit_transformed_parameters__) {
      
    }
    
    if (emit_generated_quantities__) {
      
    }
    
    } // unconstrained_param_names() 
    
  std::string get_constrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"a\",\"type\":{\"name\":\"array\",\"length\":" << 5 << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_constrained_sizedtypes() 
    
  std::string get_unconstrained_sizedtypes() const {
    stringstream s__;
    s__ << "[{\"name\":\"a\",\"type\":{\"name\":\"array\",\"length\":" << 5 << ",\"element_type\":{\"name\":\"real\"}},\"block\":\"parameters\"}]";
    return s__.str();
    } // get_unconstrained_sizedtypes() 
    
  
    // Begin method overload boilerplate
    template <typename RNG>
    void write_array(RNG& base_rng__,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool emit_transformed_parameters__ = true,
                     bool emit_generated_quantities__ = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng__, params_r_vec, params_i_vec, vars_vec,
          emit_transformed_parameters__, emit_generated_quantities__, pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    template <bool propto__, bool jacobian__, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto__,jacobian__,T_>(vec_params_r, vec_params_i, pstream);
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double, Eigen::Dynamic, 1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }

};
}

typedef parallel_reduce_normal_test_model_namespace::parallel_reduce_normal_test_model stan_model;

#ifndef USING_R

// Boilerplate
stan::model::model_base& new_model(
        stan::io::var_context& data_context,
        unsigned int seed,
        std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}

#endif

