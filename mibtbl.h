
//#ifdef MIB_TLV
#define MIB_TABLE_LIST			0x8000
//#else
//#define MIB_TABLE_LIST 0x0
//#endif

#define MIB_HW_BOARD_VER		200
#define MIB_HW_NIC0_ADDR		201
#define MIB_HW_NIC1_ADDR		202
#define MIB_HW_WLAN_ADDR		203
#define MIB_HW_REG_DOMAIN		204
#define MIB_HW_RF_TYPE			205

#define MIB_HW_LED_TYPE			212

#define MIB_HW_WSC_PIN			273

#define MIB_HW_11N_XCAP			290

#define MIB_HW_WLAN_ADDR1		303
#define MIB_HW_WLAN_ADDR2		304
#define MIB_HW_WLAN_ADDR3		305
#define MIB_HW_WLAN_ADDR4		306

#define MIB_HW_WLAN_ADDR5		511
#define MIB_HW_WLAN_ADDR6		512
#define MIB_HW_WLAN_ADDR7		513

#define MIB_HW_11N_TSSI1		518
#define MIB_HW_11N_TSSI2		519
#define MIB_HW_11N_THER			520
#define MIB_HW_11N_TRSWITCH		521
#define MIB_HW_11N_TRSWPAPE_C9		522
#define MIB_HW_11N_TRSWPAPE_CC		523
#define MIB_HW_11N_TARGET_PWR		524
#define MIB_HW_11N_RESERVED5		525
#define MIB_HW_11N_RESERVED6		526
#define MIB_HW_11N_RESERVED7		527
#define MIB_HW_11N_RESERVED8		528

#define MIB_HW_TX_POWER_CCK_A		901
#define MIB_HW_TX_POWER_CCK_B		902
#define MIB_HW_TX_POWER_HT40_1S_A	903
#define MIB_HW_TX_POWER_HT40_1S_B	904
#define MIB_HW_TX_POWER_DIFF_HT40_2S	905
#define MIB_HW_TX_POWER_DIFF_HT20	906
#define MIB_HW_TX_POWER_DIFF_OFDM	907
#define MIB_HW_11N_RESERVED9		908
#define MIB_HW_11N_RESERVED10		909
#define MIB_HW_TX_POWER_5G_HT40_1S_A	910
#define MIB_HW_TX_POWER_5G_HT40_1S_B	911
#define MIB_HW_TX_POWER_DIFF_5G_HT40_2S	912
#define MIB_HW_TX_POWER_DIFF_5G_HT20	913
#define MIB_HW_TX_POWER_DIFF_5G_OFDM	914

typedef struct mibtbl {
	unsigned short type;
	unsigned short size;
} __PACK__ mibtbl_t;
