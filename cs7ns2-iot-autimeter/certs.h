#ifndef certs_h
#define certs_h

// Amazon's root CA. This should be the same for everyone.
const char CERT_CA[] = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";
// The private key for your device
const char CERT_PRIVATE[] = R"EOF(
-----BEGIN PRIVATE KEY-----

-----END PRIVATE KEY-----
)EOF";;

// The certificate for your device
const char CERT_CRT[] = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";;

#endif
