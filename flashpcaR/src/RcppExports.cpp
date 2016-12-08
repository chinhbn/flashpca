// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// flashpca_internal
List flashpca_internal(Eigen::Map<Eigen::MatrixXd> X, int stand, unsigned int ndim, unsigned int divisor, unsigned int maxiter, double tol, long seed, bool verbose, bool do_loadings, bool return_scale);
RcppExport SEXP flashpcaR_flashpca_internal(SEXP XSEXP, SEXP standSEXP, SEXP ndimSEXP, SEXP divisorSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP seedSEXP, SEXP verboseSEXP, SEXP do_loadingsSEXP, SEXP return_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type stand(standSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type divisor(divisorSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type do_loadings(do_loadingsSEXP);
    Rcpp::traits::input_parameter< bool >::type return_scale(return_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(flashpca_internal(X, stand, ndim, divisor, maxiter, tol, seed, verbose, do_loadings, return_scale));
    return rcpp_result_gen;
END_RCPP
}
// flashpca_plink_internal
List flashpca_plink_internal(std::string fn, int stand, unsigned int ndim, unsigned int divisor, unsigned int maxiter, unsigned int block_size, double tol, long seed, bool verbose, bool do_loadings, bool return_scale);
RcppExport SEXP flashpcaR_flashpca_plink_internal(SEXP fnSEXP, SEXP standSEXP, SEXP ndimSEXP, SEXP divisorSEXP, SEXP maxiterSEXP, SEXP block_sizeSEXP, SEXP tolSEXP, SEXP seedSEXP, SEXP verboseSEXP, SEXP do_loadingsSEXP, SEXP return_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fn(fnSEXP);
    Rcpp::traits::input_parameter< int >::type stand(standSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type divisor(divisorSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type do_loadings(do_loadingsSEXP);
    Rcpp::traits::input_parameter< bool >::type return_scale(return_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(flashpca_plink_internal(fn, stand, ndim, divisor, maxiter, block_size, tol, seed, verbose, do_loadings, return_scale));
    return rcpp_result_gen;
END_RCPP
}
// scca_internal
List scca_internal(Eigen::Map<Eigen::MatrixXd> X, Eigen::Map<Eigen::MatrixXd> Y, double lambda1, double lambda2, unsigned int ndim, int stand_x, int stand_y, int mem, long seed, int maxiter, double tol, bool verbose, unsigned int num_threads, bool useV, Eigen::Map<Eigen::MatrixXd> Vinit);
RcppExport SEXP flashpcaR_scca_internal(SEXP XSEXP, SEXP YSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP ndimSEXP, SEXP stand_xSEXP, SEXP stand_ySEXP, SEXP memSEXP, SEXP seedSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP useVSEXP, SEXP VinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< int >::type stand_x(stand_xSEXP);
    Rcpp::traits::input_parameter< int >::type stand_y(stand_ySEXP);
    Rcpp::traits::input_parameter< int >::type mem(memSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type useV(useVSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Vinit(VinitSEXP);
    rcpp_result_gen = Rcpp::wrap(scca_internal(X, Y, lambda1, lambda2, ndim, stand_x, stand_y, mem, seed, maxiter, tol, verbose, num_threads, useV, Vinit));
    return rcpp_result_gen;
END_RCPP
}
// ucca_plink_internal
List ucca_plink_internal(std::string fn, Eigen::Map<Eigen::MatrixXd> Y, int stand_x, int stand_y, bool verbose, bool return_scale);
RcppExport SEXP flashpcaR_ucca_plink_internal(SEXP fnSEXP, SEXP YSEXP, SEXP stand_xSEXP, SEXP stand_ySEXP, SEXP verboseSEXP, SEXP return_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fn(fnSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type stand_x(stand_xSEXP);
    Rcpp::traits::input_parameter< int >::type stand_y(stand_ySEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type return_scale(return_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(ucca_plink_internal(fn, Y, stand_x, stand_y, verbose, return_scale));
    return rcpp_result_gen;
END_RCPP
}
// scca_plink_internal
List scca_plink_internal(std::string fn, Eigen::Map<Eigen::MatrixXd> Y, double lambda1, double lambda2, unsigned int ndim, int stand_x, int stand_y, int mem, long seed, int maxiter, double tol, bool verbose, unsigned int num_threads, unsigned int block_size, bool useV, Eigen::Map<Eigen::MatrixXd> Vinit);
RcppExport SEXP flashpcaR_scca_plink_internal(SEXP fnSEXP, SEXP YSEXP, SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP ndimSEXP, SEXP stand_xSEXP, SEXP stand_ySEXP, SEXP memSEXP, SEXP seedSEXP, SEXP maxiterSEXP, SEXP tolSEXP, SEXP verboseSEXP, SEXP num_threadsSEXP, SEXP block_sizeSEXP, SEXP useVSEXP, SEXP VinitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fn(fnSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< unsigned int >::type ndim(ndimSEXP);
    Rcpp::traits::input_parameter< int >::type stand_x(stand_xSEXP);
    Rcpp::traits::input_parameter< int >::type stand_y(stand_ySEXP);
    Rcpp::traits::input_parameter< int >::type mem(memSEXP);
    Rcpp::traits::input_parameter< long >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type block_size(block_sizeSEXP);
    Rcpp::traits::input_parameter< bool >::type useV(useVSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Vinit(VinitSEXP);
    rcpp_result_gen = Rcpp::wrap(scca_plink_internal(fn, Y, lambda1, lambda2, ndim, stand_x, stand_y, mem, seed, maxiter, tol, verbose, num_threads, block_size, useV, Vinit));
    return rcpp_result_gen;
END_RCPP
}
// ucca_internal
List ucca_internal(Eigen::Map<Eigen::MatrixXd> X, Eigen::Map<Eigen::MatrixXd> Y, int stand_x, int stand_y, bool verbose, bool return_scale);
RcppExport SEXP flashpcaR_ucca_internal(SEXP XSEXP, SEXP YSEXP, SEXP stand_xSEXP, SEXP stand_ySEXP, SEXP verboseSEXP, SEXP return_scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type X(XSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type stand_x(stand_xSEXP);
    Rcpp::traits::input_parameter< int >::type stand_y(stand_ySEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type return_scale(return_scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(ucca_internal(X, Y, stand_x, stand_y, verbose, return_scale));
    return rcpp_result_gen;
END_RCPP
}
// standardise_impute
NumericMatrix standardise_impute(Eigen::Map<Eigen::MatrixXd> XX, int method);
RcppExport SEXP flashpcaR_standardise_impute(SEXP XXSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::MatrixXd> >::type XX(XXSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(standardise_impute(XX, method));
    return rcpp_result_gen;
END_RCPP
}
