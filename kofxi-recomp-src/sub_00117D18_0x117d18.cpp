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

// Function: sub_00117D18
// Address: 0x117d18 - 0x118008
void sub_00117D18_0x117d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117D18_0x117d18");
#endif

    switch (ctx->pc) {
        case 0x117d18u: goto label_117d18;
        case 0x117d1cu: goto label_117d1c;
        case 0x117d20u: goto label_117d20;
        case 0x117d24u: goto label_117d24;
        case 0x117d28u: goto label_117d28;
        case 0x117d2cu: goto label_117d2c;
        case 0x117d30u: goto label_117d30;
        case 0x117d34u: goto label_117d34;
        case 0x117d38u: goto label_117d38;
        case 0x117d3cu: goto label_117d3c;
        case 0x117d40u: goto label_117d40;
        case 0x117d44u: goto label_117d44;
        case 0x117d48u: goto label_117d48;
        case 0x117d4cu: goto label_117d4c;
        case 0x117d50u: goto label_117d50;
        case 0x117d54u: goto label_117d54;
        case 0x117d58u: goto label_117d58;
        case 0x117d5cu: goto label_117d5c;
        case 0x117d60u: goto label_117d60;
        case 0x117d64u: goto label_117d64;
        case 0x117d68u: goto label_117d68;
        case 0x117d6cu: goto label_117d6c;
        case 0x117d70u: goto label_117d70;
        case 0x117d74u: goto label_117d74;
        case 0x117d78u: goto label_117d78;
        case 0x117d7cu: goto label_117d7c;
        case 0x117d80u: goto label_117d80;
        case 0x117d84u: goto label_117d84;
        case 0x117d88u: goto label_117d88;
        case 0x117d8cu: goto label_117d8c;
        case 0x117d90u: goto label_117d90;
        case 0x117d94u: goto label_117d94;
        case 0x117d98u: goto label_117d98;
        case 0x117d9cu: goto label_117d9c;
        case 0x117da0u: goto label_117da0;
        case 0x117da4u: goto label_117da4;
        case 0x117da8u: goto label_117da8;
        case 0x117dacu: goto label_117dac;
        case 0x117db0u: goto label_117db0;
        case 0x117db4u: goto label_117db4;
        case 0x117db8u: goto label_117db8;
        case 0x117dbcu: goto label_117dbc;
        case 0x117dc0u: goto label_117dc0;
        case 0x117dc4u: goto label_117dc4;
        case 0x117dc8u: goto label_117dc8;
        case 0x117dccu: goto label_117dcc;
        case 0x117dd0u: goto label_117dd0;
        case 0x117dd4u: goto label_117dd4;
        case 0x117dd8u: goto label_117dd8;
        case 0x117ddcu: goto label_117ddc;
        case 0x117de0u: goto label_117de0;
        case 0x117de4u: goto label_117de4;
        case 0x117de8u: goto label_117de8;
        case 0x117decu: goto label_117dec;
        case 0x117df0u: goto label_117df0;
        case 0x117df4u: goto label_117df4;
        case 0x117df8u: goto label_117df8;
        case 0x117dfcu: goto label_117dfc;
        case 0x117e00u: goto label_117e00;
        case 0x117e04u: goto label_117e04;
        case 0x117e08u: goto label_117e08;
        case 0x117e0cu: goto label_117e0c;
        case 0x117e10u: goto label_117e10;
        case 0x117e14u: goto label_117e14;
        case 0x117e18u: goto label_117e18;
        case 0x117e1cu: goto label_117e1c;
        case 0x117e20u: goto label_117e20;
        case 0x117e24u: goto label_117e24;
        case 0x117e28u: goto label_117e28;
        case 0x117e2cu: goto label_117e2c;
        case 0x117e30u: goto label_117e30;
        case 0x117e34u: goto label_117e34;
        case 0x117e38u: goto label_117e38;
        case 0x117e3cu: goto label_117e3c;
        case 0x117e40u: goto label_117e40;
        case 0x117e44u: goto label_117e44;
        case 0x117e48u: goto label_117e48;
        case 0x117e4cu: goto label_117e4c;
        case 0x117e50u: goto label_117e50;
        case 0x117e54u: goto label_117e54;
        case 0x117e58u: goto label_117e58;
        case 0x117e5cu: goto label_117e5c;
        case 0x117e60u: goto label_117e60;
        case 0x117e64u: goto label_117e64;
        case 0x117e68u: goto label_117e68;
        case 0x117e6cu: goto label_117e6c;
        case 0x117e70u: goto label_117e70;
        case 0x117e74u: goto label_117e74;
        case 0x117e78u: goto label_117e78;
        case 0x117e7cu: goto label_117e7c;
        case 0x117e80u: goto label_117e80;
        case 0x117e84u: goto label_117e84;
        case 0x117e88u: goto label_117e88;
        case 0x117e8cu: goto label_117e8c;
        case 0x117e90u: goto label_117e90;
        case 0x117e94u: goto label_117e94;
        case 0x117e98u: goto label_117e98;
        case 0x117e9cu: goto label_117e9c;
        case 0x117ea0u: goto label_117ea0;
        case 0x117ea4u: goto label_117ea4;
        case 0x117ea8u: goto label_117ea8;
        case 0x117eacu: goto label_117eac;
        case 0x117eb0u: goto label_117eb0;
        case 0x117eb4u: goto label_117eb4;
        case 0x117eb8u: goto label_117eb8;
        case 0x117ebcu: goto label_117ebc;
        case 0x117ec0u: goto label_117ec0;
        case 0x117ec4u: goto label_117ec4;
        case 0x117ec8u: goto label_117ec8;
        case 0x117eccu: goto label_117ecc;
        case 0x117ed0u: goto label_117ed0;
        case 0x117ed4u: goto label_117ed4;
        case 0x117ed8u: goto label_117ed8;
        case 0x117edcu: goto label_117edc;
        case 0x117ee0u: goto label_117ee0;
        case 0x117ee4u: goto label_117ee4;
        case 0x117ee8u: goto label_117ee8;
        case 0x117eecu: goto label_117eec;
        case 0x117ef0u: goto label_117ef0;
        case 0x117ef4u: goto label_117ef4;
        case 0x117ef8u: goto label_117ef8;
        case 0x117efcu: goto label_117efc;
        case 0x117f00u: goto label_117f00;
        case 0x117f04u: goto label_117f04;
        case 0x117f08u: goto label_117f08;
        case 0x117f0cu: goto label_117f0c;
        case 0x117f10u: goto label_117f10;
        case 0x117f14u: goto label_117f14;
        case 0x117f18u: goto label_117f18;
        case 0x117f1cu: goto label_117f1c;
        case 0x117f20u: goto label_117f20;
        case 0x117f24u: goto label_117f24;
        case 0x117f28u: goto label_117f28;
        case 0x117f2cu: goto label_117f2c;
        case 0x117f30u: goto label_117f30;
        case 0x117f34u: goto label_117f34;
        case 0x117f38u: goto label_117f38;
        case 0x117f3cu: goto label_117f3c;
        case 0x117f40u: goto label_117f40;
        case 0x117f44u: goto label_117f44;
        case 0x117f48u: goto label_117f48;
        case 0x117f4cu: goto label_117f4c;
        case 0x117f50u: goto label_117f50;
        case 0x117f54u: goto label_117f54;
        case 0x117f58u: goto label_117f58;
        case 0x117f5cu: goto label_117f5c;
        case 0x117f60u: goto label_117f60;
        case 0x117f64u: goto label_117f64;
        case 0x117f68u: goto label_117f68;
        case 0x117f6cu: goto label_117f6c;
        case 0x117f70u: goto label_117f70;
        case 0x117f74u: goto label_117f74;
        case 0x117f78u: goto label_117f78;
        case 0x117f7cu: goto label_117f7c;
        case 0x117f80u: goto label_117f80;
        case 0x117f84u: goto label_117f84;
        case 0x117f88u: goto label_117f88;
        case 0x117f8cu: goto label_117f8c;
        case 0x117f90u: goto label_117f90;
        case 0x117f94u: goto label_117f94;
        case 0x117f98u: goto label_117f98;
        case 0x117f9cu: goto label_117f9c;
        case 0x117fa0u: goto label_117fa0;
        case 0x117fa4u: goto label_117fa4;
        case 0x117fa8u: goto label_117fa8;
        case 0x117facu: goto label_117fac;
        case 0x117fb0u: goto label_117fb0;
        case 0x117fb4u: goto label_117fb4;
        case 0x117fb8u: goto label_117fb8;
        case 0x117fbcu: goto label_117fbc;
        case 0x117fc0u: goto label_117fc0;
        case 0x117fc4u: goto label_117fc4;
        case 0x117fc8u: goto label_117fc8;
        case 0x117fccu: goto label_117fcc;
        case 0x117fd0u: goto label_117fd0;
        case 0x117fd4u: goto label_117fd4;
        case 0x117fd8u: goto label_117fd8;
        case 0x117fdcu: goto label_117fdc;
        case 0x117fe0u: goto label_117fe0;
        case 0x117fe4u: goto label_117fe4;
        case 0x117fe8u: goto label_117fe8;
        case 0x117fecu: goto label_117fec;
        case 0x117ff0u: goto label_117ff0;
        case 0x117ff4u: goto label_117ff4;
        case 0x117ff8u: goto label_117ff8;
        case 0x117ffcu: goto label_117ffc;
        case 0x118000u: goto label_118000;
        case 0x118004u: goto label_118004;
        default: break;
    }

    ctx->pc = 0x117d18u;

label_117d18:
    // 0x117d18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x117d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_117d1c:
    // 0x117d1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_117d20:
    if (ctx->pc == 0x117D20u) {
        ctx->pc = 0x117D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D1Cu;
        // 0x117d20: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D24u;
        goto label_117d24;
    }
    ctx->pc = 0x117D1Cu;
    {
        const bool branch_taken_0x117d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D1Cu;
        // 0x117d20: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d1c) {
            ctx->pc = 0x117D2Cu;
            goto label_117d2c;
        }
    }
    ctx->pc = 0x117D24u;
label_117d24:
    // 0x117d24: 0x10000003  b           . + 4 + (0x3 << 2)
label_117d28:
    if (ctx->pc == 0x117D28u) {
        ctx->pc = 0x117D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D24u;
        // 0x117d28: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D2Cu;
        goto label_117d2c;
    }
    ctx->pc = 0x117D24u;
    {
        const bool branch_taken_0x117d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D24u;
        // 0x117d28: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d24) {
            ctx->pc = 0x117D34u;
            goto label_117d34;
        }
    }
    ctx->pc = 0x117D2Cu;
label_117d2c:
    // 0x117d2c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x117d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_117d30:
    // 0x117d30: 0xac439d60  sw          $v1, -0x62A0($v0)
    ctx->pc = 0x117d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942048), GPR_U32(ctx, 3));
label_117d34:
    // 0x117d34: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_117d38:
    if (ctx->pc == 0x117D38u) {
        ctx->pc = 0x117D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D34u;
        // 0x117d38: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D3Cu;
        goto label_117d3c;
    }
    ctx->pc = 0x117D34u;
    {
        const bool branch_taken_0x117d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x117d34) {
            ctx->pc = 0x117D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117D34u;
            // 0x117d38: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117D48u;
            goto label_117d48;
        }
    }
    ctx->pc = 0x117D3Cu;
label_117d3c:
    // 0x117d3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x117d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_117d40:
    // 0x117d40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x117d40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_117d44:
    // 0x117d44: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x117d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_117d48:
    // 0x117d48: 0x3e00008  jr          $ra
label_117d4c:
    if (ctx->pc == 0x117D4Cu) {
        ctx->pc = 0x117D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D48u;
        // 0x117d4c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D50u;
        goto label_117d50;
    }
    ctx->pc = 0x117D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D48u;
        // 0x117d4c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117D50u;
label_117d50:
    // 0x117d50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x117d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_117d54:
    // 0x117d54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_117d58:
    // 0x117d58: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x117d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_117d5c:
    // 0x117d5c: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x117d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_117d60:
    // 0x117d60: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x117d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_117d64:
    // 0x117d64: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x117d64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_117d68:
    // 0x117d68: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x117d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_117d6c:
    // 0x117d6c: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x117d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_117d70:
    // 0x117d70: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x117d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_117d74:
    // 0x117d74: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_117d78:
    // 0x117d78: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_117d7c:
    // 0x117d7c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_117d80:
    // 0x117d80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_117d84:
    // 0x117d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_117d88:
    // 0x117d88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x117d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_117d8c:
    // 0x117d8c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x117d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_117d90:
    // 0x117d90: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_117d94:
    if (ctx->pc == 0x117D94u) {
        ctx->pc = 0x117D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D90u;
        // 0x117d94: 0x3c150036  lui         $s5, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117D98u;
        goto label_117d98;
    }
    ctx->pc = 0x117D90u;
    {
        const bool branch_taken_0x117d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D90u;
        // 0x117d94: 0x3c150036  lui         $s5, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d90) {
            ctx->pc = 0x117F0Cu;
            goto label_117f0c;
        }
    }
    ctx->pc = 0x117D98u;
label_117d98:
    // 0x117d98: 0x26a29d48  addiu       $v0, $s5, -0x62B8
    ctx->pc = 0x117d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942024));
label_117d9c:
    // 0x117d9c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x117d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_117da0:
    // 0x117da0: 0x1200005a  beqz        $s0, . + 4 + (0x5A << 2)
label_117da4:
    if (ctx->pc == 0x117DA4u) {
        ctx->pc = 0x117DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DA0u;
        // 0x117da4: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117DA8u;
        goto label_117da8;
    }
    ctx->pc = 0x117DA0u;
    {
        const bool branch_taken_0x117da0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DA0u;
        // 0x117da4: 0x2a0f02d  daddu       $fp, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117da0) {
            ctx->pc = 0x117F0Cu;
            goto label_117f0c;
        }
    }
    ctx->pc = 0x117DA8u;
label_117da8:
    // 0x117da8: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x117da8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_117dac:
    // 0x117dac: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x117dacu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_117db0:
    // 0x117db0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_117db4:
    // 0x117db4: 0x0  nop
    ctx->pc = 0x117db4u;
    // NOP
label_117db8:
    // 0x117db8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_117dbc:
    // 0x117dbc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x117dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_117dc0:
    // 0x117dc0: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x117dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_117dc4:
    // 0x117dc4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x117dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_117dc8:
    // 0x117dc8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x117dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_117dcc:
    // 0x117dcc: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x117dccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_117dd0:
    // 0x117dd0: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x117dd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_117dd4:
    // 0x117dd4: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x117dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_117dd8:
    // 0x117dd8: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x117dd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_117ddc:
    // 0x117ddc: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x117ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_117de0:
    // 0x117de0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_117de4:
    if (ctx->pc == 0x117DE4u) {
        ctx->pc = 0x117DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DE0u;
        // 0x117de4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117DE8u;
        goto label_117de8;
    }
    ctx->pc = 0x117DE0u;
    {
        const bool branch_taken_0x117de0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x117DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DE0u;
        // 0x117de4: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117de0) {
            ctx->pc = 0x117E0Cu;
            goto label_117e0c;
        }
    }
    ctx->pc = 0x117DE8u;
label_117de8:
    // 0x117de8: 0xde829d48  ld          $v0, -0x62B8($s4)
    ctx->pc = 0x117de8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294942024)));
label_117dec:
    // 0x117dec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_117df0:
    // 0x117df0: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x117df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_117df4:
    // 0x117df4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x117df4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_117df8:
    // 0x117df8: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x117df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_117dfc:
    // 0x117dfc: 0xc045de4  jal         func_117790
label_117e00:
    if (ctx->pc == 0x117E00u) {
        ctx->pc = 0x117E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117DFCu;
        // 0x117e00: 0xfe829d48  sd          $v0, -0x62B8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294942024), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E04u;
        goto label_117e04;
    }
    ctx->pc = 0x117DFCu;
    SET_GPR_U32(ctx, 31, 0x117E04u);
    ctx->pc = 0x117E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DFCu;
    // 0x117e00: 0xfe829d48  sd          $v0, -0x62B8($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294942024), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117790u, 0x117DFCu, 0x117E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E04u;
label_117e04:
    // 0x117e04: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x117e04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_117e08:
    // 0x117e08: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_117e0c:
    // 0x117e0c: 0xde849d48  ld          $a0, -0x62B8($s4)
    ctx->pc = 0x117e0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294942024)));
label_117e10:
    // 0x117e10: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x117e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_117e14:
    // 0x117e14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x117e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_117e18:
    // 0x117e18: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x117e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_117e1c:
    // 0x117e1c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x117e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_117e20:
    // 0x117e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_117e24:
    // 0x117e24: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x117e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_117e28:
    // 0x117e28: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x117e28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_117e2c:
    // 0x117e2c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x117e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_117e30:
    // 0x117e30: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_117e34:
    if (ctx->pc == 0x117E34u) {
        ctx->pc = 0x117E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E30u;
        // 0x117e34: 0x26929d48  addiu       $s2, $s4, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E38u;
        goto label_117e38;
    }
    ctx->pc = 0x117E30u;
    {
        const bool branch_taken_0x117e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E30u;
        // 0x117e34: 0x26929d48  addiu       $s2, $s4, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e30) {
            ctx->pc = 0x117F0Cu;
            goto label_117f0c;
        }
    }
    ctx->pc = 0x117E38u;
label_117e38:
    // 0x117e38: 0xc045f46  jal         func_117D18
label_117e3c:
    if (ctx->pc == 0x117E3Cu) {
        ctx->pc = 0x117E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E38u;
        // 0x117e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E40u;
        goto label_117e40;
    }
    ctx->pc = 0x117E38u;
    SET_GPR_U32(ctx, 31, 0x117E40u);
    ctx->pc = 0x117E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E38u;
    // 0x117e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117D18u;
    goto label_117d18;
    ctx->pc = 0x117E40u;
label_117e40:
    // 0x117e40: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x117e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_117e44:
    // 0x117e44: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x117e44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_117e48:
    // 0x117e48: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x117e48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_117e4c:
    // 0x117e4c: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x117e4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_117e50:
    // 0x117e50: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x117e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_117e54:
    // 0x117e54: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x117e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_117e58:
    // 0x117e58: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x117e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_117e5c:
    // 0x117e5c: 0xc4302f  dsubu       $a2, $a2, $a0
    ctx->pc = 0x117e5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 4));
label_117e60:
    // 0x117e60: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x117e60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_117e64:
    // 0x117e64: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x117e64u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_117e68:
    // 0x117e68: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x117e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_117e6c:
    // 0x117e6c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x117e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_117e70:
    // 0x117e70: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x117e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_117e74:
    // 0x117e74: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x117e74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_117e78:
    // 0x117e78: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x117e78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_117e7c:
    // 0x117e7c: 0x40f809  jalr        $v0
label_117e80:
    if (ctx->pc == 0x117E80u) {
        ctx->pc = 0x117E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E7Cu;
        // 0x117e80: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E84u;
        goto label_117e84;
    }
    ctx->pc = 0x117E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117E84u);
        ctx->pc = 0x117E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E7Cu;
        // 0x117e80: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E7Cu, 0x117E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117E84u;
label_117e84:
    // 0x117e84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x117e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117e88:
    // 0x117e88: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_117e8c:
    if (ctx->pc == 0x117E8Cu) {
        ctx->pc = 0x117E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E88u;
        // 0x117e8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117E90u;
        goto label_117e90;
    }
    ctx->pc = 0x117E88u;
    {
        const bool branch_taken_0x117e88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E88u;
        // 0x117e8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e88) {
            ctx->pc = 0x117EA8u;
            goto label_117ea8;
        }
    }
    ctx->pc = 0x117E90u;
label_117e90:
    // 0x117e90: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x117e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_117e94:
    // 0x117e94: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_117e98:
    // 0x117e98: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x117e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_117e9c:
    // 0x117e9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x117e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_117ea0:
    // 0x117ea0: 0x10000014  b           . + 4 + (0x14 << 2)
label_117ea4:
    if (ctx->pc == 0x117EA4u) {
        ctx->pc = 0x117EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EA0u;
        // 0x117ea4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117EA8u;
        goto label_117ea8;
    }
    ctx->pc = 0x117EA0u;
    {
        const bool branch_taken_0x117ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EA0u;
        // 0x117ea4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ea0) {
            ctx->pc = 0x117EF4u;
            goto label_117ef4;
        }
    }
    ctx->pc = 0x117EA8u;
label_117ea8:
    // 0x117ea8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_117eac:
    if (ctx->pc == 0x117EACu) {
        ctx->pc = 0x117EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EA8u;
        // 0x117eac: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117EB0u;
        goto label_117eb0;
    }
    ctx->pc = 0x117EA8u;
    {
        const bool branch_taken_0x117ea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x117EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EA8u;
        // 0x117eac: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ea8) {
            ctx->pc = 0x117ED8u;
            goto label_117ed8;
        }
    }
    ctx->pc = 0x117EB0u;
label_117eb0:
    // 0x117eb0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x117eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_117eb4:
    // 0x117eb4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x117eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_117eb8:
    // 0x117eb8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x117eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_117ebc:
    // 0x117ebc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x117ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_117ec0:
    // 0x117ec0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x117ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_117ec4:
    // 0x117ec4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x117ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_117ec8:
    // 0x117ec8: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x117ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_117ecc:
    // 0x117ecc: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x117eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_117ed0:
    // 0x117ed0: 0x10000009  b           . + 4 + (0x9 << 2)
label_117ed4:
    if (ctx->pc == 0x117ED4u) {
        ctx->pc = 0x117ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117ED0u;
        // 0x117ed4: 0x27c29d48  addiu       $v0, $fp, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117ED8u;
        goto label_117ed8;
    }
    ctx->pc = 0x117ED0u;
    {
        const bool branch_taken_0x117ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117ED0u;
        // 0x117ed4: 0x27c29d48  addiu       $v0, $fp, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117ed0) {
            ctx->pc = 0x117EF8u;
            goto label_117ef8;
        }
    }
    ctx->pc = 0x117ED8u;
label_117ed8:
    // 0x117ed8: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x117ed8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_117edc:
    // 0x117edc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x117edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_117ee0:
    // 0x117ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_117ee4:
    // 0x117ee4: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x117ee4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_117ee8:
    // 0x117ee8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x117ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_117eec:
    // 0x117eec: 0xc045f24  jal         func_117C90
label_117ef0:
    if (ctx->pc == 0x117EF0u) {
        ctx->pc = 0x117EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EECu;
        // 0x117ef0: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117EF4u;
        goto label_117ef4;
    }
    ctx->pc = 0x117EECu;
    SET_GPR_U32(ctx, 31, 0x117EF4u);
    ctx->pc = 0x117EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117EECu;
    // 0x117ef0: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C90u, 0x117EECu, 0x117EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EF4u;
label_117ef4:
    // 0x117ef4: 0x27c29d48  addiu       $v0, $fp, -0x62B8
    ctx->pc = 0x117ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942024));
label_117ef8:
    // 0x117ef8: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x117ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_117efc:
    // 0x117efc: 0x1600ffae  bnez        $s0, . + 4 + (-0x52 << 2)
label_117f00:
    if (ctx->pc == 0x117F00u) {
        ctx->pc = 0x117F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EFCu;
        // 0x117f00: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F04u;
        goto label_117f04;
    }
    ctx->pc = 0x117EFCu;
    {
        const bool branch_taken_0x117efc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x117F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117EFCu;
        // 0x117f00: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117efc) {
            ctx->pc = 0x117DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_117db8;
        }
    }
    ctx->pc = 0x117F04u;
label_117f04:
    // 0x117f04: 0x10000002  b           . + 4 + (0x2 << 2)
label_117f08:
    if (ctx->pc == 0x117F08u) {
        ctx->pc = 0x117F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F04u;
        // 0x117f08: 0x26a49d48  addiu       $a0, $s5, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F0Cu;
        goto label_117f0c;
    }
    ctx->pc = 0x117F04u;
    {
        const bool branch_taken_0x117f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F04u;
        // 0x117f08: 0x26a49d48  addiu       $a0, $s5, -0x62B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f04) {
            ctx->pc = 0x117F10u;
            goto label_117f10;
        }
    }
    ctx->pc = 0x117F0Cu;
label_117f0c:
    // 0x117f0c: 0x26a49d48  addiu       $a0, $s5, -0x62B8
    ctx->pc = 0x117f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942024));
label_117f10:
    // 0x117f10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117f14:
    // 0x117f14: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x117f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_117f18:
    // 0x117f18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_117f1c:
    // 0x117f1c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x117f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_117f20:
    // 0x117f20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_117f24:
    // 0x117f24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117f24u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_117f28:
    // 0x117f28: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x117f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_117f2c:
    // 0x117f2c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x117f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_117f30:
    // 0x117f30: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x117f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_117f34:
    // 0x117f34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_117f38:
    if (ctx->pc == 0x117F38u) {
        ctx->pc = 0x117F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F34u;
        // 0x117f38: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F3Cu;
        goto label_117f3c;
    }
    ctx->pc = 0x117F34u;
    {
        const bool branch_taken_0x117f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F34u;
        // 0x117f38: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117f34) {
            ctx->pc = 0x117F60u;
            goto label_117f60;
        }
    }
    ctx->pc = 0x117F3Cu;
label_117f3c:
    // 0x117f3c: 0xdea29d48  ld          $v0, -0x62B8($s5)
    ctx->pc = 0x117f3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942024)));
label_117f40:
    // 0x117f40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_117f44:
    // 0x117f44: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x117f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_117f48:
    // 0x117f48: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x117f48u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_117f4c:
    // 0x117f4c: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x117f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_117f50:
    // 0x117f50: 0xc045de4  jal         func_117790
label_117f54:
    if (ctx->pc == 0x117F54u) {
        ctx->pc = 0x117F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F50u;
        // 0x117f54: 0xfea29d48  sd          $v0, -0x62B8($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294942024), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F58u;
        goto label_117f58;
    }
    ctx->pc = 0x117F50u;
    SET_GPR_U32(ctx, 31, 0x117F58u);
    ctx->pc = 0x117F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F50u;
    // 0x117f54: 0xfea29d48  sd          $v0, -0x62B8($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294942024), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117790u, 0x117F50u, 0x117F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F58u;
label_117f58:
    // 0x117f58: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x117f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_117f5c:
    // 0x117f5c: 0x8ca51000  lw          $a1, 0x1000($a1)
    ctx->pc = 0x117f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 4096))); // MMIO: 0x10001000
label_117f60:
    // 0x117f60: 0xdea29d48  ld          $v0, -0x62B8($s5)
    ctx->pc = 0x117f60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942024)));
label_117f64:
    // 0x117f64: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x117f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_117f68:
    // 0x117f68: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x117f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_117f6c:
    // 0x117f6c: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x117f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_117f70:
    // 0x117f70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x117f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_117f74:
    // 0x117f74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x117f74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_117f78:
    // 0x117f78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x117f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_117f7c:
    // 0x117f7c: 0xc045ec0  jal         func_117B00
label_117f80:
    if (ctx->pc == 0x117F80u) {
        ctx->pc = 0x117F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117F7Cu;
        // 0x117f80: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117F84u;
        goto label_117f84;
    }
    ctx->pc = 0x117F7Cu;
    SET_GPR_U32(ctx, 31, 0x117F84u);
    ctx->pc = 0x117F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117F7Cu;
    // 0x117f80: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B00u, 0x117F7Cu, 0x117F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F84u;
label_117f84:
    // 0x117f84: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_117f88:
    // 0x117f88: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x117f88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_117f8c:
    // 0x117f8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x117f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_117f90:
    // 0x117f90: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x117f90u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_117f94:
    // 0x117f94: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x117f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_117f98:
    // 0x117f98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_117f9c:
    if (ctx->pc == 0x117F9Cu) {
        ctx->pc = 0x117FA0u;
        goto label_117fa0;
    }
    ctx->pc = 0x117F98u;
    {
        const bool branch_taken_0x117f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f98) {
            ctx->pc = 0x117FC4u;
            goto label_117fc4;
        }
    }
    ctx->pc = 0x117FA0u;
label_117fa0:
    // 0x117fa0: 0xdea29d48  ld          $v0, -0x62B8($s5)
    ctx->pc = 0x117fa0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942024)));
label_117fa4:
    // 0x117fa4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x117fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_117fa8:
    // 0x117fa8: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x117fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_117fac:
    // 0x117fac: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x117facu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_117fb0:
    // 0x117fb0: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x117fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_117fb4:
    // 0x117fb4: 0xc045de4  jal         func_117790
label_117fb8:
    if (ctx->pc == 0x117FB8u) {
        ctx->pc = 0x117FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FB4u;
        // 0x117fb8: 0xfea29d48  sd          $v0, -0x62B8($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294942024), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117FBCu;
        goto label_117fbc;
    }
    ctx->pc = 0x117FB4u;
    SET_GPR_U32(ctx, 31, 0x117FBCu);
    ctx->pc = 0x117FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117FB4u;
    // 0x117fb8: 0xfea29d48  sd          $v0, -0x62B8($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294942024), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117790u, 0x117FB4u, 0x117FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FBCu;
label_117fbc:
    // 0x117fbc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x117fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_117fc0:
    // 0x117fc0: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x117fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_117fc4:
    // 0x117fc4: 0xdea29d48  ld          $v0, -0x62B8($s5)
    ctx->pc = 0x117fc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942024)));
label_117fc8:
    // 0x117fc8: 0xf  sync
    ctx->pc = 0x117fc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_117fcc:
    // 0x117fcc: 0x42000038  ei
    ctx->pc = 0x117fccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_117fd0:
    // 0x117fd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x117fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_117fd4:
    // 0x117fd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x117fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_117fd8:
    // 0x117fd8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x117fd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_117fdc:
    // 0x117fdc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x117fdcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_117fe0:
    // 0x117fe0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x117fe0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_117fe4:
    // 0x117fe4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x117fe4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_117fe8:
    // 0x117fe8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x117fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_117fec:
    // 0x117fec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x117fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_117ff0:
    // 0x117ff0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x117ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_117ff4:
    // 0x117ff4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x117ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_117ff8:
    // 0x117ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117ffc:
    // 0x117ffc: 0x3e00008  jr          $ra
label_118000:
    if (ctx->pc == 0x118000u) {
        ctx->pc = 0x118000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FFCu;
        // 0x118000: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x118004u;
        goto label_118004;
    }
    ctx->pc = 0x117FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117FFCu;
        // 0x118000: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118004u;
label_118004:
    // 0x118004: 0x0  nop
    ctx->pc = 0x118004u;
    // NOP
    if (ctx->pc == 0x118004u) { ctx->pc = 0x118008u; }
}
