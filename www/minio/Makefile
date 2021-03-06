# $FreeBSD$

PORTNAME=	minio
PORTVERSION=	${GH_TAGNAME:S/RELEASE.//:S/Z//:S/T/-/:S/-/./g}
CATEGORIES=	www

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Amazon S3 compatible object storage server

LICENSE=	APACHE20

USES=		compiler go:modules

USE_GITHUB=	yes
GHTAG=		RELEASE.2020-04-15T00-39-01Z
COMMIT_ID=	5c11a46412f3aa34098443a71752a894449dca10
GH_TUPLE=	${PORTNAME}:${PORTNAME}:${GHTAG}:DEFAULT \
		Azure:azure-pipeline-go:v0.2.1:azure_azure_pipeline_go/vendor/github.com/Azure/azure-pipeline-go \
		Azure:azure-storage-blob-go:v0.8.0:azure_azure_storage_blob_go/vendor/github.com/Azure/azure-storage-blob-go \
		Shopify:sarama:v1.24.1:shopify_sarama/vendor/github.com/Shopify/sarama \
		StackExchange:wmi:cbe66965904d:stackexchange_wmi/vendor/github.com/StackExchange/wmi \
		alecthomas:participle:v0.2.1:alecthomas_participle/vendor/github.com/alecthomas/participle \
		aliyun:aliyun-oss-go-sdk:86c17b95fcd5:aliyun_aliyun_oss_go_sdk/vendor/github.com/aliyun/aliyun-oss-go-sdk \
		apache:thrift:v0.13.0:apache_thrift/vendor/git.apache.org/thrift.git \
		aws:aws-sdk-go:v1.20.21:aws_aws_sdk_go/vendor/github.com/aws/aws-sdk-go \
		bcicen:jstream:16c1f8af81c2:bcicen_jstream/vendor/github.com/bcicen/jstream \
		beevik:ntp:v0.2.0:beevik_ntp/vendor/github.com/beevik/ntp \
		beorn7:perks:3a771d992973:beorn7_perks/vendor/github.com/beorn7/perks \
		census-instrumentation:opencensus-go:v0.21.0:census_instrumentation_opencensus_go/vendor/go.opencensus.io \
		cespare:xxhash:v2.1.1:cespare_xxhash_v2/vendor/github.com/cespare/xxhash/v2 \
		cheggaaa:pb:v1.0.28:cheggaaa_pb/vendor/github.com/cheggaaa/pb \
		coredns:coredns:v1.4.0:coredns_coredns/vendor/github.com/coredns/coredns \
		coreos:etcd:v3.3.12:coreos_etcd/vendor/github.com/coreos/etcd \
		davecgh:go-spew:v1.1.1:davecgh_go_spew/vendor/github.com/davecgh/go-spew \
		dgrijalva:jwt-go:v3.2.0:dgrijalva_jwt_go/vendor/github.com/dgrijalva/jwt-go \
		djherbis:atime:v1.0.0:djherbis_atime/vendor/github.com/djherbis/atime \
		dustin:go-humanize:v1.0.0:dustin_go_humanize/vendor/github.com/dustin/go-humanize \
		eapache:go-resiliency:v1.2.0:eapache_go_resiliency/vendor/github.com/eapache/go-resiliency \
		eapache:go-xerial-snappy:776d5712da21:eapache_go_xerial_snappy/vendor/github.com/eapache/go-xerial-snappy \
		eapache:queue:v1.1.0:eapache_queue/vendor/github.com/eapache/queue \
		eclipse:paho.mqtt.golang:v1.2.0:eclipse_paho_mqtt_golang/vendor/github.com/eclipse/paho.mqtt.golang \
		elazarl:go-bindata-assetfs:v1.0.0:elazarl_go_bindata_assetfs/vendor/github.com/elazarl/go-bindata-assetfs \
		fatih:color:v1.7.0:fatih_color/vendor/github.com/fatih/color \
		fatih:structs:v1.1.0:fatih_structs/vendor/github.com/fatih/structs \
		go-asn1-ber:asn1-ber:f715ec2f112d:go_asn1_ber_asn1_ber/vendor/gopkg.in/asn1-ber.v1 \
		go-ini:ini:v1.48.0:go_ini_ini/vendor/gopkg.in/ini.v1 \
		go-ldap:ldap:v3.0.3:go_ldap_ldap/vendor/gopkg.in/ldap.v3 \
		go-ole:go-ole:v1.2.4:go_ole_go_ole/vendor/github.com/go-ole/go-ole \
		go-sql-driver:mysql:v1.4.1:go_sql_driver_mysql/vendor/github.com/go-sql-driver/mysql \
		go-yaml:yaml:v2.2.4:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		gogo:protobuf:v1.2.1:gogo_protobuf/vendor/github.com/gogo/protobuf \
		golang:appengine:v1.6.0:golang_appengine/vendor/google.golang.org/appengine \
		golang:crypto:497ca9f6d64f:golang_crypto/vendor/golang.org/x/crypto \
		golang:net:d3edc9973b7e:golang_net/vendor/golang.org/x/net \
		golang:oauth2:9f3314589c9a:golang_oauth2/vendor/golang.org/x/oauth2 \
		golang:protobuf:v1.3.2:golang_protobuf/vendor/github.com/golang/protobuf \
		golang:snappy:v0.0.1:golang_snappy/vendor/github.com/golang/snappy \
		golang:sys:85ca7c5b95cd:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.3.2:golang_text/vendor/golang.org/x/text \
		golang:time:9d24e82272b4:golang_time/vendor/golang.org/x/time \
		golang:tools:31e00f45c22e:golang_tools/vendor/golang.org/x/tools \
		gomodule:redigo:v2.0.0:gomodule_redigo/vendor/github.com/gomodule/redigo \
		google:go-genproto:d00d292a067c:google_go_genproto/vendor/google.golang.org/genproto \
		google:uuid:v1.1.1:google_uuid/vendor/github.com/google/uuid \
		googleapis:gax-go:v2.0.4:googleapis_gax_go_v2/vendor/github.com/googleapis/gax-go \
		googleapis:google-api-go-client:v0.5.0:googleapis_google_api_go_client/vendor/google.golang.org/api \
		googleapis:google-cloud-go:v0.39.0:googleapis_google_cloud_go/vendor/cloud.google.com/go \
		gorilla:handlers:v1.4.0:gorilla_handlers/vendor/github.com/gorilla/handlers \
		gorilla:mux:v1.7.0:gorilla_mux/vendor/github.com/gorilla/mux \
		gorilla:rpc:v1.2.0:gorilla_rpc/vendor/github.com/gorilla/rpc \
		grpc:grpc-go:v1.22.0:grpc_grpc_go/vendor/google.golang.org/grpc \
		hashicorp:errwrap:v1.0.0:hashicorp_errwrap/vendor/github.com/hashicorp/errwrap \
		hashicorp:go-cleanhttp:v0.5.1:hashicorp_go_cleanhttp/vendor/github.com/hashicorp/go-cleanhttp \
		hashicorp:go-multierror:v1.0.0:hashicorp_go_multierror/vendor/github.com/hashicorp/go-multierror \
		hashicorp:go-retryablehttp:v0.5.4:hashicorp_go_retryablehttp/vendor/github.com/hashicorp/go-retryablehttp \
		hashicorp:go-rootcerts:v1.0.1:hashicorp_go_rootcerts/vendor/github.com/hashicorp/go-rootcerts \
		hashicorp:go-sockaddr:v1.0.2:hashicorp_go_sockaddr/vendor/github.com/hashicorp/go-sockaddr \
		hashicorp:go-uuid:v1.0.1:hashicorp_go_uuid/vendor/github.com/hashicorp/go-uuid \
		hashicorp:golang-lru:v0.5.1:hashicorp_golang_lru/vendor/github.com/hashicorp/golang-lru \
		hashicorp:hcl:v1.0.0:hashicorp_hcl/vendor/github.com/hashicorp/hcl \
		hashicorp:vault:api/v1.0.4:hashicorp_vault_api/vendor/github.com/hashicorp/vault \
		hashicorp:vault:sdk/v0.1.13:hashicorp_vault_sdk \
		inconshreveable:go-update:8152e7eb6ccf:inconshreveable_go_update/vendor/github.com/inconshreveable/go-update \
		jcmturner:aescts:v1.0.1:jcmturner_aescts/vendor/gopkg.in/jcmturner/aescts.v1 \
		jcmturner:dnsutils:v1.0.1:jcmturner_dnsutils/vendor/gopkg.in/jcmturner/dnsutils.v1 \
		jcmturner:gofork:dc7c13fece03:jcmturner_gofork/vendor/github.com/jcmturner/gofork \
		jcmturner:goidentity:v3.0.0:jcmturner_goidentity/vendor/gopkg.in/jcmturner/goidentity.v3 \
		jcmturner:gokrb5:v7.2.3:jcmturner_gokrb5/vendor/gopkg.in/jcmturner/gokrb5.v7 \
		jcmturner:rpc:v1.1.0:jcmturner_rpc/vendor/gopkg.in/jcmturner/rpc.v1 \
		jmespath:go-jmespath:c2b33e8439af:jmespath_go_jmespath/vendor/github.com/jmespath/go-jmespath \
		json-iterator:go:v1.1.9:json_iterator_go/vendor/github.com/json-iterator/go \
		klauspost:compress:v1.10.3:klauspost_compress/vendor/github.com/klauspost/compress \
		klauspost:cpuid:v1.2.2:klauspost_cpuid/vendor/github.com/klauspost/cpuid \
		klauspost:pgzip:v1.2.1:klauspost_pgzip/vendor/github.com/klauspost/pgzip \
		klauspost:readahead:v1.3.1:klauspost_readahead/vendor/github.com/klauspost/readahead \
		klauspost:reedsolomon:v1.9.3:klauspost_reedsolomon/vendor/github.com/klauspost/reedsolomon \
		konsorten:go-windows-terminal-sequences:v1.0.1:konsorten_go_windows_terminal_sequences/vendor/github.com/konsorten/go-windows-terminal-sequences \
		kurin:blazer:8f90a40f8af7:kurin_blazer/vendor/github.com/kurin/blazer \
		lib:pq:v1.1.1:lib_pq/vendor/github.com/lib/pq \
		mailru:easyjson:03f2033d19d5:mailru_easyjson/vendor/github.com/mailru/easyjson \
		mattn:go-colorable:v0.1.1:mattn_go_colorable/vendor/github.com/mattn/go-colorable \
		mattn:go-ieproxy:f9202b1cfdeb:mattn_go_ieproxy/vendor/github.com/mattn/go-ieproxy \
		mattn:go-isatty:v0.0.7:mattn_go_isatty/vendor/github.com/mattn/go-isatty \
		mattn:go-runewidth:v0.0.4:mattn_go_runewidth/vendor/github.com/mattn/go-runewidth \
		matttproud:golang_protobuf_extensions:v1.0.1:matttproud_golang_protobuf_extensions/vendor/github.com/matttproud/golang_protobuf_extensions \
		miekg:dns:v1.1.8:miekg_dns/vendor/github.com/miekg/dns \
		minio:cli:v1.22.0:minio_cli/vendor/github.com/minio/cli \
		minio:gokrb5:v7.2.5:minio_gokrb5_v7/vendor/github.com/minio/gokrb5/v7 \
		minio:hdfs:v3.0.1:minio_hdfs_v3/vendor/github.com/minio/hdfs/v3 \
		minio:highwayhash:v1.0.0:minio_highwayhash/vendor/github.com/minio/highwayhash \
		minio:lsync:v1.0.1:minio_lsync/vendor/github.com/minio/lsync \
		minio:minio-go:v6.0.53:minio_minio_go_v6/vendor/github.com/minio/minio-go/v6 \
		minio:parquet-go:838cfa8aae61:minio_parquet_go/vendor/github.com/minio/parquet-go \
		minio:sha256-simd:v0.1.1:minio_sha256_simd/vendor/github.com/minio/sha256-simd \
		minio:simdjson-go:b17fe061ea37:minio_simdjson_go/vendor/github.com/minio/simdjson-go \
		minio:sio:v0.2.0:minio_sio/vendor/github.com/minio/sio \
		mitchellh:go-homedir:v1.1.0:mitchellh_go_homedir/vendor/github.com/mitchellh/go-homedir \
		mitchellh:mapstructure:v1.1.2:mitchellh_mapstructure/vendor/github.com/mitchellh/mapstructure \
		mmcloughlin:avo:6df701fe672f:mmcloughlin_avo/vendor/github.com/mmcloughlin/avo \
		modern-go:concurrent:bacd9c7ef1dd:modern_go_concurrent/vendor/github.com/modern-go/concurrent \
		modern-go:reflect2:v1.0.1:modern_go_reflect2/vendor/github.com/modern-go/reflect2 \
		montanaflynn:stats:v0.5.0:montanaflynn_stats/vendor/github.com/montanaflynn/stats \
		nats-io:jwt:v0.3.2:nats_io_jwt/vendor/github.com/nats-io/jwt \
		nats-io:nats-server:v2.1.2:nats_io_nats_server_v2/vendor/github.com/nats-io/nats-server/v2 \
		nats-io:nats.go:v1.9.1:nats_io_nats_go/vendor/github.com/nats-io/nats.go \
		nats-io:nkeys:v0.1.3:nats_io_nkeys/vendor/github.com/nats-io/nkeys \
		nats-io:nuid:v1.0.1:nats_io_nuid/vendor/github.com/nats-io/nuid \
		nats-io:stan.go:v0.4.5:nats_io_stan_go/vendor/github.com/nats-io/stan.go \
		ncw:directio:v1.0.5:ncw_directio/vendor/github.com/ncw/directio \
		nsqio:go-nsq:v1.0.7:nsqio_go_nsq/vendor/github.com/nsqio/go-nsq \
		olivere:elastic:v5.0.80:olivere_elastic/vendor/gopkg.in/olivere/elastic.v5 \
		philhofer:fwd:v1.0.0:philhofer_fwd/vendor/github.com/philhofer/fwd \
		pierrec:lz4:v2.4.0:pierrec_lz4/vendor/github.com/pierrec/lz4 \
		pkg:errors:v0.8.1:pkg_errors/vendor/github.com/pkg/errors \
		prometheus:client_golang:3c4408c8b829:prometheus_client_golang/vendor/github.com/prometheus/client_golang \
		prometheus:client_model:fd36f4220a90:prometheus_client_model/vendor/github.com/prometheus/client_model \
		prometheus:common:v0.2.0:prometheus_common/vendor/github.com/prometheus/common \
		prometheus:procfs:bf6a532e95b1:prometheus_procfs/vendor/github.com/prometheus/procfs \
		rcrowley:go-metrics:9c2d0518ed81:rcrowley_go_metrics/vendor/github.com/rcrowley/go-metrics \
		rjeczalik:notify:v0.9.2:rjeczalik_notify/vendor/github.com/rjeczalik/notify \
		rs:cors:v1.6.0:rs_cors/vendor/github.com/rs/cors \
		ryanuber:go-glob:v1.0.0:ryanuber_go_glob/vendor/github.com/ryanuber/go-glob \
		secure-io:sio-go:v0.3.0:secure_io_sio_go/vendor/github.com/secure-io/sio-go \
		shirou:gopsutil:53cec6b37e6a:shirou_gopsutil/vendor/github.com/shirou/gopsutil \
		sirupsen:logrus:v1.5.0:sirupsen_logrus/vendor/github.com/sirupsen/logrus \
		square:go-jose:v2.3.1:square_go_jose/vendor/gopkg.in/square/go-jose.v2 \
		streadway:amqp:75d898a42a94:streadway_amqp/vendor/github.com/streadway/amqp \
		tidwall:gjson:v1.3.5:tidwall_gjson/vendor/github.com/tidwall/gjson \
		tidwall:match:v1.0.1:tidwall_match/vendor/github.com/tidwall/match \
		tidwall:pretty:v1.0.0:tidwall_pretty/vendor/github.com/tidwall/pretty \
		tidwall:sjson:v1.0.4:tidwall_sjson/vendor/github.com/tidwall/sjson \
		tinylib:msgp:v1.1.1:tinylib_msgp/vendor/github.com/tinylib/msgp \
		uber-go:atomic:v1.3.2:uber_go_atomic/vendor/go.uber.org/atomic \
		valyala:tcplisten:ceec8f93295a:valyala_tcplisten/vendor/github.com/valyala/tcplisten \
		xdg:scram:7eeb5667e42c:xdg_scram/vendor/github.com/xdg/scram \
		xdg:stringprep:v1.0.0:xdg_stringprep/vendor/github.com/xdg/stringprep

GO_BUILDFLAGS=	-ldflags=' \
		-X github.com/minio/minio/cmd.Version=${GH_TAGNAME:C/RELEASE\.//:C|(..)-(..)-(..)Z|\1:\2:\3Z|} \
		-X github.com/minio/minio/cmd.ReleaseTag=${GH_TAGNAME} \
		-X github.com/minio/minio/cmd.CommitID=${COMMIT_ID} \
		-X github.com/minio/minio/cmd.GOPATH=${WRKSRC} -s -w'

PLIST_FILES=	bin/${PORTNAME}
USE_RC_SUBR=	minio

USERS=		minio
GROUPS=		minio

SUB_LIST=	GROUP="${GROUPS}" \
		USER="${USERS}"

post-extract:
	@${RM} -r ${WRKSRC}/vendor/github.com/hashicorp/vault/sdk
	@${RLN} ${WRKSRC_hashicorp_vault_sdk}/sdk ${WRKSRC}/vendor/github.com/hashicorp/vault/sdk

.include <bsd.port.mk>
