#DEFINE CHAIN_IN 0
#DEFINE CHAIN_OUT 1

struct mfir_rule {
    unit16_t chain;
    char protocol;
    unit32_t s_ip;
    unit32_t s_mask;
    unit16_t s_port;
    unit32_t d_ip;
    unit32_t d_mask;
    unit16_t d_port;
};