#ifndef __ONC_CONFIG____H__
#define __ONC_CONFIG____H__

typedef enum {
    N_CONFIG_UDP_PORT,
    N_CONFIG_HTTPD_PORT,
    N_CONFIG_DISK_QUOTA,
    N_CONFIG_PEER_ID,
    N_CONFIG_PEER_PREFIX,
    N_CONFIG_HTTP_SCHEMA
} onc_cfgid_e_t;

#define ONC_MSG_CONFIG_BASE     0x90000000
#define ONC_MSG_CONFIG_CHANGE   (ONC_MSG_CONFIG_BASE + 1)

#ifdef __cplusplus
extern "C" {
#endif

int     onc_config_init(char *init_json);

int     onc_config_get_udp_port(void);
int     onc_config_get_httpd_port(void);
int     onc_config_get_disk_quota(void);
char   *onc_config_get_peer_prefix(void);
char   *onc_config_get_peer_id(void);
char   *onc_config_get_http_schema(void);

int     onc_config_get_byid(onc_cfgid_e_t id, unsigned long *val);
int     onc_config_set_byid(onc_cfgid_e_t id, unsigned long val);

void    onc_config_final(void);

#ifdef __cplusplus
}
#endif

#endif
