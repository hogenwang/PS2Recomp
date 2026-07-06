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

// Function: sub_002B5CD8
// Address: 0x2b5cd8 - 0x2b6068
void sub_002B5CD8_0x2b5cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5CD8_0x2b5cd8");
#endif

    switch (ctx->pc) {
        case 0x2b5cd8u: goto label_2b5cd8;
        case 0x2b5cdcu: goto label_2b5cdc;
        case 0x2b5ce0u: goto label_2b5ce0;
        case 0x2b5ce4u: goto label_2b5ce4;
        case 0x2b5ce8u: goto label_2b5ce8;
        case 0x2b5cecu: goto label_2b5cec;
        case 0x2b5cf0u: goto label_2b5cf0;
        case 0x2b5cf4u: goto label_2b5cf4;
        case 0x2b5cf8u: goto label_2b5cf8;
        case 0x2b5cfcu: goto label_2b5cfc;
        case 0x2b5d00u: goto label_2b5d00;
        case 0x2b5d04u: goto label_2b5d04;
        case 0x2b5d08u: goto label_2b5d08;
        case 0x2b5d0cu: goto label_2b5d0c;
        case 0x2b5d10u: goto label_2b5d10;
        case 0x2b5d14u: goto label_2b5d14;
        case 0x2b5d18u: goto label_2b5d18;
        case 0x2b5d1cu: goto label_2b5d1c;
        case 0x2b5d20u: goto label_2b5d20;
        case 0x2b5d24u: goto label_2b5d24;
        case 0x2b5d28u: goto label_2b5d28;
        case 0x2b5d2cu: goto label_2b5d2c;
        case 0x2b5d30u: goto label_2b5d30;
        case 0x2b5d34u: goto label_2b5d34;
        case 0x2b5d38u: goto label_2b5d38;
        case 0x2b5d3cu: goto label_2b5d3c;
        case 0x2b5d40u: goto label_2b5d40;
        case 0x2b5d44u: goto label_2b5d44;
        case 0x2b5d48u: goto label_2b5d48;
        case 0x2b5d4cu: goto label_2b5d4c;
        case 0x2b5d50u: goto label_2b5d50;
        case 0x2b5d54u: goto label_2b5d54;
        case 0x2b5d58u: goto label_2b5d58;
        case 0x2b5d5cu: goto label_2b5d5c;
        case 0x2b5d60u: goto label_2b5d60;
        case 0x2b5d64u: goto label_2b5d64;
        case 0x2b5d68u: goto label_2b5d68;
        case 0x2b5d6cu: goto label_2b5d6c;
        case 0x2b5d70u: goto label_2b5d70;
        case 0x2b5d74u: goto label_2b5d74;
        case 0x2b5d78u: goto label_2b5d78;
        case 0x2b5d7cu: goto label_2b5d7c;
        case 0x2b5d80u: goto label_2b5d80;
        case 0x2b5d84u: goto label_2b5d84;
        case 0x2b5d88u: goto label_2b5d88;
        case 0x2b5d8cu: goto label_2b5d8c;
        case 0x2b5d90u: goto label_2b5d90;
        case 0x2b5d94u: goto label_2b5d94;
        case 0x2b5d98u: goto label_2b5d98;
        case 0x2b5d9cu: goto label_2b5d9c;
        case 0x2b5da0u: goto label_2b5da0;
        case 0x2b5da4u: goto label_2b5da4;
        case 0x2b5da8u: goto label_2b5da8;
        case 0x2b5dacu: goto label_2b5dac;
        case 0x2b5db0u: goto label_2b5db0;
        case 0x2b5db4u: goto label_2b5db4;
        case 0x2b5db8u: goto label_2b5db8;
        case 0x2b5dbcu: goto label_2b5dbc;
        case 0x2b5dc0u: goto label_2b5dc0;
        case 0x2b5dc4u: goto label_2b5dc4;
        case 0x2b5dc8u: goto label_2b5dc8;
        case 0x2b5dccu: goto label_2b5dcc;
        case 0x2b5dd0u: goto label_2b5dd0;
        case 0x2b5dd4u: goto label_2b5dd4;
        case 0x2b5dd8u: goto label_2b5dd8;
        case 0x2b5ddcu: goto label_2b5ddc;
        case 0x2b5de0u: goto label_2b5de0;
        case 0x2b5de4u: goto label_2b5de4;
        case 0x2b5de8u: goto label_2b5de8;
        case 0x2b5decu: goto label_2b5dec;
        case 0x2b5df0u: goto label_2b5df0;
        case 0x2b5df4u: goto label_2b5df4;
        case 0x2b5df8u: goto label_2b5df8;
        case 0x2b5dfcu: goto label_2b5dfc;
        case 0x2b5e00u: goto label_2b5e00;
        case 0x2b5e04u: goto label_2b5e04;
        case 0x2b5e08u: goto label_2b5e08;
        case 0x2b5e0cu: goto label_2b5e0c;
        case 0x2b5e10u: goto label_2b5e10;
        case 0x2b5e14u: goto label_2b5e14;
        case 0x2b5e18u: goto label_2b5e18;
        case 0x2b5e1cu: goto label_2b5e1c;
        case 0x2b5e20u: goto label_2b5e20;
        case 0x2b5e24u: goto label_2b5e24;
        case 0x2b5e28u: goto label_2b5e28;
        case 0x2b5e2cu: goto label_2b5e2c;
        case 0x2b5e30u: goto label_2b5e30;
        case 0x2b5e34u: goto label_2b5e34;
        case 0x2b5e38u: goto label_2b5e38;
        case 0x2b5e3cu: goto label_2b5e3c;
        case 0x2b5e40u: goto label_2b5e40;
        case 0x2b5e44u: goto label_2b5e44;
        case 0x2b5e48u: goto label_2b5e48;
        case 0x2b5e4cu: goto label_2b5e4c;
        case 0x2b5e50u: goto label_2b5e50;
        case 0x2b5e54u: goto label_2b5e54;
        case 0x2b5e58u: goto label_2b5e58;
        case 0x2b5e5cu: goto label_2b5e5c;
        case 0x2b5e60u: goto label_2b5e60;
        case 0x2b5e64u: goto label_2b5e64;
        case 0x2b5e68u: goto label_2b5e68;
        case 0x2b5e6cu: goto label_2b5e6c;
        case 0x2b5e70u: goto label_2b5e70;
        case 0x2b5e74u: goto label_2b5e74;
        case 0x2b5e78u: goto label_2b5e78;
        case 0x2b5e7cu: goto label_2b5e7c;
        case 0x2b5e80u: goto label_2b5e80;
        case 0x2b5e84u: goto label_2b5e84;
        case 0x2b5e88u: goto label_2b5e88;
        case 0x2b5e8cu: goto label_2b5e8c;
        case 0x2b5e90u: goto label_2b5e90;
        case 0x2b5e94u: goto label_2b5e94;
        case 0x2b5e98u: goto label_2b5e98;
        case 0x2b5e9cu: goto label_2b5e9c;
        case 0x2b5ea0u: goto label_2b5ea0;
        case 0x2b5ea4u: goto label_2b5ea4;
        case 0x2b5ea8u: goto label_2b5ea8;
        case 0x2b5eacu: goto label_2b5eac;
        case 0x2b5eb0u: goto label_2b5eb0;
        case 0x2b5eb4u: goto label_2b5eb4;
        case 0x2b5eb8u: goto label_2b5eb8;
        case 0x2b5ebcu: goto label_2b5ebc;
        case 0x2b5ec0u: goto label_2b5ec0;
        case 0x2b5ec4u: goto label_2b5ec4;
        case 0x2b5ec8u: goto label_2b5ec8;
        case 0x2b5eccu: goto label_2b5ecc;
        case 0x2b5ed0u: goto label_2b5ed0;
        case 0x2b5ed4u: goto label_2b5ed4;
        case 0x2b5ed8u: goto label_2b5ed8;
        case 0x2b5edcu: goto label_2b5edc;
        case 0x2b5ee0u: goto label_2b5ee0;
        case 0x2b5ee4u: goto label_2b5ee4;
        case 0x2b5ee8u: goto label_2b5ee8;
        case 0x2b5eecu: goto label_2b5eec;
        case 0x2b5ef0u: goto label_2b5ef0;
        case 0x2b5ef4u: goto label_2b5ef4;
        case 0x2b5ef8u: goto label_2b5ef8;
        case 0x2b5efcu: goto label_2b5efc;
        case 0x2b5f00u: goto label_2b5f00;
        case 0x2b5f04u: goto label_2b5f04;
        case 0x2b5f08u: goto label_2b5f08;
        case 0x2b5f0cu: goto label_2b5f0c;
        case 0x2b5f10u: goto label_2b5f10;
        case 0x2b5f14u: goto label_2b5f14;
        case 0x2b5f18u: goto label_2b5f18;
        case 0x2b5f1cu: goto label_2b5f1c;
        case 0x2b5f20u: goto label_2b5f20;
        case 0x2b5f24u: goto label_2b5f24;
        case 0x2b5f28u: goto label_2b5f28;
        case 0x2b5f2cu: goto label_2b5f2c;
        case 0x2b5f30u: goto label_2b5f30;
        case 0x2b5f34u: goto label_2b5f34;
        case 0x2b5f38u: goto label_2b5f38;
        case 0x2b5f3cu: goto label_2b5f3c;
        case 0x2b5f40u: goto label_2b5f40;
        case 0x2b5f44u: goto label_2b5f44;
        case 0x2b5f48u: goto label_2b5f48;
        case 0x2b5f4cu: goto label_2b5f4c;
        case 0x2b5f50u: goto label_2b5f50;
        case 0x2b5f54u: goto label_2b5f54;
        case 0x2b5f58u: goto label_2b5f58;
        case 0x2b5f5cu: goto label_2b5f5c;
        case 0x2b5f60u: goto label_2b5f60;
        case 0x2b5f64u: goto label_2b5f64;
        case 0x2b5f68u: goto label_2b5f68;
        case 0x2b5f6cu: goto label_2b5f6c;
        case 0x2b5f70u: goto label_2b5f70;
        case 0x2b5f74u: goto label_2b5f74;
        case 0x2b5f78u: goto label_2b5f78;
        case 0x2b5f7cu: goto label_2b5f7c;
        case 0x2b5f80u: goto label_2b5f80;
        case 0x2b5f84u: goto label_2b5f84;
        case 0x2b5f88u: goto label_2b5f88;
        case 0x2b5f8cu: goto label_2b5f8c;
        case 0x2b5f90u: goto label_2b5f90;
        case 0x2b5f94u: goto label_2b5f94;
        case 0x2b5f98u: goto label_2b5f98;
        case 0x2b5f9cu: goto label_2b5f9c;
        case 0x2b5fa0u: goto label_2b5fa0;
        case 0x2b5fa4u: goto label_2b5fa4;
        case 0x2b5fa8u: goto label_2b5fa8;
        case 0x2b5facu: goto label_2b5fac;
        case 0x2b5fb0u: goto label_2b5fb0;
        case 0x2b5fb4u: goto label_2b5fb4;
        case 0x2b5fb8u: goto label_2b5fb8;
        case 0x2b5fbcu: goto label_2b5fbc;
        case 0x2b5fc0u: goto label_2b5fc0;
        case 0x2b5fc4u: goto label_2b5fc4;
        case 0x2b5fc8u: goto label_2b5fc8;
        case 0x2b5fccu: goto label_2b5fcc;
        case 0x2b5fd0u: goto label_2b5fd0;
        case 0x2b5fd4u: goto label_2b5fd4;
        case 0x2b5fd8u: goto label_2b5fd8;
        case 0x2b5fdcu: goto label_2b5fdc;
        case 0x2b5fe0u: goto label_2b5fe0;
        case 0x2b5fe4u: goto label_2b5fe4;
        case 0x2b5fe8u: goto label_2b5fe8;
        case 0x2b5fecu: goto label_2b5fec;
        case 0x2b5ff0u: goto label_2b5ff0;
        case 0x2b5ff4u: goto label_2b5ff4;
        case 0x2b5ff8u: goto label_2b5ff8;
        case 0x2b5ffcu: goto label_2b5ffc;
        case 0x2b6000u: goto label_2b6000;
        case 0x2b6004u: goto label_2b6004;
        case 0x2b6008u: goto label_2b6008;
        case 0x2b600cu: goto label_2b600c;
        case 0x2b6010u: goto label_2b6010;
        case 0x2b6014u: goto label_2b6014;
        case 0x2b6018u: goto label_2b6018;
        case 0x2b601cu: goto label_2b601c;
        case 0x2b6020u: goto label_2b6020;
        case 0x2b6024u: goto label_2b6024;
        case 0x2b6028u: goto label_2b6028;
        case 0x2b602cu: goto label_2b602c;
        case 0x2b6030u: goto label_2b6030;
        case 0x2b6034u: goto label_2b6034;
        case 0x2b6038u: goto label_2b6038;
        case 0x2b603cu: goto label_2b603c;
        case 0x2b6040u: goto label_2b6040;
        case 0x2b6044u: goto label_2b6044;
        case 0x2b6048u: goto label_2b6048;
        case 0x2b604cu: goto label_2b604c;
        case 0x2b6050u: goto label_2b6050;
        case 0x2b6054u: goto label_2b6054;
        case 0x2b6058u: goto label_2b6058;
        case 0x2b605cu: goto label_2b605c;
        case 0x2b6060u: goto label_2b6060;
        case 0x2b6064u: goto label_2b6064;
        default: break;
    }

    ctx->pc = 0x2b5cd8u;

label_2b5cd8:
    // 0x2b5cd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b5cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2b5cdc:
    // 0x2b5cdc: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2b5cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_2b5ce0:
    // 0x2b5ce0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2b5ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_2b5ce4:
    // 0x2b5ce4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b5ce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5ce8:
    // 0x2b5ce8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2b5ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2b5cec:
    // 0x2b5cec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2b5cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2b5cf0:
    // 0x2b5cf0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b5cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2b5cf4:
    // 0x2b5cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b5cf8:
    // 0x2b5cf8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2b5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_2b5cfc:
    // 0x2b5cfc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2b5cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_2b5d00:
    // 0x2b5d00: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x2b5d00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
label_2b5d04:
    // 0x2b5d04: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b5d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b5d08:
    // 0x2b5d08: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x2b5d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
label_2b5d0c:
    // 0x2b5d0c: 0x8e1400b0  lw          $s4, 0xB0($s0)
    ctx->pc = 0x2b5d0cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_2b5d10:
    // 0x2b5d10: 0x247200b4  addiu       $s2, $v1, 0xB4
    ctx->pc = 0x2b5d10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
label_2b5d14:
    // 0x2b5d14: 0x30534000  andi        $s3, $v0, 0x4000
    ctx->pc = 0x2b5d14u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2b5d18:
    // 0x2b5d18: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x2b5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2b5d1c:
    // 0x2b5d1c: 0x241100f1  addiu       $s1, $zero, 0xF1
    ctx->pc = 0x2b5d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_2b5d20:
    // 0x2b5d20: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
label_2b5d24:
    if (ctx->pc == 0x2B5D24u) {
        ctx->pc = 0x2B5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D20u;
        // 0x2b5d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D28u;
        goto label_2b5d28;
    }
    ctx->pc = 0x2B5D20u;
    {
        const bool branch_taken_0x2b5d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B5D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D20u;
        // 0x2b5d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d20) {
            ctx->pc = 0x2B5D38u;
            goto label_2b5d38;
        }
    }
    ctx->pc = 0x2B5D28u;
label_2b5d28:
    // 0x2b5d28: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2b5d2c:
    // 0x2b5d2c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2b5d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2b5d30:
    // 0x2b5d30: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_2b5d34:
    if (ctx->pc == 0x2B5D34u) {
        ctx->pc = 0x2B5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D30u;
        // 0x2b5d34: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D38u;
        goto label_2b5d38;
    }
    ctx->pc = 0x2B5D30u;
    {
        const bool branch_taken_0x2b5d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D30u;
        // 0x2b5d34: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d30) {
            ctx->pc = 0x2B5E78u;
            goto label_2b5e78;
        }
    }
    ctx->pc = 0x2B5D38u;
label_2b5d38:
    // 0x2b5d38: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2b5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b5d3c:
    // 0x2b5d3c: 0x24064805  addiu       $a2, $zero, 0x4805
    ctx->pc = 0x2b5d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18437));
label_2b5d40:
    // 0x2b5d40: 0xc0ad6ae  jal         func_2B5AB8
label_2b5d44:
    if (ctx->pc == 0x2B5D44u) {
        ctx->pc = 0x2B5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D40u;
        // 0x2b5d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D48u;
        goto label_2b5d48;
    }
    ctx->pc = 0x2B5D40u;
    SET_GPR_U32(ctx, 31, 0x2B5D48u);
    ctx->pc = 0x2B5D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5D40u;
    // 0x2b5d44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B5D40u, 0x2B5D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5D48u;
label_2b5d48:
    // 0x2b5d48: 0x184000bf  blez        $v0, . + 4 + (0xBF << 2)
label_2b5d4c:
    if (ctx->pc == 0x2B5D4Cu) {
        ctx->pc = 0x2B5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D48u;
        // 0x2b5d4c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5D50u;
        goto label_2b5d50;
    }
    ctx->pc = 0x2B5D48u;
    {
        const bool branch_taken_0x2b5d48 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D48u;
        // 0x2b5d4c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d48) {
            ctx->pc = 0x2B6048u;
            goto label_2b6048;
        }
    }
    ctx->pc = 0x2B5D50u;
label_2b5d50:
    // 0x2b5d50: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x2b5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
label_2b5d54:
    // 0x2b5d54: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b5d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2b5d58:
    // 0x2b5d58: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2b5d58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5d5c:
    // 0x2b5d5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b5d60:
    // 0x2b5d60: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2b5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2b5d64:
    // 0x2b5d64: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2b5d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5d68:
    // 0x2b5d68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b5d6c:
    // 0x2b5d6c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2b5d6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5d70:
    // 0x2b5d70: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2b5d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2b5d74:
    // 0x2b5d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2b5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b5d78:
    // 0x2b5d78: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2b5d78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b5d7c:
    // 0x2b5d7c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2b5d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2b5d80:
    // 0x2b5d80: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x2b5d80u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2b5d84:
    // 0x2b5d84: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2b5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2b5d88:
    // 0x2b5d88: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2b5d88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2b5d8c:
    // 0x2b5d8c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2b5d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_2b5d90:
    // 0x2b5d90: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x2b5d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_2b5d94:
    // 0x2b5d94: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2b5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2b5d98:
    // 0x2b5d98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2b5d9c:
    if (ctx->pc == 0x2B5D9Cu) {
        ctx->pc = 0x2B5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D98u;
        // 0x2b5d9c: 0x38c03  sra         $s1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DA0u;
        goto label_2b5da0;
    }
    ctx->pc = 0x2B5D98u;
    {
        const bool branch_taken_0x2b5d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5D98u;
        // 0x2b5d9c: 0x38c03  sra         $s1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5d98) {
            ctx->pc = 0x2B5DCCu;
            goto label_2b5dcc;
        }
    }
    ctx->pc = 0x2B5DA0u;
label_2b5da0:
    // 0x2b5da0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b5da4:
    // 0x2b5da4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_2b5da8:
    if (ctx->pc == 0x2B5DA8u) {
        ctx->pc = 0x2B5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DA4u;
        // 0x2b5da8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DACu;
        goto label_2b5dac;
    }
    ctx->pc = 0x2B5DA4u;
    {
        const bool branch_taken_0x2b5da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B5DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DA4u;
        // 0x2b5da8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5da4) {
            ctx->pc = 0x2B5DD0u;
            goto label_2b5dd0;
        }
    }
    ctx->pc = 0x2B5DACu;
label_2b5dac:
    // 0x2b5dac: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2b5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2b5db0:
    // 0x2b5db0: 0x2406010b  addiu       $a2, $zero, 0x10B
    ctx->pc = 0x2b5db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
label_2b5db4:
    // 0x2b5db4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5db8:
    // 0x2b5db8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b5db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5dbc:
    // 0x2b5dbc: 0xc0a5648  jal         func_295920
label_2b5dc0:
    if (ctx->pc == 0x2B5DC0u) {
        ctx->pc = 0x2B5DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DBCu;
        // 0x2b5dc0: 0x24120046  addiu       $s2, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DC4u;
        goto label_2b5dc4;
    }
    ctx->pc = 0x2B5DBCu;
    SET_GPR_U32(ctx, 31, 0x2B5DC4u);
    ctx->pc = 0x2B5DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DBCu;
    // 0x2b5dc0: 0x24120046  addiu       $s2, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B5DBCu, 0x2B5DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DC4u;
label_2b5dc4:
    // 0x2b5dc4: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2b5dc8:
    if (ctx->pc == 0x2B5DC8u) {
        ctx->pc = 0x2B5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC4u;
        // 0x2b5dc8: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DCCu;
        goto label_2b5dcc;
    }
    ctx->pc = 0x2B5DC4u;
    {
        const bool branch_taken_0x2b5dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DC4u;
        // 0x2b5dc8: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dc4) {
            ctx->pc = 0x2B6030u;
            goto label_2b6030;
        }
    }
    ctx->pc = 0x2B5DCCu;
label_2b5dcc:
    // 0x2b5dcc: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x2b5dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_2b5dd0:
    // 0x2b5dd0: 0x111a03  sra         $v1, $s1, 8
    ctx->pc = 0x2b5dd0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 8));
label_2b5dd4:
    // 0x2b5dd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b5dd8:
    // 0x2b5dd8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2b5ddc:
    if (ctx->pc == 0x2B5DDCu) {
        ctx->pc = 0x2B5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DD8u;
        // 0x2b5ddc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DE0u;
        goto label_2b5de0;
    }
    ctx->pc = 0x2B5DD8u;
    {
        const bool branch_taken_0x2b5dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B5DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DD8u;
        // 0x2b5ddc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5dd8) {
            ctx->pc = 0x2B5DFCu;
            goto label_2b5dfc;
        }
    }
    ctx->pc = 0x2B5DE0u;
label_2b5de0:
    // 0x2b5de0: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2b5de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2b5de4:
    // 0x2b5de4: 0x2406010b  addiu       $a2, $zero, 0x10B
    ctx->pc = 0x2b5de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 267));
label_2b5de8:
    // 0x2b5de8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5de8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5dec:
    // 0x2b5dec: 0xc0a5648  jal         func_295920
label_2b5df0:
    if (ctx->pc == 0x2B5DF0u) {
        ctx->pc = 0x2B5DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DECu;
        // 0x2b5df0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DF4u;
        goto label_2b5df4;
    }
    ctx->pc = 0x2B5DECu;
    SET_GPR_U32(ctx, 31, 0x2B5DF4u);
    ctx->pc = 0x2B5DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5DECu;
    // 0x2b5df0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B5DECu, 0x2B5DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5DF4u;
label_2b5df4:
    // 0x2b5df4: 0x10000093  b           . + 4 + (0x93 << 2)
label_2b5df8:
    if (ctx->pc == 0x2B5DF8u) {
        ctx->pc = 0x2B5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DF4u;
        // 0x2b5df8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5DFCu;
        goto label_2b5dfc;
    }
    ctx->pc = 0x2B5DF4u;
    {
        const bool branch_taken_0x2b5df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5DF4u;
        // 0x2b5df8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5df4) {
            ctx->pc = 0x2B6044u;
            goto label_2b6044;
        }
    }
    ctx->pc = 0x2B5DFCu;
label_2b5dfc:
    // 0x2b5dfc: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2b5dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b5e00:
    // 0x2b5e00: 0x26624800  addiu       $v0, $s3, 0x4800
    ctx->pc = 0x2b5e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 18432));
label_2b5e04:
    // 0x2b5e04: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2b5e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2b5e08:
    // 0x2b5e08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b5e0c:
    if (ctx->pc == 0x2B5E0Cu) {
        ctx->pc = 0x2B5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E08u;
        // 0x2b5e0c: 0x240600c6  addiu       $a2, $zero, 0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E10u;
        goto label_2b5e10;
    }
    ctx->pc = 0x2B5E08u;
    {
        const bool branch_taken_0x2b5e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E08u;
        // 0x2b5e0c: 0x240600c6  addiu       $a2, $zero, 0xC6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e08) {
            ctx->pc = 0x2B5E1Cu;
            goto label_2b5e1c;
        }
    }
    ctx->pc = 0x2B5E10u;
label_2b5e10:
    // 0x2b5e10: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x2b5e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b5e14:
    // 0x2b5e14: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2b5e18:
    if (ctx->pc == 0x2B5E18u) {
        ctx->pc = 0x2B5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E14u;
        // 0x2b5e18: 0x2405008f  addiu       $a1, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E1Cu;
        goto label_2b5e1c;
    }
    ctx->pc = 0x2B5E14u;
    {
        const bool branch_taken_0x2b5e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E14u;
        // 0x2b5e18: 0x2405008f  addiu       $a1, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e14) {
            ctx->pc = 0x2B5FD4u;
            goto label_2b5fd4;
        }
    }
    ctx->pc = 0x2B5E1Cu;
label_2b5e1c:
    // 0x2b5e1c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b5e20:
    // 0x2b5e20: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x2b5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_2b5e24:
    // 0x2b5e24: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x2b5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_2b5e28:
    // 0x2b5e28: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2b5e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2b5e2c:
    // 0x2b5e2c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2b5e30:
    if (ctx->pc == 0x2B5E30u) {
        ctx->pc = 0x2B5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E2Cu;
        // 0x2b5e30: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E34u;
        goto label_2b5e34;
    }
    ctx->pc = 0x2B5E2Cu;
    {
        const bool branch_taken_0x2b5e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E2Cu;
        // 0x2b5e30: 0x24a50005  addiu       $a1, $a1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e2c) {
            ctx->pc = 0x2B5E68u;
            goto label_2b5e68;
        }
    }
    ctx->pc = 0x2B5E34u;
label_2b5e34:
    // 0x2b5e34: 0xc0ab5a8  jal         func_2AD6A0
label_2b5e38:
    if (ctx->pc == 0x2B5E38u) {
        ctx->pc = 0x2B5E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E34u;
        // 0x2b5e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E3Cu;
        goto label_2b5e3c;
    }
    ctx->pc = 0x2B5E34u;
    SET_GPR_U32(ctx, 31, 0x2B5E3Cu);
    ctx->pc = 0x2B5E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E34u;
    // 0x2b5e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD6A0u, 0x2B5E34u, 0x2B5E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E3Cu;
label_2b5e3c:
    // 0x2b5e3c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2b5e40:
    if (ctx->pc == 0x2B5E40u) {
        ctx->pc = 0x2B5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E3Cu;
        // 0x2b5e40: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E44u;
        goto label_2b5e44;
    }
    ctx->pc = 0x2B5E3Cu;
    {
        const bool branch_taken_0x2b5e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E3Cu;
        // 0x2b5e40: 0x240200f1  addiu       $v0, $zero, 0xF1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e3c) {
            ctx->pc = 0x2B5E6Cu;
            goto label_2b5e6c;
        }
    }
    ctx->pc = 0x2B5E44u;
label_2b5e44:
    // 0x2b5e44: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b5e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b5e48:
    // 0x2b5e48: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2b5e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2b5e4c:
    // 0x2b5e4c: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b5e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b5e50:
    // 0x2b5e50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5e54:
    // 0x2b5e54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2b5e54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5e58:
    // 0x2b5e58: 0xc0a5648  jal         func_295920
label_2b5e5c:
    if (ctx->pc == 0x2B5E5Cu) {
        ctx->pc = 0x2B5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E58u;
        // 0x2b5e5c: 0x24120050  addiu       $s2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E60u;
        goto label_2b5e60;
    }
    ctx->pc = 0x2B5E58u;
    SET_GPR_U32(ctx, 31, 0x2B5E60u);
    ctx->pc = 0x2B5E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E58u;
    // 0x2b5e5c: 0x24120050  addiu       $s2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B5E58u, 0x2B5E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E60u;
label_2b5e60:
    // 0x2b5e60: 0x10000074  b           . + 4 + (0x74 << 2)
label_2b5e64:
    if (ctx->pc == 0x2B5E64u) {
        ctx->pc = 0x2B5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E60u;
        // 0x2b5e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E68u;
        goto label_2b5e68;
    }
    ctx->pc = 0x2B5E60u;
    {
        const bool branch_taken_0x2b5e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E60u;
        // 0x2b5e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e60) {
            ctx->pc = 0x2B6034u;
            goto label_2b6034;
        }
    }
    ctx->pc = 0x2B5E68u;
label_2b5e68:
    // 0x2b5e68: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x2b5e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_2b5e6c:
    // 0x2b5e6c: 0x240300f1  addiu       $v1, $zero, 0xF1
    ctx->pc = 0x2b5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_2b5e70:
    // 0x2b5e70: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2b5e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2b5e74:
    // 0x2b5e74: 0x240200f1  addiu       $v0, $zero, 0xF1
    ctx->pc = 0x2b5e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
label_2b5e78:
    // 0x2b5e78: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_2b5e7c:
    if (ctx->pc == 0x2B5E7Cu) {
        ctx->pc = 0x2B5E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E78u;
        // 0x2b5e7c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E80u;
        goto label_2b5e80;
    }
    ctx->pc = 0x2B5E78u;
    {
        const bool branch_taken_0x2b5e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b5e78) {
            ctx->pc = 0x2B5E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5E78u;
            // 0x2b5e7c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5EB8u;
            goto label_2b5eb8;
        }
    }
    ctx->pc = 0x2B5E80u;
label_2b5e80:
    // 0x2b5e80: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x2b5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_2b5e84:
    // 0x2b5e84: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2b5e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b5e88:
    // 0x2b5e88: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x2b5e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
label_2b5e8c:
    // 0x2b5e8c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2b5e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2b5e90:
    // 0x2b5e90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2b5e94:
    if (ctx->pc == 0x2B5E94u) {
        ctx->pc = 0x2B5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E90u;
        // 0x2b5e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5E98u;
        goto label_2b5e98;
    }
    ctx->pc = 0x2B5E90u;
    {
        const bool branch_taken_0x2b5e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E90u;
        // 0x2b5e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e90) {
            ctx->pc = 0x2B5EACu;
            goto label_2b5eac;
        }
    }
    ctx->pc = 0x2B5E98u;
label_2b5e98:
    // 0x2b5e98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b5e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5e9c:
    // 0x2b5e9c: 0xc0ad6ae  jal         func_2B5AB8
label_2b5ea0:
    if (ctx->pc == 0x2B5EA0u) {
        ctx->pc = 0x2B5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E9Cu;
        // 0x2b5ea0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EA4u;
        goto label_2b5ea4;
    }
    ctx->pc = 0x2B5E9Cu;
    SET_GPR_U32(ctx, 31, 0x2B5EA4u);
    ctx->pc = 0x2B5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E9Cu;
    // 0x2b5ea0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B5E9Cu, 0x2B5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EA4u;
label_2b5ea4:
    // 0x2b5ea4: 0x18400068  blez        $v0, . + 4 + (0x68 << 2)
label_2b5ea8:
    if (ctx->pc == 0x2B5EA8u) {
        ctx->pc = 0x2B5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EA4u;
        // 0x2b5ea8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EACu;
        goto label_2b5eac;
    }
    ctx->pc = 0x2B5EA4u;
    {
        const bool branch_taken_0x2b5ea4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EA4u;
        // 0x2b5ea8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ea4) {
            ctx->pc = 0x2B6048u;
            goto label_2b6048;
        }
    }
    ctx->pc = 0x2B5EACu;
label_2b5eac:
    // 0x2b5eac: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x2b5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2b5eb0:
    // 0x2b5eb0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2b5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_2b5eb4:
    // 0x2b5eb4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2b5eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2b5eb8:
    // 0x2b5eb8: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x2b5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_2b5ebc:
    // 0x2b5ebc: 0x26634800  addiu       $v1, $s3, 0x4800
    ctx->pc = 0x2b5ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 18432));
label_2b5ec0:
    // 0x2b5ec0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2b5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_2b5ec4:
    // 0x2b5ec4: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2b5ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2b5ec8:
    // 0x2b5ec8: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2b5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_2b5ecc:
    // 0x2b5ecc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b5ed0:
    // 0x2b5ed0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2b5ed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b5ed4:
    // 0x2b5ed4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2b5ed8:
    if (ctx->pc == 0x2B5ED8u) {
        ctx->pc = 0x2B5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5ED4u;
        // 0x2b5ed8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EDCu;
        goto label_2b5edc;
    }
    ctx->pc = 0x2B5ED4u;
    {
        const bool branch_taken_0x2b5ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5ED4u;
        // 0x2b5ed8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ed4) {
            ctx->pc = 0x2B5EECu;
            goto label_2b5eec;
        }
    }
    ctx->pc = 0x2B5EDCu;
label_2b5edc:
    // 0x2b5edc: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x2b5edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b5ee0:
    // 0x2b5ee0: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2b5ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2b5ee4:
    // 0x2b5ee4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2b5ee8:
    if (ctx->pc == 0x2B5EE8u) {
        ctx->pc = 0x2B5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EE4u;
        // 0x2b5ee8: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5EECu;
        goto label_2b5eec;
    }
    ctx->pc = 0x2B5EE4u;
    {
        const bool branch_taken_0x2b5ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EE4u;
        // 0x2b5ee8: 0x24060096  addiu       $a2, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ee4) {
            ctx->pc = 0x2B5FD4u;
            goto label_2b5fd4;
        }
    }
    ctx->pc = 0x2B5EECu;
label_2b5eec:
    // 0x2b5eec: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2b5eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2b5ef0:
    // 0x2b5ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5ef4:
    // 0x2b5ef4: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2b5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2b5ef8:
    // 0x2b5ef8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b5efc:
    // 0x2b5efc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b5f00:
    // 0x2b5f00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5f04:
    // 0x2b5f04: 0x40f809  jalr        $v0
label_2b5f08:
    if (ctx->pc == 0x2B5F08u) {
        ctx->pc = 0x2B5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F04u;
        // 0x2b5f08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F0Cu;
        goto label_2b5f0c;
    }
    ctx->pc = 0x2B5F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5F0Cu);
        ctx->pc = 0x2B5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F04u;
        // 0x2b5f08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F04u, 0x2B5F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5F0Cu;
label_2b5f0c:
    // 0x2b5f0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b5f10:
    if (ctx->pc == 0x2B5F10u) {
        ctx->pc = 0x2B5F14u;
        goto label_2b5f14;
    }
    ctx->pc = 0x2B5F0Cu;
    {
        const bool branch_taken_0x2b5f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f0c) {
            ctx->pc = 0x2B5F1Cu;
            goto label_2b5f1c;
        }
    }
    ctx->pc = 0x2B5F14u;
label_2b5f14:
    // 0x2b5f14: 0x10000046  b           . + 4 + (0x46 << 2)
label_2b5f18:
    if (ctx->pc == 0x2B5F18u) {
        ctx->pc = 0x2B5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F14u;
        // 0x2b5f18: 0x24120033  addiu       $s2, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F1Cu;
        goto label_2b5f1c;
    }
    ctx->pc = 0x2B5F14u;
    {
        const bool branch_taken_0x2b5f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F14u;
        // 0x2b5f18: 0x24120033  addiu       $s2, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f14) {
            ctx->pc = 0x2B6030u;
            goto label_2b6030;
        }
    }
    ctx->pc = 0x2B5F1Cu;
label_2b5f1c:
    // 0x2b5f1c: 0x52800007  beql        $s4, $zero, . + 4 + (0x7 << 2)
label_2b5f20:
    if (ctx->pc == 0x2B5F20u) {
        ctx->pc = 0x2B5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F1Cu;
        // 0x2b5f20: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F24u;
        goto label_2b5f24;
    }
    ctx->pc = 0x2B5F1Cu;
    {
        const bool branch_taken_0x2b5f1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f1c) {
            ctx->pc = 0x2B5F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5F1Cu;
            // 0x2b5f20: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5F3Cu;
            goto label_2b5f3c;
        }
    }
    ctx->pc = 0x2B5F24u;
label_2b5f24:
    // 0x2b5f24: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2b5f28:
    // 0x2b5f28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2b5f2c:
    if (ctx->pc == 0x2B5F2Cu) {
        ctx->pc = 0x2B5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F28u;
        // 0x2b5f2c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F30u;
        goto label_2b5f30;
    }
    ctx->pc = 0x2B5F28u;
    {
        const bool branch_taken_0x2b5f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f28) {
            ctx->pc = 0x2B5F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5F28u;
            // 0x2b5f2c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5F3Cu;
            goto label_2b5f3c;
        }
    }
    ctx->pc = 0x2B5F30u;
label_2b5f30:
    // 0x2b5f30: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2b5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2b5f34:
    // 0x2b5f34: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2b5f38:
    if (ctx->pc == 0x2B5F38u) {
        ctx->pc = 0x2B5F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F34u;
        // 0x2b5f38: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F3Cu;
        goto label_2b5f3c;
    }
    ctx->pc = 0x2B5F34u;
    {
        const bool branch_taken_0x2b5f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5f34) {
            ctx->pc = 0x2B5F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5F34u;
            // 0x2b5f38: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5F3Cu;
            goto label_2b5f3c;
        }
    }
    ctx->pc = 0x2B5F3Cu;
label_2b5f3c:
    // 0x2b5f3c: 0x16a0002b  bnez        $s5, . + 4 + (0x2B << 2)
label_2b5f40:
    if (ctx->pc == 0x2B5F40u) {
        ctx->pc = 0x2B5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F3Cu;
        // 0x2b5f40: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F44u;
        goto label_2b5f44;
    }
    ctx->pc = 0x2B5F3Cu;
    {
        const bool branch_taken_0x2b5f3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F3Cu;
        // 0x2b5f40: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f3c) {
            ctx->pc = 0x2B5FECu;
            goto label_2b5fec;
        }
    }
    ctx->pc = 0x2B5F44u;
label_2b5f44:
    // 0x2b5f44: 0x8e110068  lw          $s1, 0x68($s0)
    ctx->pc = 0x2b5f44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_2b5f48:
    // 0x2b5f48: 0x26224400  addiu       $v0, $s1, 0x4400
    ctx->pc = 0x2b5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 17408));
label_2b5f4c:
    // 0x2b5f4c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b5f50:
    // 0x2b5f50: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b5f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b5f54:
    // 0x2b5f54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2b5f58:
    if (ctx->pc == 0x2B5F58u) {
        ctx->pc = 0x2B5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F54u;
        // 0x2b5f58: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F5Cu;
        goto label_2b5f5c;
    }
    ctx->pc = 0x2B5F54u;
    {
        const bool branch_taken_0x2b5f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F54u;
        // 0x2b5f58: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f54) {
            ctx->pc = 0x2B5F6Cu;
            goto label_2b5f6c;
        }
    }
    ctx->pc = 0x2B5F5Cu;
label_2b5f5c:
    // 0x2b5f5c: 0x24120016  addiu       $s2, $zero, 0x16
    ctx->pc = 0x2b5f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2b5f60:
    // 0x2b5f60: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2b5f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2b5f64:
    // 0x2b5f64: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2b5f68:
    if (ctx->pc == 0x2B5F68u) {
        ctx->pc = 0x2B5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F64u;
        // 0x2b5f68: 0x240600cd  addiu       $a2, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F6Cu;
        goto label_2b5f6c;
    }
    ctx->pc = 0x2B5F64u;
    {
        const bool branch_taken_0x2b5f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F64u;
        // 0x2b5f68: 0x240600cd  addiu       $a2, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f64) {
            ctx->pc = 0x2B5FD4u;
            goto label_2b5fd4;
        }
    }
    ctx->pc = 0x2B5F6Cu;
label_2b5f6c:
    // 0x2b5f6c: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x2b5f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2b5f70:
    // 0x2b5f70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b5f74:
    if (ctx->pc == 0x2B5F74u) {
        ctx->pc = 0x2B5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F70u;
        // 0x2b5f74: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F78u;
        goto label_2b5f78;
    }
    ctx->pc = 0x2B5F70u;
    {
        const bool branch_taken_0x2b5f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F70u;
        // 0x2b5f74: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f70) {
            ctx->pc = 0x2B5F84u;
            goto label_2b5f84;
        }
    }
    ctx->pc = 0x2B5F78u;
label_2b5f78:
    // 0x2b5f78: 0x24120032  addiu       $s2, $zero, 0x32
    ctx->pc = 0x2b5f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2b5f7c:
    // 0x2b5f7c: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b5f80:
    if (ctx->pc == 0x2B5F80u) {
        ctx->pc = 0x2B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F7Cu;
        // 0x2b5f80: 0x2405008f  addiu       $a1, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5F84u;
        goto label_2b5f84;
    }
    ctx->pc = 0x2B5F7Cu;
    {
        const bool branch_taken_0x2b5f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F7Cu;
        // 0x2b5f80: 0x2405008f  addiu       $a1, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f7c) {
            ctx->pc = 0x2B5FD4u;
            goto label_2b5fd4;
        }
    }
    ctx->pc = 0x2B5F84u;
label_2b5f84:
    // 0x2b5f84: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x2b5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2b5f88:
    // 0x2b5f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f8c:
    // 0x2b5f8c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2b5f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_2b5f90:
    // 0x2b5f90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b5f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f94:
    // 0x2b5f94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b5f98:
    // 0x2b5f98: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2b5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2b5f9c:
    // 0x2b5f9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b5fa0:
    // 0x2b5fa0: 0x40f809  jalr        $v0
label_2b5fa4:
    if (ctx->pc == 0x2B5FA4u) {
        ctx->pc = 0x2B5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FA0u;
        // 0x2b5fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FA8u;
        goto label_2b5fa8;
    }
    ctx->pc = 0x2B5FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B5FA8u);
        ctx->pc = 0x2B5FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FA0u;
        // 0x2b5fa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5FA0u, 0x2B5FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B5FA8u;
label_2b5fa8:
    // 0x2b5fa8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2b5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2b5fac:
    // 0x2b5fac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b5facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5fb0:
    // 0x2b5fb0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x2b5fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b5fb4:
    // 0x2b5fb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b5fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b5fb8:
    // 0x2b5fb8: 0xc049c22  jal         func_127088
label_2b5fbc:
    if (ctx->pc == 0x2B5FBCu) {
        ctx->pc = 0x2B5FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FB8u;
        // 0x2b5fbc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FC0u;
        goto label_2b5fc0;
    }
    ctx->pc = 0x2B5FB8u;
    SET_GPR_U32(ctx, 31, 0x2B5FC0u);
    ctx->pc = 0x2B5FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FB8u;
    // 0x2b5fbc: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2B5FB8u, 0x2B5FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FC0u;
label_2b5fc0:
    // 0x2b5fc0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2b5fc4:
    if (ctx->pc == 0x2B5FC4u) {
        ctx->pc = 0x2B5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FC0u;
        // 0x2b5fc4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FC8u;
        goto label_2b5fc8;
    }
    ctx->pc = 0x2B5FC0u;
    {
        const bool branch_taken_0x2b5fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FC0u;
        // 0x2b5fc4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fc0) {
            ctx->pc = 0x2B5FE8u;
            goto label_2b5fe8;
        }
    }
    ctx->pc = 0x2B5FC8u;
label_2b5fc8:
    // 0x2b5fc8: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x2b5fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b5fcc:
    // 0x2b5fcc: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2b5fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2b5fd0:
    // 0x2b5fd0: 0x24060071  addiu       $a2, $zero, 0x71
    ctx->pc = 0x2b5fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_2b5fd4:
    // 0x2b5fd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b5fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b5fd8:
    // 0x2b5fd8: 0xc0a5648  jal         func_295920
label_2b5fdc:
    if (ctx->pc == 0x2B5FDCu) {
        ctx->pc = 0x2B5FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FD8u;
        // 0x2b5fdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FE0u;
        goto label_2b5fe0;
    }
    ctx->pc = 0x2B5FD8u;
    SET_GPR_U32(ctx, 31, 0x2B5FE0u);
    ctx->pc = 0x2B5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5FD8u;
    // 0x2b5fdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B5FD8u, 0x2B5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5FE0u;
label_2b5fe0:
    // 0x2b5fe0: 0x10000014  b           . + 4 + (0x14 << 2)
label_2b5fe4:
    if (ctx->pc == 0x2B5FE4u) {
        ctx->pc = 0x2B5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FE0u;
        // 0x2b5fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FE8u;
        goto label_2b5fe8;
    }
    ctx->pc = 0x2B5FE0u;
    {
        const bool branch_taken_0x2b5fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FE0u;
        // 0x2b5fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5fe0) {
            ctx->pc = 0x2B6034u;
            goto label_2b6034;
        }
    }
    ctx->pc = 0x2B5FE8u;
label_2b5fe8:
    // 0x2b5fe8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b5fec:
    // 0x2b5fec: 0x26624000  addiu       $v0, $s3, 0x4000
    ctx->pc = 0x2b5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16384));
label_2b5ff0:
    // 0x2b5ff0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b5ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2b5ff4:
    // 0x2b5ff4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2b5ff8:
    if (ctx->pc == 0x2B5FF8u) {
        ctx->pc = 0x2B5FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5FF4u;
        // 0x2b5ff8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B5FFCu;
        goto label_2b5ffc;
    }
    ctx->pc = 0x2B5FF4u;
    {
        const bool branch_taken_0x2b5ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ff4) {
            ctx->pc = 0x2B5FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5FF4u;
            // 0x2b5ff8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6018u;
            goto label_2b6018;
        }
    }
    ctx->pc = 0x2B5FFCu;
label_2b5ffc:
    // 0x2b5ffc: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2b5ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_2b6000:
    // 0x2b6000: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2b6000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_2b6004:
    // 0x2b6004: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b6004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b6008:
    // 0x2b6008: 0x1040ff43  beqz        $v0, . + 4 + (-0xBD << 2)
label_2b600c:
    if (ctx->pc == 0x2B600Cu) {
        ctx->pc = 0x2B600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6008u;
        // 0x2b600c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6010u;
        goto label_2b6010;
    }
    ctx->pc = 0x2B6008u;
    {
        const bool branch_taken_0x2b6008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6008u;
        // 0x2b600c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6008) {
            ctx->pc = 0x2B5D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b5d18;
        }
    }
    ctx->pc = 0x2B6010u;
label_2b6010:
    // 0x2b6010: 0x1000000d  b           . + 4 + (0xD << 2)
label_2b6014:
    if (ctx->pc == 0x2B6014u) {
        ctx->pc = 0x2B6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6010u;
        // 0x2b6014: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6018u;
        goto label_2b6018;
    }
    ctx->pc = 0x2B6010u;
    {
        const bool branch_taken_0x2b6010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6010u;
        // 0x2b6014: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6010) {
            ctx->pc = 0x2B6048u;
            goto label_2b6048;
        }
    }
    ctx->pc = 0x2B6018u;
label_2b6018:
    // 0x2b6018: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b6018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b601c:
    // 0x2b601c: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2b601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2b6020:
    // 0x2b6020: 0x24060092  addiu       $a2, $zero, 0x92
    ctx->pc = 0x2b6020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_2b6024:
    // 0x2b6024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b6024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6028:
    // 0x2b6028: 0xc0a5648  jal         func_295920
label_2b602c:
    if (ctx->pc == 0x2B602Cu) {
        ctx->pc = 0x2B602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6028u;
        // 0x2b602c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6030u;
        goto label_2b6030;
    }
    ctx->pc = 0x2B6028u;
    SET_GPR_U32(ctx, 31, 0x2B6030u);
    ctx->pc = 0x2B602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6028u;
    // 0x2b602c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B6028u, 0x2B6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6030u;
label_2b6030:
    // 0x2b6030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6034:
    // 0x2b6034: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b6034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6038:
    // 0x2b6038: 0xc0adb7e  jal         func_2B6DF8
label_2b603c:
    if (ctx->pc == 0x2B603Cu) {
        ctx->pc = 0x2B603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6038u;
        // 0x2b603c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6040u;
        goto label_2b6040;
    }
    ctx->pc = 0x2B6038u;
    SET_GPR_U32(ctx, 31, 0x2B6040u);
    ctx->pc = 0x2B603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6038u;
    // 0x2b603c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B6038u, 0x2B6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6040u;
label_2b6040:
    // 0x2b6040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b6040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b6044:
    // 0x2b6044: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b6044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b6048:
    // 0x2b6048: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2b6048u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2b604c:
    // 0x2b604c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2b604cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b6050:
    // 0x2b6050: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2b6050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b6054:
    // 0x2b6054: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2b6054u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b6058:
    // 0x2b6058: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2b6058u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b605c:
    // 0x2b605c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2b605cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6060:
    // 0x2b6060: 0x3e00008  jr          $ra
label_2b6064:
    if (ctx->pc == 0x2B6064u) {
        ctx->pc = 0x2B6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6060u;
        // 0x2b6064: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6068u;
        goto label_fallthrough_0x2b6060;
    }
    ctx->pc = 0x2B6060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6060u;
        // 0x2b6064: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b6060:
    ctx->pc = 0x2B6068u;
}
