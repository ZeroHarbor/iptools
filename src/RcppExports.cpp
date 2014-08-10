// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gethostbyname
std::vector< std::string > gethostbyname(std::string hostname);
RcppExport SEXP iptools_gethostbyname(SEXP hostnameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type hostname(hostnameSEXP );
        std::vector< std::string > __result = gethostbyname(hostname);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// gethostbyaddr
std::vector< std::string > gethostbyaddr(std::string ipv4);
RcppExport SEXP iptools_gethostbyaddr(SEXP ipv4SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type ipv4(ipv4SEXP );
        std::vector< std::string > __result = gethostbyaddr(ipv4);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ip2long
NumericVector ip2long(CharacterVector ip);
RcppExport SEXP iptools_ip2long(SEXP ipSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type ip(ipSEXP );
        NumericVector __result = ip2long(ip);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// long2ip
CharacterVector long2ip(NumericVector ip);
RcppExport SEXP iptools_long2ip(SEXP ipSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type ip(ipSEXP );
        CharacterVector __result = long2ip(ip);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// geofile
void geofile(std::string datafile = "/usr/local/share/GeoIP/GeoLiteCity.dat");
RcppExport SEXP iptools_geofile(SEXP datafileSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::string >::type datafile(datafileSEXP );
        geofile(datafile);
    }
    return R_NilValue;
END_RCPP
}
// geoip
DataFrame geoip(CharacterVector ip, bool showMessages = false);
RcppExport SEXP iptools_geoip(SEXP ipSEXP, SEXP showMessagesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector >::type ip(ipSEXP );
        Rcpp::traits::input_parameter< bool >::type showMessages(showMessagesSEXP );
        DataFrame __result = geoip(ip, showMessages);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// geoCleanup
void geoCleanup();
RcppExport SEXP iptools_geoCleanup() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        geoCleanup();
    }
    return R_NilValue;
END_RCPP
}
