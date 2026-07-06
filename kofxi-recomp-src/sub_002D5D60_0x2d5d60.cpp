#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D5D60
// Address: 0x2d5d60 - 0x2d6140
void sub_002D5D60_0x2d5d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5D60_0x2d5d60");
#endif

    switch (ctx->pc) {
        case 0x2d5d60u: goto label_2d5d60;
        case 0x2d5d64u: goto label_2d5d64;
        case 0x2d5d68u: goto label_2d5d68;
        case 0x2d5d6cu: goto label_2d5d6c;
        case 0x2d5d70u: goto label_2d5d70;
        case 0x2d5d74u: goto label_2d5d74;
        case 0x2d5d78u: goto label_2d5d78;
        case 0x2d5d7cu: goto label_2d5d7c;
        case 0x2d5d80u: goto label_2d5d80;
        case 0x2d5d84u: goto label_2d5d84;
        case 0x2d5d88u: goto label_2d5d88;
        case 0x2d5d8cu: goto label_2d5d8c;
        case 0x2d5d90u: goto label_2d5d90;
        case 0x2d5d94u: goto label_2d5d94;
        case 0x2d5d98u: goto label_2d5d98;
        case 0x2d5d9cu: goto label_2d5d9c;
        case 0x2d5da0u: goto label_2d5da0;
        case 0x2d5da4u: goto label_2d5da4;
        case 0x2d5da8u: goto label_2d5da8;
        case 0x2d5dacu: goto label_2d5dac;
        case 0x2d5db0u: goto label_2d5db0;
        case 0x2d5db4u: goto label_2d5db4;
        case 0x2d5db8u: goto label_2d5db8;
        case 0x2d5dbcu: goto label_2d5dbc;
        case 0x2d5dc0u: goto label_2d5dc0;
        case 0x2d5dc4u: goto label_2d5dc4;
        case 0x2d5dc8u: goto label_2d5dc8;
        case 0x2d5dccu: goto label_2d5dcc;
        case 0x2d5dd0u: goto label_2d5dd0;
        case 0x2d5dd4u: goto label_2d5dd4;
        case 0x2d5dd8u: goto label_2d5dd8;
        case 0x2d5ddcu: goto label_2d5ddc;
        case 0x2d5de0u: goto label_2d5de0;
        case 0x2d5de4u: goto label_2d5de4;
        case 0x2d5de8u: goto label_2d5de8;
        case 0x2d5decu: goto label_2d5dec;
        case 0x2d5df0u: goto label_2d5df0;
        case 0x2d5df4u: goto label_2d5df4;
        case 0x2d5df8u: goto label_2d5df8;
        case 0x2d5dfcu: goto label_2d5dfc;
        case 0x2d5e00u: goto label_2d5e00;
        case 0x2d5e04u: goto label_2d5e04;
        case 0x2d5e08u: goto label_2d5e08;
        case 0x2d5e0cu: goto label_2d5e0c;
        case 0x2d5e10u: goto label_2d5e10;
        case 0x2d5e14u: goto label_2d5e14;
        case 0x2d5e18u: goto label_2d5e18;
        case 0x2d5e1cu: goto label_2d5e1c;
        case 0x2d5e20u: goto label_2d5e20;
        case 0x2d5e24u: goto label_2d5e24;
        case 0x2d5e28u: goto label_2d5e28;
        case 0x2d5e2cu: goto label_2d5e2c;
        case 0x2d5e30u: goto label_2d5e30;
        case 0x2d5e34u: goto label_2d5e34;
        case 0x2d5e38u: goto label_2d5e38;
        case 0x2d5e3cu: goto label_2d5e3c;
        case 0x2d5e40u: goto label_2d5e40;
        case 0x2d5e44u: goto label_2d5e44;
        case 0x2d5e48u: goto label_2d5e48;
        case 0x2d5e4cu: goto label_2d5e4c;
        case 0x2d5e50u: goto label_2d5e50;
        case 0x2d5e54u: goto label_2d5e54;
        case 0x2d5e58u: goto label_2d5e58;
        case 0x2d5e5cu: goto label_2d5e5c;
        case 0x2d5e60u: goto label_2d5e60;
        case 0x2d5e64u: goto label_2d5e64;
        case 0x2d5e68u: goto label_2d5e68;
        case 0x2d5e6cu: goto label_2d5e6c;
        case 0x2d5e70u: goto label_2d5e70;
        case 0x2d5e74u: goto label_2d5e74;
        case 0x2d5e78u: goto label_2d5e78;
        case 0x2d5e7cu: goto label_2d5e7c;
        case 0x2d5e80u: goto label_2d5e80;
        case 0x2d5e84u: goto label_2d5e84;
        case 0x2d5e88u: goto label_2d5e88;
        case 0x2d5e8cu: goto label_2d5e8c;
        case 0x2d5e90u: goto label_2d5e90;
        case 0x2d5e94u: goto label_2d5e94;
        case 0x2d5e98u: goto label_2d5e98;
        case 0x2d5e9cu: goto label_2d5e9c;
        case 0x2d5ea0u: goto label_2d5ea0;
        case 0x2d5ea4u: goto label_2d5ea4;
        case 0x2d5ea8u: goto label_2d5ea8;
        case 0x2d5eacu: goto label_2d5eac;
        case 0x2d5eb0u: goto label_2d5eb0;
        case 0x2d5eb4u: goto label_2d5eb4;
        case 0x2d5eb8u: goto label_2d5eb8;
        case 0x2d5ebcu: goto label_2d5ebc;
        case 0x2d5ec0u: goto label_2d5ec0;
        case 0x2d5ec4u: goto label_2d5ec4;
        case 0x2d5ec8u: goto label_2d5ec8;
        case 0x2d5eccu: goto label_2d5ecc;
        case 0x2d5ed0u: goto label_2d5ed0;
        case 0x2d5ed4u: goto label_2d5ed4;
        case 0x2d5ed8u: goto label_2d5ed8;
        case 0x2d5edcu: goto label_2d5edc;
        case 0x2d5ee0u: goto label_2d5ee0;
        case 0x2d5ee4u: goto label_2d5ee4;
        case 0x2d5ee8u: goto label_2d5ee8;
        case 0x2d5eecu: goto label_2d5eec;
        case 0x2d5ef0u: goto label_2d5ef0;
        case 0x2d5ef4u: goto label_2d5ef4;
        case 0x2d5ef8u: goto label_2d5ef8;
        case 0x2d5efcu: goto label_2d5efc;
        case 0x2d5f00u: goto label_2d5f00;
        case 0x2d5f04u: goto label_2d5f04;
        case 0x2d5f08u: goto label_2d5f08;
        case 0x2d5f0cu: goto label_2d5f0c;
        case 0x2d5f10u: goto label_2d5f10;
        case 0x2d5f14u: goto label_2d5f14;
        case 0x2d5f18u: goto label_2d5f18;
        case 0x2d5f1cu: goto label_2d5f1c;
        case 0x2d5f20u: goto label_2d5f20;
        case 0x2d5f24u: goto label_2d5f24;
        case 0x2d5f28u: goto label_2d5f28;
        case 0x2d5f2cu: goto label_2d5f2c;
        case 0x2d5f30u: goto label_2d5f30;
        case 0x2d5f34u: goto label_2d5f34;
        case 0x2d5f38u: goto label_2d5f38;
        case 0x2d5f3cu: goto label_2d5f3c;
        case 0x2d5f40u: goto label_2d5f40;
        case 0x2d5f44u: goto label_2d5f44;
        case 0x2d5f48u: goto label_2d5f48;
        case 0x2d5f4cu: goto label_2d5f4c;
        case 0x2d5f50u: goto label_2d5f50;
        case 0x2d5f54u: goto label_2d5f54;
        case 0x2d5f58u: goto label_2d5f58;
        case 0x2d5f5cu: goto label_2d5f5c;
        case 0x2d5f60u: goto label_2d5f60;
        case 0x2d5f64u: goto label_2d5f64;
        case 0x2d5f68u: goto label_2d5f68;
        case 0x2d5f6cu: goto label_2d5f6c;
        case 0x2d5f70u: goto label_2d5f70;
        case 0x2d5f74u: goto label_2d5f74;
        case 0x2d5f78u: goto label_2d5f78;
        case 0x2d5f7cu: goto label_2d5f7c;
        case 0x2d5f80u: goto label_2d5f80;
        case 0x2d5f84u: goto label_2d5f84;
        case 0x2d5f88u: goto label_2d5f88;
        case 0x2d5f8cu: goto label_2d5f8c;
        case 0x2d5f90u: goto label_2d5f90;
        case 0x2d5f94u: goto label_2d5f94;
        case 0x2d5f98u: goto label_2d5f98;
        case 0x2d5f9cu: goto label_2d5f9c;
        case 0x2d5fa0u: goto label_2d5fa0;
        case 0x2d5fa4u: goto label_2d5fa4;
        case 0x2d5fa8u: goto label_2d5fa8;
        case 0x2d5facu: goto label_2d5fac;
        case 0x2d5fb0u: goto label_2d5fb0;
        case 0x2d5fb4u: goto label_2d5fb4;
        case 0x2d5fb8u: goto label_2d5fb8;
        case 0x2d5fbcu: goto label_2d5fbc;
        case 0x2d5fc0u: goto label_2d5fc0;
        case 0x2d5fc4u: goto label_2d5fc4;
        case 0x2d5fc8u: goto label_2d5fc8;
        case 0x2d5fccu: goto label_2d5fcc;
        case 0x2d5fd0u: goto label_2d5fd0;
        case 0x2d5fd4u: goto label_2d5fd4;
        case 0x2d5fd8u: goto label_2d5fd8;
        case 0x2d5fdcu: goto label_2d5fdc;
        case 0x2d5fe0u: goto label_2d5fe0;
        case 0x2d5fe4u: goto label_2d5fe4;
        case 0x2d5fe8u: goto label_2d5fe8;
        case 0x2d5fecu: goto label_2d5fec;
        case 0x2d5ff0u: goto label_2d5ff0;
        case 0x2d5ff4u: goto label_2d5ff4;
        case 0x2d5ff8u: goto label_2d5ff8;
        case 0x2d5ffcu: goto label_2d5ffc;
        case 0x2d6000u: goto label_2d6000;
        case 0x2d6004u: goto label_2d6004;
        case 0x2d6008u: goto label_2d6008;
        case 0x2d600cu: goto label_2d600c;
        case 0x2d6010u: goto label_2d6010;
        case 0x2d6014u: goto label_2d6014;
        case 0x2d6018u: goto label_2d6018;
        case 0x2d601cu: goto label_2d601c;
        case 0x2d6020u: goto label_2d6020;
        case 0x2d6024u: goto label_2d6024;
        case 0x2d6028u: goto label_2d6028;
        case 0x2d602cu: goto label_2d602c;
        case 0x2d6030u: goto label_2d6030;
        case 0x2d6034u: goto label_2d6034;
        case 0x2d6038u: goto label_2d6038;
        case 0x2d603cu: goto label_2d603c;
        case 0x2d6040u: goto label_2d6040;
        case 0x2d6044u: goto label_2d6044;
        case 0x2d6048u: goto label_2d6048;
        case 0x2d604cu: goto label_2d604c;
        case 0x2d6050u: goto label_2d6050;
        case 0x2d6054u: goto label_2d6054;
        case 0x2d6058u: goto label_2d6058;
        case 0x2d605cu: goto label_2d605c;
        case 0x2d6060u: goto label_2d6060;
        case 0x2d6064u: goto label_2d6064;
        case 0x2d6068u: goto label_2d6068;
        case 0x2d606cu: goto label_2d606c;
        case 0x2d6070u: goto label_2d6070;
        case 0x2d6074u: goto label_2d6074;
        case 0x2d6078u: goto label_2d6078;
        case 0x2d607cu: goto label_2d607c;
        case 0x2d6080u: goto label_2d6080;
        case 0x2d6084u: goto label_2d6084;
        case 0x2d6088u: goto label_2d6088;
        case 0x2d608cu: goto label_2d608c;
        case 0x2d6090u: goto label_2d6090;
        case 0x2d6094u: goto label_2d6094;
        case 0x2d6098u: goto label_2d6098;
        case 0x2d609cu: goto label_2d609c;
        case 0x2d60a0u: goto label_2d60a0;
        case 0x2d60a4u: goto label_2d60a4;
        case 0x2d60a8u: goto label_2d60a8;
        case 0x2d60acu: goto label_2d60ac;
        case 0x2d60b0u: goto label_2d60b0;
        case 0x2d60b4u: goto label_2d60b4;
        case 0x2d60b8u: goto label_2d60b8;
        case 0x2d60bcu: goto label_2d60bc;
        case 0x2d60c0u: goto label_2d60c0;
        case 0x2d60c4u: goto label_2d60c4;
        case 0x2d60c8u: goto label_2d60c8;
        case 0x2d60ccu: goto label_2d60cc;
        case 0x2d60d0u: goto label_2d60d0;
        case 0x2d60d4u: goto label_2d60d4;
        case 0x2d60d8u: goto label_2d60d8;
        case 0x2d60dcu: goto label_2d60dc;
        case 0x2d60e0u: goto label_2d60e0;
        case 0x2d60e4u: goto label_2d60e4;
        case 0x2d60e8u: goto label_2d60e8;
        case 0x2d60ecu: goto label_2d60ec;
        case 0x2d60f0u: goto label_2d60f0;
        case 0x2d60f4u: goto label_2d60f4;
        case 0x2d60f8u: goto label_2d60f8;
        case 0x2d60fcu: goto label_2d60fc;
        case 0x2d6100u: goto label_2d6100;
        case 0x2d6104u: goto label_2d6104;
        case 0x2d6108u: goto label_2d6108;
        case 0x2d610cu: goto label_2d610c;
        case 0x2d6110u: goto label_2d6110;
        case 0x2d6114u: goto label_2d6114;
        case 0x2d6118u: goto label_2d6118;
        case 0x2d611cu: goto label_2d611c;
        case 0x2d6120u: goto label_2d6120;
        case 0x2d6124u: goto label_2d6124;
        case 0x2d6128u: goto label_2d6128;
        case 0x2d612cu: goto label_2d612c;
        case 0x2d6130u: goto label_2d6130;
        case 0x2d6134u: goto label_2d6134;
        case 0x2d6138u: goto label_2d6138;
        case 0x2d613cu: goto label_2d613c;
        default: break;
    }

    ctx->pc = 0x2d5d60u;

label_2d5d60:
    // 0x2d5d60: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d5d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5d64:
    // 0x2d5d64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2d5d68:
    // 0x2d5d68: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x2d5d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2d5d6c:
    // 0x2d5d6c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2d5d6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d5d70:
    // 0x2d5d70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d5d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5d74:
    // 0x2d5d74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2d5d74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5d78:
    // 0x2d5d78: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2d5d7c:
    if (ctx->pc == 0x2D5D7Cu) {
        ctx->pc = 0x2D5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D78u;
        // 0x2d5d7c: 0x24459630  addiu       $a1, $v0, -0x69D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D80u;
        goto label_2d5d80;
    }
    ctx->pc = 0x2D5D78u;
    {
        const bool branch_taken_0x2d5d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D78u;
        // 0x2d5d7c: 0x24459630  addiu       $a1, $v0, -0x69D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d78) {
            ctx->pc = 0x2D5DB4u;
            goto label_2d5db4;
        }
    }
    ctx->pc = 0x2D5D80u;
label_2d5d80:
    // 0x2d5d80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2d5d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5d84:
    // 0x2d5d84: 0x661026  xor         $v0, $v1, $a2
    ctx->pc = 0x2d5d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_2d5d88:
    // 0x2d5d88: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
label_2d5d8c:
    if (ctx->pc == 0x2D5D8Cu) {
        ctx->pc = 0x2D5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D88u;
        // 0x2d5d8c: 0x2c4a0001  sltiu       $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5D90u;
        goto label_2d5d90;
    }
    ctx->pc = 0x2D5D88u;
    {
        const bool branch_taken_0x2d5d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D5D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D88u;
        // 0x2d5d8c: 0x2c4a0001  sltiu       $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d88) {
            ctx->pc = 0x2D5DB4u;
            goto label_2d5db4;
        }
    }
    ctx->pc = 0x2D5D90u;
label_2d5d90:
    // 0x2d5d90: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2d5d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_2d5d94:
    // 0x2d5d94: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2d5d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2d5d98:
    // 0x2d5d98: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2d5d9c:
    if (ctx->pc == 0x2D5D9Cu) {
        ctx->pc = 0x2D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D98u;
        // 0x2d5d9c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DA0u;
        goto label_2d5da0;
    }
    ctx->pc = 0x2D5D98u;
    {
        const bool branch_taken_0x2d5d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5D98u;
        // 0x2d5d9c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5d98) {
            ctx->pc = 0x2D5DB4u;
            goto label_2d5db4;
        }
    }
    ctx->pc = 0x2D5DA0u;
label_2d5da0:
    // 0x2d5da0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2d5da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d5da4:
    // 0x2d5da4: 0x25430001  addiu       $v1, $t2, 0x1
    ctx->pc = 0x2d5da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2d5da8:
    // 0x2d5da8: 0x861026  xor         $v0, $a0, $a2
    ctx->pc = 0x2d5da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 6));
label_2d5dac:
    // 0x2d5dac: 0x1485fff8  bne         $a0, $a1, . + 4 + (-0x8 << 2)
label_2d5db0:
    if (ctx->pc == 0x2D5DB0u) {
        ctx->pc = 0x2D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DACu;
        // 0x2d5db0: 0x62500a  movz        $t2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DB4u;
        goto label_2d5db4;
    }
    ctx->pc = 0x2D5DACu;
    {
        const bool branch_taken_0x2d5dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DACu;
        // 0x2d5db0: 0x62500a  movz        $t2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5dac) {
            ctx->pc = 0x2D5D90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5d90;
        }
    }
    ctx->pc = 0x2D5DB4u;
label_2d5db4:
    // 0x2d5db4: 0x1140001d  beqz        $t2, . + 4 + (0x1D << 2)
label_2d5db8:
    if (ctx->pc == 0x2D5DB8u) {
        ctx->pc = 0x2D5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DB4u;
        // 0x2d5db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DBCu;
        goto label_2d5dbc;
    }
    ctx->pc = 0x2D5DB4u;
    {
        const bool branch_taken_0x2d5db4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DB4u;
        // 0x2d5db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5db4) {
            ctx->pc = 0x2D5E2Cu;
            goto label_2d5e2c;
        }
    }
    ctx->pc = 0x2D5DBCu;
label_2d5dbc:
    // 0x2d5dbc: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x2d5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_2d5dc0:
    // 0x2d5dc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d5dc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5dc4:
    // 0x2d5dc4: 0x11600017  beqz        $t3, . + 4 + (0x17 << 2)
label_2d5dc8:
    if (ctx->pc == 0x2D5DC8u) {
        ctx->pc = 0x2D5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DC4u;
        // 0x2d5dc8: 0x244a0002  addiu       $t2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DCCu;
        goto label_2d5dcc;
    }
    ctx->pc = 0x2D5DC4u;
    {
        const bool branch_taken_0x2d5dc4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DC4u;
        // 0x2d5dc8: 0x244a0002  addiu       $t2, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5dc4) {
            ctx->pc = 0x2D5E24u;
            goto label_2d5e24;
        }
    }
    ctx->pc = 0x2D5DCCu;
label_2d5dcc:
    // 0x2d5dcc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x2d5dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_2d5dd0:
    // 0x2d5dd0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2d5dd4:
    if (ctx->pc == 0x2D5DD4u) {
        ctx->pc = 0x2D5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DD0u;
        // 0x2d5dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DD8u;
        goto label_2d5dd8;
    }
    ctx->pc = 0x2D5DD0u;
    {
        const bool branch_taken_0x2d5dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DD0u;
        // 0x2d5dd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5dd0) {
            ctx->pc = 0x2D5E08u;
            goto label_2d5e08;
        }
    }
    ctx->pc = 0x2D5DD8u;
label_2d5dd8:
    // 0x2d5dd8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2d5dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2d5ddc:
    // 0x2d5ddc: 0x0  nop
    ctx->pc = 0x2d5ddcu;
    // NOP
label_2d5de0:
    // 0x2d5de0: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x2d5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2d5de4:
    // 0x2d5de4: 0xab1021  addu        $v0, $a1, $t3
    ctx->pc = 0x2d5de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_2d5de8:
    // 0x2d5de8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d5de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5dec:
    // 0x2d5dec: 0x0  nop
    ctx->pc = 0x2d5decu;
    // NOP
label_2d5df0:
    // 0x2d5df0: 0x0  nop
    ctx->pc = 0x2d5df0u;
    // NOP
label_2d5df4:
    // 0x2d5df4: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
label_2d5df8:
    if (ctx->pc == 0x2D5DF8u) {
        ctx->pc = 0x2D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DF4u;
        // 0x2d5df8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5DFCu;
        goto label_2d5dfc;
    }
    ctx->pc = 0x2D5DF4u;
    {
        const bool branch_taken_0x2d5df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5df4) {
            ctx->pc = 0x2D5DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5DF4u;
            // 0x2d5df8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5de0;
        }
    }
    ctx->pc = 0x2D5DFCu;
label_2d5dfc:
    // 0x2d5dfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d5e00:
    if (ctx->pc == 0x2D5E00u) {
        ctx->pc = 0x2D5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DFCu;
        // 0x2d5e00: 0x1651021  addu        $v0, $t3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E04u;
        goto label_2d5e04;
    }
    ctx->pc = 0x2D5DFCu;
    {
        const bool branch_taken_0x2d5dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5DFCu;
        // 0x2d5e00: 0x1651021  addu        $v0, $t3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5dfc) {
            ctx->pc = 0x2D5E0Cu;
            goto label_2d5e0c;
        }
    }
    ctx->pc = 0x2D5E04u;
label_2d5e04:
    // 0x2d5e04: 0x0  nop
    ctx->pc = 0x2d5e04u;
    // NOP
label_2d5e08:
    // 0x2d5e08: 0x1651021  addu        $v0, $t3, $a1
    ctx->pc = 0x2d5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
label_2d5e0c:
    // 0x2d5e0c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2d5e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_2d5e10:
    // 0x2d5e10: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x2d5e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2d5e14:
    // 0x2d5e14: 0x24849630  addiu       $a0, $a0, -0x69D0
    ctx->pc = 0x2d5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940208));
label_2d5e18:
    // 0x2d5e18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d5e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d5e1c:
    // 0x2d5e1c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_2d5e20:
    if (ctx->pc == 0x2D5E20u) {
        ctx->pc = 0x2D5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E1Cu;
        // 0x2d5e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E24u;
        goto label_2d5e24;
    }
    ctx->pc = 0x2D5E1Cu;
    {
        const bool branch_taken_0x2d5e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2D5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E1Cu;
        // 0x2d5e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e1c) {
            ctx->pc = 0x2D5E2Cu;
            goto label_2d5e2c;
        }
    }
    ctx->pc = 0x2D5E24u;
label_2d5e24:
    // 0x2d5e24: 0xace90000  sw          $t1, 0x0($a3)
    ctx->pc = 0x2d5e24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
label_2d5e28:
    // 0x2d5e28: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x2d5e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e2c:
    // 0x2d5e2c: 0x3e00008  jr          $ra
label_2d5e30:
    if (ctx->pc == 0x2D5E30u) {
        ctx->pc = 0x2D5E34u;
        goto label_2d5e34;
    }
    ctx->pc = 0x2D5E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5E34u;
label_2d5e34:
    // 0x2d5e34: 0x0  nop
    ctx->pc = 0x2d5e34u;
    // NOP
label_2d5e38:
    // 0x2d5e38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d5e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2d5e3c:
    // 0x2d5e3c: 0x2402020c  addiu       $v0, $zero, 0x20C
    ctx->pc = 0x2d5e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
label_2d5e40:
    // 0x2d5e40: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2d5e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2d5e44:
    // 0x2d5e44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d5e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e48:
    // 0x2d5e48: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d5e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2d5e4c:
    // 0x2d5e4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d5e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e50:
    // 0x2d5e50: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2d5e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2d5e54:
    // 0x2d5e54: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2d5e54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e58:
    // 0x2d5e58: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2d5e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_2d5e5c:
    // 0x2d5e5c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2d5e5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d5e60:
    // 0x2d5e60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d5e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2d5e64:
    // 0x2d5e64: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d5e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2d5e68:
    // 0x2d5e68: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d5e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2d5e6c:
    // 0x2d5e6c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2d5e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_2d5e70:
    // 0x2d5e70: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2d5e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_2d5e74:
    // 0x2d5e74: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2d5e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2d5e78:
    // 0x2d5e78: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x2d5e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
label_2d5e7c:
    // 0x2d5e7c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d5e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2d5e80:
    // 0x2d5e80: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d5e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2d5e84:
    // 0x2d5e84: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2d5e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_2d5e88:
    // 0x2d5e88: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2d5e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2d5e8c:
    // 0x2d5e8c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2d5e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2d5e90:
    // 0x2d5e90: 0x1260009e  beqz        $s3, . + 4 + (0x9E << 2)
label_2d5e94:
    if (ctx->pc == 0x2D5E94u) {
        ctx->pc = 0x2D5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E90u;
        // 0x2d5e94: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5E98u;
        goto label_2d5e98;
    }
    ctx->pc = 0x2D5E90u;
    {
        const bool branch_taken_0x2d5e90 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E90u;
        // 0x2d5e94: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5e90) {
            ctx->pc = 0x2D610Cu;
            goto label_2d610c;
        }
    }
    ctx->pc = 0x2D5E98u;
label_2d5e98:
    // 0x2d5e98: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5e9c:
    // 0x2d5e9c: 0x5460009c  bnel        $v1, $zero, . + 4 + (0x9C << 2)
label_2d5ea0:
    if (ctx->pc == 0x2D5EA0u) {
        ctx->pc = 0x2D5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5E9Cu;
        // 0x2d5ea0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EA4u;
        goto label_2d5ea4;
    }
    ctx->pc = 0x2D5E9Cu;
    {
        const bool branch_taken_0x2d5e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5e9c) {
            ctx->pc = 0x2D5EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5E9Cu;
            // 0x2d5ea0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6110u;
            goto label_2d6110;
        }
    }
    ctx->pc = 0x2D5EA4u;
label_2d5ea4:
    // 0x2d5ea4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2d5ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d5ea8:
    // 0x2d5ea8: 0x60f809  jalr        $v1
label_2d5eac:
    if (ctx->pc == 0x2D5EACu) {
        ctx->pc = 0x2D5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EA8u;
        // 0x2d5eac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EB0u;
        goto label_2d5eb0;
    }
    ctx->pc = 0x2D5EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D5EB0u);
        ctx->pc = 0x2D5EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EA8u;
        // 0x2d5eac: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5EA8u, 0x2D5EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5EB0u;
label_2d5eb0:
    // 0x2d5eb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d5eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d5eb4:
    // 0x2d5eb4: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
label_2d5eb8:
    if (ctx->pc == 0x2D5EB8u) {
        ctx->pc = 0x2D5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EB4u;
        // 0x2d5eb8: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EBCu;
        goto label_2d5ebc;
    }
    ctx->pc = 0x2D5EB4u;
    {
        const bool branch_taken_0x2d5eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D5EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EB4u;
        // 0x2d5eb8: 0x24020205  addiu       $v0, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5eb4) {
            ctx->pc = 0x2D5F18u;
            goto label_2d5f18;
        }
    }
    ctx->pc = 0x2D5EBCu;
label_2d5ebc:
    // 0x2d5ebc: 0x10000094  b           . + 4 + (0x94 << 2)
label_2d5ec0:
    if (ctx->pc == 0x2D5EC0u) {
        ctx->pc = 0x2D5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EBCu;
        // 0x2d5ec0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EC4u;
        goto label_2d5ec4;
    }
    ctx->pc = 0x2D5EBCu;
    {
        const bool branch_taken_0x2d5ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EBCu;
        // 0x2d5ec0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ebc) {
            ctx->pc = 0x2D6110u;
            goto label_2d6110;
        }
    }
    ctx->pc = 0x2D5EC4u;
label_2d5ec4:
    // 0x2d5ec4: 0x0  nop
    ctx->pc = 0x2d5ec4u;
    // NOP
label_2d5ec8:
    // 0x2d5ec8: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x2d5ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_2d5ecc:
    // 0x2d5ecc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d5ed0:
    // 0x2d5ed0: 0x40f809  jalr        $v0
label_2d5ed4:
    if (ctx->pc == 0x2D5ED4u) {
        ctx->pc = 0x2D5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ED0u;
        // 0x2d5ed4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5ED8u;
        goto label_2d5ed8;
    }
    ctx->pc = 0x2D5ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5ED8u);
        ctx->pc = 0x2D5ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ED0u;
        // 0x2d5ed4: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5ED0u, 0x2D5ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5ED8u;
label_2d5ed8:
    // 0x2d5ed8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2d5edc:
    if (ctx->pc == 0x2D5EDCu) {
        ctx->pc = 0x2D5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ED8u;
        // 0x2d5edc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EE0u;
        goto label_2d5ee0;
    }
    ctx->pc = 0x2D5ED8u;
    {
        const bool branch_taken_0x2d5ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5ED8u;
        // 0x2d5edc: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ed8) {
            ctx->pc = 0x2D5EF0u;
            goto label_2d5ef0;
        }
    }
    ctx->pc = 0x2D5EE0u;
label_2d5ee0:
    // 0x2d5ee0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d5ee4:
    // 0x2d5ee4: 0x2402020b  addiu       $v0, $zero, 0x20B
    ctx->pc = 0x2d5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
label_2d5ee8:
    // 0x2d5ee8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_2d5eec:
    if (ctx->pc == 0x2D5EECu) {
        ctx->pc = 0x2D5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EE8u;
        // 0x2d5eec: 0x8fb00028  lw          $s0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5EF0u;
        goto label_2d5ef0;
    }
    ctx->pc = 0x2D5EE8u;
    {
        const bool branch_taken_0x2d5ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EE8u;
        // 0x2d5eec: 0x8fb00028  lw          $s0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ee8) {
            ctx->pc = 0x2D5F58u;
            goto label_2d5f58;
        }
    }
    ctx->pc = 0x2D5EF0u;
label_2d5ef0:
    // 0x2d5ef0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2d5ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5ef4:
    // 0x2d5ef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d5ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d5ef8:
    // 0x2d5ef8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d5ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d5efc:
    // 0x2d5efc: 0xc0b5758  jal         func_2D5D60
label_2d5f00:
    if (ctx->pc == 0x2D5F00u) {
        ctx->pc = 0x2D5F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5EFCu;
        // 0x2d5f00: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F04u;
        goto label_2d5f04;
    }
    ctx->pc = 0x2D5EFCu;
    SET_GPR_U32(ctx, 31, 0x2D5F04u);
    ctx->pc = 0x2D5F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5EFCu;
    // 0x2d5f00: 0x27a70018  addiu       $a3, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D60u;
    goto label_2d5d60;
    ctx->pc = 0x2D5F04u;
label_2d5f04:
    // 0x2d5f04: 0x24100221  addiu       $s0, $zero, 0x221
    ctx->pc = 0x2d5f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 545));
label_2d5f08:
    // 0x2d5f08: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2d5f0c:
    if (ctx->pc == 0x2D5F0Cu) {
        ctx->pc = 0x2D5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F08u;
        // 0x2d5f0c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F10u;
        goto label_2d5f10;
    }
    ctx->pc = 0x2D5F08u;
    {
        const bool branch_taken_0x2d5f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F08u;
        // 0x2d5f0c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f08) {
            ctx->pc = 0x2D5F58u;
            goto label_2d5f58;
        }
    }
    ctx->pc = 0x2D5F10u;
label_2d5f10:
    // 0x2d5f10: 0x10000011  b           . + 4 + (0x11 << 2)
label_2d5f14:
    if (ctx->pc == 0x2D5F14u) {
        ctx->pc = 0x2D5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F10u;
        // 0x2d5f14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F18u;
        goto label_2d5f18;
    }
    ctx->pc = 0x2D5F10u;
    {
        const bool branch_taken_0x2d5f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F10u;
        // 0x2d5f14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f10) {
            ctx->pc = 0x2D5F58u;
            goto label_2d5f58;
        }
    }
    ctx->pc = 0x2D5F18u;
label_2d5f18:
    // 0x2d5f18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d5f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5f1c:
    // 0x2d5f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d5f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5f20:
    // 0x2d5f20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d5f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d5f24:
    // 0x2d5f24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5f28:
    // 0x2d5f28: 0x40f809  jalr        $v0
label_2d5f2c:
    if (ctx->pc == 0x2D5F2Cu) {
        ctx->pc = 0x2D5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F28u;
        // 0x2d5f2c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F30u;
        goto label_2d5f30;
    }
    ctx->pc = 0x2D5F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5F30u);
        ctx->pc = 0x2D5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F28u;
        // 0x2d5f2c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F28u, 0x2D5F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5F30u;
label_2d5f30:
    // 0x2d5f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5f34:
    // 0x2d5f34: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_2d5f38:
    if (ctx->pc == 0x2D5F38u) {
        ctx->pc = 0x2D5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F34u;
        // 0x2d5f38: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F3Cu;
        goto label_2d5f3c;
    }
    ctx->pc = 0x2D5F34u;
    {
        const bool branch_taken_0x2d5f34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F34u;
        // 0x2d5f38: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f34) {
            ctx->pc = 0x2D5F60u;
            goto label_2d5f60;
        }
    }
    ctx->pc = 0x2D5F3Cu;
label_2d5f3c:
    // 0x2d5f3c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2d5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_2d5f40:
    // 0x2d5f40: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d5f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d5f44:
    // 0x2d5f44: 0x40f809  jalr        $v0
label_2d5f48:
    if (ctx->pc == 0x2D5F48u) {
        ctx->pc = 0x2D5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F44u;
        // 0x2d5f48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F4Cu;
        goto label_2d5f4c;
    }
    ctx->pc = 0x2D5F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5F4Cu);
        ctx->pc = 0x2D5F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F44u;
        // 0x2d5f48: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F44u, 0x2D5F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5F4Cu;
label_2d5f4c:
    // 0x2d5f4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5f50:
    // 0x2d5f50: 0x1200ffdd  beqz        $s0, . + 4 + (-0x23 << 2)
label_2d5f54:
    if (ctx->pc == 0x2D5F54u) {
        ctx->pc = 0x2D5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F50u;
        // 0x2d5f54: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F58u;
        goto label_2d5f58;
    }
    ctx->pc = 0x2D5F50u;
    {
        const bool branch_taken_0x2d5f50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F50u;
        // 0x2d5f54: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f50) {
            ctx->pc = 0x2D5EC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5ec8;
        }
    }
    ctx->pc = 0x2D5F58u;
label_2d5f58:
    // 0x2d5f58: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
label_2d5f5c:
    if (ctx->pc == 0x2D5F5Cu) {
        ctx->pc = 0x2D5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F58u;
        // 0x2d5f5c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F60u;
        goto label_2d5f60;
    }
    ctx->pc = 0x2D5F58u;
    {
        const bool branch_taken_0x2d5f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F58u;
        // 0x2d5f5c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f58) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D5F60u;
label_2d5f60:
    // 0x2d5f60: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d5f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d5f64:
    // 0x2d5f64: 0x40f809  jalr        $v0
label_2d5f68:
    if (ctx->pc == 0x2D5F68u) {
        ctx->pc = 0x2D5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F64u;
        // 0x2d5f68: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F6Cu;
        goto label_2d5f6c;
    }
    ctx->pc = 0x2D5F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5F6Cu);
        ctx->pc = 0x2D5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F64u;
        // 0x2d5f68: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5F64u, 0x2D5F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5F6Cu;
label_2d5f6c:
    // 0x2d5f6c: 0x10000067  b           . + 4 + (0x67 << 2)
label_2d5f70:
    if (ctx->pc == 0x2D5F70u) {
        ctx->pc = 0x2D5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F6Cu;
        // 0x2d5f70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5F74u;
        goto label_2d5f74;
    }
    ctx->pc = 0x2D5F6Cu;
    {
        const bool branch_taken_0x2d5f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F6Cu;
        // 0x2d5f70: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5f6c) {
            ctx->pc = 0x2D610Cu;
            goto label_2d610c;
        }
    }
    ctx->pc = 0x2D5F74u;
label_2d5f74:
    // 0x2d5f74: 0x0  nop
    ctx->pc = 0x2d5f74u;
    // NOP
label_2d5f78:
    // 0x2d5f78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2d5f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d5f7c:
    // 0x2d5f7c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d5f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d5f80:
    // 0x2d5f80: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5f84:
    // 0x2d5f84: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2d5f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d5f88:
    // 0x2d5f88: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2d5f88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d5f8c:
    // 0x2d5f8c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2d5f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2d5f90:
    // 0x2d5f90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d5f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d5f94:
    // 0x2d5f94: 0x8c51fff8  lw          $s1, -0x8($v0)
    ctx->pc = 0x2d5f94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967288)));
label_2d5f98:
    // 0x2d5f98: 0xc0b56c8  jal         func_2D5B20
label_2d5f9c:
    if (ctx->pc == 0x2D5F9Cu) {
        ctx->pc = 0x2D5F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5F98u;
        // 0x2d5f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FA0u;
        goto label_2d5fa0;
    }
    ctx->pc = 0x2D5F98u;
    SET_GPR_U32(ctx, 31, 0x2D5FA0u);
    ctx->pc = 0x2D5F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5F98u;
    // 0x2d5f9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5B20u, 0x2D5F98u, 0x2D5FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5FA0u;
label_2d5fa0:
    // 0x2d5fa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d5fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5fa4:
    // 0x2d5fa4: 0x16000055  bnez        $s0, . + 4 + (0x55 << 2)
label_2d5fa8:
    if (ctx->pc == 0x2D5FA8u) {
        ctx->pc = 0x2D5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FA4u;
        // 0x2d5fa8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FACu;
        goto label_2d5fac;
    }
    ctx->pc = 0x2D5FA4u;
    {
        const bool branch_taken_0x2d5fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FA4u;
        // 0x2d5fa8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fa4) {
            ctx->pc = 0x2D60FCu;
            goto label_2d60fc;
        }
    }
    ctx->pc = 0x2D5FACu;
label_2d5fac:
    // 0x2d5fac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2d5facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2d5fb0:
    // 0x2d5fb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d5fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5fb4:
    // 0x2d5fb4: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2d5fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2d5fb8:
    // 0x2d5fb8: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
label_2d5fbc:
    if (ctx->pc == 0x2D5FBCu) {
        ctx->pc = 0x2D5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FB8u;
        // 0x2d5fbc: 0x8c5e0010  lw          $fp, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FC0u;
        goto label_2d5fc0;
    }
    ctx->pc = 0x2D5FB8u;
    {
        const bool branch_taken_0x2d5fb8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FB8u;
        // 0x2d5fbc: 0x8c5e0010  lw          $fp, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fb8) {
            ctx->pc = 0x2D6074u;
            goto label_2d6074;
        }
    }
    ctx->pc = 0x2D5FC0u;
label_2d5fc0:
    // 0x2d5fc0: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x2d5fc0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
label_2d5fc4:
    // 0x2d5fc4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2d5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2d5fc8:
    // 0x2d5fc8: 0x26a29630  addiu       $v0, $s5, -0x69D0
    ctx->pc = 0x2d5fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940208));
label_2d5fcc:
    // 0x2d5fcc: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
label_2d5fd0:
    if (ctx->pc == 0x2D5FD0u) {
        ctx->pc = 0x2D5FD4u;
        goto label_2d5fd4;
    }
    ctx->pc = 0x2D5FCCu;
    {
        const bool branch_taken_0x2d5fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2d5fcc) {
            ctx->pc = 0x2D6074u;
            goto label_2d6074;
        }
    }
    ctx->pc = 0x2D5FD4u;
label_2d5fd4:
    // 0x2d5fd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d5fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d5fd8:
    // 0x2d5fd8: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x2d5fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d5fdc:
    // 0x2d5fdc: 0x0  nop
    ctx->pc = 0x2d5fdcu;
    // NOP
label_2d5fe0:
    // 0x2d5fe0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d5fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5fe4:
    // 0x2d5fe4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d5fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d5fe8:
    // 0x2d5fe8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2d5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2d5fec:
    // 0x2d5fec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2d5ff0:
    // 0x2d5ff0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2d5ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2d5ff4:
    // 0x2d5ff4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2d5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_2d5ff8:
    // 0x2d5ff8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2d5ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2d5ffc:
    // 0x2d5ffc: 0x3c36021  addu        $t4, $fp, $v1
    ctx->pc = 0x2d5ffcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_2d6000:
    // 0x2d6000: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2d6000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2d6004:
    // 0x2d6004: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6008:
    // 0x2d6008: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_2d600c:
    if (ctx->pc == 0x2D600Cu) {
        ctx->pc = 0x2D600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6008u;
        // 0x2d600c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6010u;
        goto label_2d6010;
    }
    ctx->pc = 0x2D6008u;
    {
        const bool branch_taken_0x2d6008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6008u;
        // 0x2d600c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6008) {
            ctx->pc = 0x2D6048u;
            goto label_2d6048;
        }
    }
    ctx->pc = 0x2D6010u;
label_2d6010:
    // 0x2d6010: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d6010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d6014:
    // 0x2d6014: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2d6014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d6018:
    // 0x2d6018: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2d6018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2d601c:
    // 0x2d601c: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x2d601cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d6020:
    // 0x2d6020: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2d6020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6024:
    // 0x2d6024: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x2d6024u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2d6028:
    // 0x2d6028: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x2d6028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2d602c:
    // 0x2d602c: 0x8faa0020  lw          $t2, 0x20($sp)
    ctx->pc = 0x2d602cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6030:
    // 0x2d6030: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d6030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2d6034:
    // 0x2d6034: 0xc0b5660  jal         func_2D5980
label_2d6038:
    if (ctx->pc == 0x2D6038u) {
        ctx->pc = 0x2D6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6034u;
        // 0x2d6038: 0xafac0008  sw          $t4, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D603Cu;
        goto label_2d603c;
    }
    ctx->pc = 0x2D6034u;
    SET_GPR_U32(ctx, 31, 0x2D603Cu);
    ctx->pc = 0x2D6038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6034u;
    // 0x2d6038: 0xafac0008  sw          $t4, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5980u, 0x2D6034u, 0x2D603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D603Cu;
label_2d603c:
    // 0x2d603c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d603cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6040:
    // 0x2d6040: 0x1600002e  bnez        $s0, . + 4 + (0x2E << 2)
label_2d6044:
    if (ctx->pc == 0x2D6044u) {
        ctx->pc = 0x2D6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6040u;
        // 0x2d6044: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6048u;
        goto label_2d6048;
    }
    ctx->pc = 0x2D6040u;
    {
        const bool branch_taken_0x2d6040 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6040u;
        // 0x2d6044: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6040) {
            ctx->pc = 0x2D60FCu;
            goto label_2d60fc;
        }
    }
    ctx->pc = 0x2D6048u;
label_2d6048:
    // 0x2d6048: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d6048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d604c:
    // 0x2d604c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2d604cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2d6050:
    // 0x2d6050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d6050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6054:
    // 0x2d6054: 0x941821  addu        $v1, $a0, $s4
    ctx->pc = 0x2d6054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_2d6058:
    // 0x2d6058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d6058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d605c:
    // 0x2d605c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2d6060:
    if (ctx->pc == 0x2D6060u) {
        ctx->pc = 0x2D6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D605Cu;
        // 0x2d6060: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6064u;
        goto label_2d6064;
    }
    ctx->pc = 0x2D605Cu;
    {
        const bool branch_taken_0x2d605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D605Cu;
        // 0x2d6060: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d605c) {
            ctx->pc = 0x2D6074u;
            goto label_2d6074;
        }
    }
    ctx->pc = 0x2D6064u;
label_2d6064:
    // 0x2d6064: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2d6064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2d6068:
    // 0x2d6068: 0x26a29630  addiu       $v0, $s5, -0x69D0
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294940208));
label_2d606c:
    // 0x2d606c: 0x1462ffdc  bne         $v1, $v0, . + 4 + (-0x24 << 2)
label_2d6070:
    if (ctx->pc == 0x2D6070u) {
        ctx->pc = 0x2D6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D606Cu;
        // 0x2d6070: 0x941821  addu        $v1, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6074u;
        goto label_2d6074;
    }
    ctx->pc = 0x2D606Cu;
    {
        const bool branch_taken_0x2d606c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D606Cu;
        // 0x2d6070: 0x941821  addu        $v1, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d606c) {
            ctx->pc = 0x2D5FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5fe0;
        }
    }
    ctx->pc = 0x2D6074u;
label_2d6074:
    // 0x2d6074: 0x16000021  bnez        $s0, . + 4 + (0x21 << 2)
label_2d6078:
    if (ctx->pc == 0x2D6078u) {
        ctx->pc = 0x2D6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6074u;
        // 0x2d6078: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D607Cu;
        goto label_2d607c;
    }
    ctx->pc = 0x2D6074u;
    {
        const bool branch_taken_0x2d6074 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6074u;
        // 0x2d6078: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6074) {
            ctx->pc = 0x2D60FCu;
            goto label_2d60fc;
        }
    }
    ctx->pc = 0x2D607Cu;
label_2d607c:
    // 0x2d607c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d607cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2d6080:
    // 0x2d6080: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2d6084:
    if (ctx->pc == 0x2D6084u) {
        ctx->pc = 0x2D6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6080u;
        // 0x2d6084: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6088u;
        goto label_2d6088;
    }
    ctx->pc = 0x2D6080u;
    {
        const bool branch_taken_0x2d6080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6080u;
        // 0x2d6084: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6080) {
            ctx->pc = 0x2D60F4u;
            goto label_2d60f4;
        }
    }
    ctx->pc = 0x2D6088u;
label_2d6088:
    // 0x2d6088: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d6088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d608c:
    // 0x2d608c: 0x0  nop
    ctx->pc = 0x2d608cu;
    // NOP
label_2d6090:
    // 0x2d6090: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d6090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6094:
    // 0x2d6094: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2d6094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2d6098:
    // 0x2d6098: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2d6098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d609c:
    // 0x2d609c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d609cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2d60a0:
    // 0x2d60a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2d60a4:
    // 0x2d60a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d60a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2d60a8:
    // 0x2d60a8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2d60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2d60ac:
    // 0x2d60ac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2d60acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d60b0:
    // 0x2d60b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2d60b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2d60b4:
    // 0x2d60b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2d60b8:
    if (ctx->pc == 0x2D60B8u) {
        ctx->pc = 0x2D60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60B4u;
        // 0x2d60b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D60BCu;
        goto label_2d60bc;
    }
    ctx->pc = 0x2D60B4u;
    {
        const bool branch_taken_0x2d60b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60B4u;
        // 0x2d60b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60b4) {
            ctx->pc = 0x2D6090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d6090;
        }
    }
    ctx->pc = 0x2D60BCu;
label_2d60bc:
    // 0x2d60bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_2d60c0:
    if (ctx->pc == 0x2D60C0u) {
        ctx->pc = 0x2D60C4u;
        goto label_2d60c4;
    }
    ctx->pc = 0x2D60BCu;
    {
        const bool branch_taken_0x2d60bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d60bc) {
            ctx->pc = 0x2D60F4u;
            goto label_2d60f4;
        }
    }
    ctx->pc = 0x2D60C4u;
label_2d60c4:
    // 0x2d60c4: 0x0  nop
    ctx->pc = 0x2d60c4u;
    // NOP
label_2d60c8:
    // 0x2d60c8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2d60c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2d60cc:
    // 0x2d60cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d60ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d60d0:
    // 0x2d60d0: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2d60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2d60d4:
    // 0x2d60d4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2d60d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d60d8:
    // 0x2d60d8: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x2d60d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2d60dc:
    // 0x2d60dc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x2d60dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d60e0:
    // 0x2d60e0: 0xc0b56fa  jal         func_2D5BE8
label_2d60e4:
    if (ctx->pc == 0x2D60E4u) {
        ctx->pc = 0x2D60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60E0u;
        // 0x2d60e4: 0x8fa80014  lw          $t0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D60E8u;
        goto label_2d60e8;
    }
    ctx->pc = 0x2D60E0u;
    SET_GPR_U32(ctx, 31, 0x2D60E8u);
    ctx->pc = 0x2D60E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D60E0u;
    // 0x2d60e4: 0x8fa80014  lw          $t0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5BE8u, 0x2D60E0u, 0x2D60E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D60E8u;
label_2d60e8:
    // 0x2d60e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d60e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d60ec:
    // 0x2d60ec: 0x1200ffa2  beqz        $s0, . + 4 + (-0x5E << 2)
label_2d60f0:
    if (ctx->pc == 0x2D60F0u) {
        ctx->pc = 0x2D60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60ECu;
        // 0x2d60f0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D60F4u;
        goto label_2d60f4;
    }
    ctx->pc = 0x2D60ECu;
    {
        const bool branch_taken_0x2d60ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D60F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60ECu;
        // 0x2d60f0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60ec) {
            ctx->pc = 0x2D5F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d5f78;
        }
    }
    ctx->pc = 0x2D60F4u;
label_2d60f4:
    // 0x2d60f4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2d60f8:
    if (ctx->pc == 0x2D60F8u) {
        ctx->pc = 0x2D60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60F4u;
        // 0x2d60f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D60FCu;
        goto label_2d60fc;
    }
    ctx->pc = 0x2D60F4u;
    {
        const bool branch_taken_0x2d60f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D60F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60F4u;
        // 0x2d60f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60f4) {
            ctx->pc = 0x2D610Cu;
            goto label_2d610c;
        }
    }
    ctx->pc = 0x2D60FCu;
label_2d60fc:
    // 0x2d60fc: 0xc0b5850  jal         func_2D6140
label_2d6100:
    if (ctx->pc == 0x2D6100u) {
        ctx->pc = 0x2D6100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60FCu;
        // 0x2d6100: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6104u;
        goto label_2d6104;
    }
    ctx->pc = 0x2D60FCu;
    SET_GPR_U32(ctx, 31, 0x2D6104u);
    ctx->pc = 0x2D6100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D60FCu;
    // 0x2d6100: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6140u, 0x2D60FCu, 0x2D6104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6104u;
label_2d6104:
    // 0x2d6104: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2d6104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_2d6108:
    // 0x2d6108: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d610c:
    // 0x2d610c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d610cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6110:
    // 0x2d6110: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d6110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d6114:
    // 0x2d6114: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d6114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d6118:
    // 0x2d6118: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2d6118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d611c:
    // 0x2d611c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d611cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2d6120:
    // 0x2d6120: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2d6120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2d6124:
    // 0x2d6124: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2d6124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2d6128:
    // 0x2d6128: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2d6128u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2d612c:
    // 0x2d612c: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2d612cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d6130:
    // 0x2d6130: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2d6130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2d6134:
    // 0x2d6134: 0x3e00008  jr          $ra
label_2d6138:
    if (ctx->pc == 0x2D6138u) {
        ctx->pc = 0x2D6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6134u;
        // 0x2d6138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D613Cu;
        goto label_2d613c;
    }
    ctx->pc = 0x2D6134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6134u;
        // 0x2d6138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D613Cu;
label_2d613c:
    // 0x2d613c: 0x0  nop
    ctx->pc = 0x2d613cu;
    // NOP
    if (ctx->pc == 0x2d613cu) { ctx->pc = 0x2d6140u; }
}
