// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// entropySingle
double entropySingle(const Eigen::VectorXd& p);
RcppExport SEXP _DIBclust_entropySingle(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(entropySingle(p));
    return rcpp_result_gen;
END_RCPP
}
// klSingle
double klSingle(const arma::vec& p, const arma::vec& q);
RcppExport SEXP _DIBclust_klSingle(SEXP pSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type q(qSEXP);
    rcpp_result_gen = Rcpp::wrap(klSingle(p, q));
    return rcpp_result_gen;
END_RCPP
}
// vlog
arma::vec vlog(const arma::vec& x);
RcppExport SEXP _DIBclust_vlog(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vlog(x));
    return rcpp_result_gen;
END_RCPP
}
// qt_x_step_cpp
arma::mat qt_x_step_cpp(int n_rows, int T, double beta, const arma::mat& py_x, const arma::mat& qy_t, const arma::vec& qt);
RcppExport SEXP _DIBclust_qt_x_step_cpp(SEXP n_rowsSEXP, SEXP TSEXP, SEXP betaSEXP, SEXP py_xSEXP, SEXP qy_tSEXP, SEXP qtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_rows(n_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type py_x(py_xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qy_t(qy_tSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type qt(qtSEXP);
    rcpp_result_gen = Rcpp::wrap(qt_x_step_cpp(n_rows, T, beta, py_x, qy_t, qt));
    return rcpp_result_gen;
END_RCPP
}
// qt_x_step_beta_cpp
List qt_x_step_beta_cpp(int n_rows, int T, const arma::mat& py_x, const arma::mat& qy_t, const arma::vec& qt, arma::mat qt_x);
RcppExport SEXP _DIBclust_qt_x_step_beta_cpp(SEXP n_rowsSEXP, SEXP TSEXP, SEXP py_xSEXP, SEXP qy_tSEXP, SEXP qtSEXP, SEXP qt_xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_rows(n_rowsSEXP);
    Rcpp::traits::input_parameter< int >::type T(TSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type py_x(py_xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qy_t(qy_tSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type qt(qtSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type qt_x(qt_xSEXP);
    rcpp_result_gen = Rcpp::wrap(qt_x_step_beta_cpp(n_rows, T, py_x, qy_t, qt, qt_x));
    return rcpp_result_gen;
END_RCPP
}
// qy_t_step_cpp
arma::mat qy_t_step_cpp(const arma::mat& py_x, const arma::mat& qt_x, const arma::vec& qt, const arma::vec& px);
RcppExport SEXP _DIBclust_qy_t_step_cpp(SEXP py_xSEXP, SEXP qt_xSEXP, SEXP qtSEXP, SEXP pxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type py_x(py_xSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type qt_x(qt_xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type qt(qtSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type px(pxSEXP);
    rcpp_result_gen = Rcpp::wrap(qy_t_step_cpp(py_x, qt_x, qt, px));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_DIBclust_entropySingle", (DL_FUNC) &_DIBclust_entropySingle, 1},
    {"_DIBclust_klSingle", (DL_FUNC) &_DIBclust_klSingle, 2},
    {"_DIBclust_vlog", (DL_FUNC) &_DIBclust_vlog, 1},
    {"_DIBclust_qt_x_step_cpp", (DL_FUNC) &_DIBclust_qt_x_step_cpp, 6},
    {"_DIBclust_qt_x_step_beta_cpp", (DL_FUNC) &_DIBclust_qt_x_step_beta_cpp, 6},
    {"_DIBclust_qy_t_step_cpp", (DL_FUNC) &_DIBclust_qy_t_step_cpp, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_DIBclust(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
