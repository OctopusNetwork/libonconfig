#ifndef __OCNET_CONFIG____H__
#define __OCNET_CONFIG____H__

typedef enum {
    N_CONFIG_UDP_PORT,
    N_CONFIG_HTTPD_PORT,
    N_CONFIG_DISK_QUOTA,
    N_CONFIG_PEER_ID,
    N_CONFIG_PEER_PREFIX,
    N_CONFIG_HTTP_SCHEMA
} ocnet_cfgid_t;

struct ocnet_config;
typedef struct ocnet_config     ocnet_config_t;

#define OCNET_MSG_CONFIG_BASE     0x90000000
#define OCNET_MSG_CONFIG_CHANGE   (OCNET_MSG_CONFIG_BASE + 1)

#ifdef __cplusplus
extern "C" {
#endif

int     ocnet_config_init(char *init_json);

int     ocnet_config_get_udp_port(void);
int     ocnet_config_get_httpd_port(void);
int     ocnet_config_get_disk_quota(void);
char   *ocnet_config_get_peer_prefix(void);
char   *ocnet_config_get_peer_id(void);
char   *ocnet_config_get_http_schema(void);

int     ocnet_config_get_byid(ocnet_cfgid_t id, unsigned long *val);
int     ocnet_config_set_byid(ocnet_cfgid_t id, unsigned long val);

void    ocnet_config_final(void);

#ifdef __cplusplus
}
#endif

#endif
