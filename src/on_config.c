#include "ONC.h"

#include "on_config.h"

#define ONC_MAX_PEERID_LEN          16
#define ONC_MAX_PEER_PREFIX_LEN     8
#define ONC_MAX_HTTP_SCHEMA_LEN     6

typedef struct {
    unsigned long   httpd_port_set,
                    udp_port_set,
                    disk_quota_set,
                    peer_prefix_set,
                    peer_id_generated,
                    http_schema_set;

    int             httpd_port;
    int             udp_port;
    int             disk_quota;
    char            peer_prefix[ONC_MAX_PEER_PREFIX_LEN];
    char            peer_id[ONC_MAX_PEERID_LEN];
    char            http_schema[ONC_MAX_HTTP_SCHEMA_LEN];
} onc_config_s_t;

static onc_config_s_t g_config;

int onc_config_init(char *init_json)
{
    onc_memset(&g_config, 0x0, sizeof(onc_config_s_t));
    return 0;
}

int onc_config_get_udp_port(void)
{
    return g_config.udp_port;
}

int onc_config_get_httpd_port(void)
{
    return g_config.httpd_port;
}

int onc_config_get_disk_quota(void)
{
    return g_config.disk_quota;
}

char *onc_config_get_peer_prefix(void)
{
    return g_config.peer_prefix;
}

char *onc_config_get_peer_id(void)
{
    return g_config.peer_id;
}

char *onc_config_get_http_schema(void)
{
    return g_config.http_schema;
}

int onc_config_get_byid(onc_cfgid_e_t id, unsigned long *val)
{
    switch (id) {
    case N_CONFIG_UDP_PORT:
        break;
    case N_CONFIG_HTTPD_PORT:
        break;
    case N_CONFIG_DISK_QUOTA:
        break;
    case N_CONFIG_PEER_ID:
        break;
    case N_CONFIG_PEER_PREFIX:
        break;
    case N_CONFIG_HTTP_SCHEMA:
        break;
    default:
        return -1;
    }
    return -1;
}

int onc_config_set_byid(onc_cfgid_e_t id, unsigned long val)
{
    switch (id) {
    case N_CONFIG_UDP_PORT:
        break;
    case N_CONFIG_HTTPD_PORT:
        break;
    case N_CONFIG_DISK_QUOTA:
        break;
    case N_CONFIG_PEER_ID:
        break;
    case N_CONFIG_PEER_PREFIX:
        break;
    case N_CONFIG_HTTP_SCHEMA:
        break;
    default:
        return -1;
    }
    return -1;
}

void onc_config_final(void)
{
}
