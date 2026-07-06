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

// Function: sub_00242C58
// Address: 0x242c58 - 0x242f68
void sub_00242C58_0x242c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242C58_0x242c58");
#endif

    switch (ctx->pc) {
        case 0x242c58u: goto label_242c58;
        case 0x242c5cu: goto label_242c5c;
        case 0x242c60u: goto label_242c60;
        case 0x242c64u: goto label_242c64;
        case 0x242c68u: goto label_242c68;
        case 0x242c6cu: goto label_242c6c;
        case 0x242c70u: goto label_242c70;
        case 0x242c74u: goto label_242c74;
        case 0x242c78u: goto label_242c78;
        case 0x242c7cu: goto label_242c7c;
        case 0x242c80u: goto label_242c80;
        case 0x242c84u: goto label_242c84;
        case 0x242c88u: goto label_242c88;
        case 0x242c8cu: goto label_242c8c;
        case 0x242c90u: goto label_242c90;
        case 0x242c94u: goto label_242c94;
        case 0x242c98u: goto label_242c98;
        case 0x242c9cu: goto label_242c9c;
        case 0x242ca0u: goto label_242ca0;
        case 0x242ca4u: goto label_242ca4;
        case 0x242ca8u: goto label_242ca8;
        case 0x242cacu: goto label_242cac;
        case 0x242cb0u: goto label_242cb0;
        case 0x242cb4u: goto label_242cb4;
        case 0x242cb8u: goto label_242cb8;
        case 0x242cbcu: goto label_242cbc;
        case 0x242cc0u: goto label_242cc0;
        case 0x242cc4u: goto label_242cc4;
        case 0x242cc8u: goto label_242cc8;
        case 0x242cccu: goto label_242ccc;
        case 0x242cd0u: goto label_242cd0;
        case 0x242cd4u: goto label_242cd4;
        case 0x242cd8u: goto label_242cd8;
        case 0x242cdcu: goto label_242cdc;
        case 0x242ce0u: goto label_242ce0;
        case 0x242ce4u: goto label_242ce4;
        case 0x242ce8u: goto label_242ce8;
        case 0x242cecu: goto label_242cec;
        case 0x242cf0u: goto label_242cf0;
        case 0x242cf4u: goto label_242cf4;
        case 0x242cf8u: goto label_242cf8;
        case 0x242cfcu: goto label_242cfc;
        case 0x242d00u: goto label_242d00;
        case 0x242d04u: goto label_242d04;
        case 0x242d08u: goto label_242d08;
        case 0x242d0cu: goto label_242d0c;
        case 0x242d10u: goto label_242d10;
        case 0x242d14u: goto label_242d14;
        case 0x242d18u: goto label_242d18;
        case 0x242d1cu: goto label_242d1c;
        case 0x242d20u: goto label_242d20;
        case 0x242d24u: goto label_242d24;
        case 0x242d28u: goto label_242d28;
        case 0x242d2cu: goto label_242d2c;
        case 0x242d30u: goto label_242d30;
        case 0x242d34u: goto label_242d34;
        case 0x242d38u: goto label_242d38;
        case 0x242d3cu: goto label_242d3c;
        case 0x242d40u: goto label_242d40;
        case 0x242d44u: goto label_242d44;
        case 0x242d48u: goto label_242d48;
        case 0x242d4cu: goto label_242d4c;
        case 0x242d50u: goto label_242d50;
        case 0x242d54u: goto label_242d54;
        case 0x242d58u: goto label_242d58;
        case 0x242d5cu: goto label_242d5c;
        case 0x242d60u: goto label_242d60;
        case 0x242d64u: goto label_242d64;
        case 0x242d68u: goto label_242d68;
        case 0x242d6cu: goto label_242d6c;
        case 0x242d70u: goto label_242d70;
        case 0x242d74u: goto label_242d74;
        case 0x242d78u: goto label_242d78;
        case 0x242d7cu: goto label_242d7c;
        case 0x242d80u: goto label_242d80;
        case 0x242d84u: goto label_242d84;
        case 0x242d88u: goto label_242d88;
        case 0x242d8cu: goto label_242d8c;
        case 0x242d90u: goto label_242d90;
        case 0x242d94u: goto label_242d94;
        case 0x242d98u: goto label_242d98;
        case 0x242d9cu: goto label_242d9c;
        case 0x242da0u: goto label_242da0;
        case 0x242da4u: goto label_242da4;
        case 0x242da8u: goto label_242da8;
        case 0x242dacu: goto label_242dac;
        case 0x242db0u: goto label_242db0;
        case 0x242db4u: goto label_242db4;
        case 0x242db8u: goto label_242db8;
        case 0x242dbcu: goto label_242dbc;
        case 0x242dc0u: goto label_242dc0;
        case 0x242dc4u: goto label_242dc4;
        case 0x242dc8u: goto label_242dc8;
        case 0x242dccu: goto label_242dcc;
        case 0x242dd0u: goto label_242dd0;
        case 0x242dd4u: goto label_242dd4;
        case 0x242dd8u: goto label_242dd8;
        case 0x242ddcu: goto label_242ddc;
        case 0x242de0u: goto label_242de0;
        case 0x242de4u: goto label_242de4;
        case 0x242de8u: goto label_242de8;
        case 0x242decu: goto label_242dec;
        case 0x242df0u: goto label_242df0;
        case 0x242df4u: goto label_242df4;
        case 0x242df8u: goto label_242df8;
        case 0x242dfcu: goto label_242dfc;
        case 0x242e00u: goto label_242e00;
        case 0x242e04u: goto label_242e04;
        case 0x242e08u: goto label_242e08;
        case 0x242e0cu: goto label_242e0c;
        case 0x242e10u: goto label_242e10;
        case 0x242e14u: goto label_242e14;
        case 0x242e18u: goto label_242e18;
        case 0x242e1cu: goto label_242e1c;
        case 0x242e20u: goto label_242e20;
        case 0x242e24u: goto label_242e24;
        case 0x242e28u: goto label_242e28;
        case 0x242e2cu: goto label_242e2c;
        case 0x242e30u: goto label_242e30;
        case 0x242e34u: goto label_242e34;
        case 0x242e38u: goto label_242e38;
        case 0x242e3cu: goto label_242e3c;
        case 0x242e40u: goto label_242e40;
        case 0x242e44u: goto label_242e44;
        case 0x242e48u: goto label_242e48;
        case 0x242e4cu: goto label_242e4c;
        case 0x242e50u: goto label_242e50;
        case 0x242e54u: goto label_242e54;
        case 0x242e58u: goto label_242e58;
        case 0x242e5cu: goto label_242e5c;
        case 0x242e60u: goto label_242e60;
        case 0x242e64u: goto label_242e64;
        case 0x242e68u: goto label_242e68;
        case 0x242e6cu: goto label_242e6c;
        case 0x242e70u: goto label_242e70;
        case 0x242e74u: goto label_242e74;
        case 0x242e78u: goto label_242e78;
        case 0x242e7cu: goto label_242e7c;
        case 0x242e80u: goto label_242e80;
        case 0x242e84u: goto label_242e84;
        case 0x242e88u: goto label_242e88;
        case 0x242e8cu: goto label_242e8c;
        case 0x242e90u: goto label_242e90;
        case 0x242e94u: goto label_242e94;
        case 0x242e98u: goto label_242e98;
        case 0x242e9cu: goto label_242e9c;
        case 0x242ea0u: goto label_242ea0;
        case 0x242ea4u: goto label_242ea4;
        case 0x242ea8u: goto label_242ea8;
        case 0x242eacu: goto label_242eac;
        case 0x242eb0u: goto label_242eb0;
        case 0x242eb4u: goto label_242eb4;
        case 0x242eb8u: goto label_242eb8;
        case 0x242ebcu: goto label_242ebc;
        case 0x242ec0u: goto label_242ec0;
        case 0x242ec4u: goto label_242ec4;
        case 0x242ec8u: goto label_242ec8;
        case 0x242eccu: goto label_242ecc;
        case 0x242ed0u: goto label_242ed0;
        case 0x242ed4u: goto label_242ed4;
        case 0x242ed8u: goto label_242ed8;
        case 0x242edcu: goto label_242edc;
        case 0x242ee0u: goto label_242ee0;
        case 0x242ee4u: goto label_242ee4;
        case 0x242ee8u: goto label_242ee8;
        case 0x242eecu: goto label_242eec;
        case 0x242ef0u: goto label_242ef0;
        case 0x242ef4u: goto label_242ef4;
        case 0x242ef8u: goto label_242ef8;
        case 0x242efcu: goto label_242efc;
        case 0x242f00u: goto label_242f00;
        case 0x242f04u: goto label_242f04;
        case 0x242f08u: goto label_242f08;
        case 0x242f0cu: goto label_242f0c;
        case 0x242f10u: goto label_242f10;
        case 0x242f14u: goto label_242f14;
        case 0x242f18u: goto label_242f18;
        case 0x242f1cu: goto label_242f1c;
        case 0x242f20u: goto label_242f20;
        case 0x242f24u: goto label_242f24;
        case 0x242f28u: goto label_242f28;
        case 0x242f2cu: goto label_242f2c;
        case 0x242f30u: goto label_242f30;
        case 0x242f34u: goto label_242f34;
        case 0x242f38u: goto label_242f38;
        case 0x242f3cu: goto label_242f3c;
        case 0x242f40u: goto label_242f40;
        case 0x242f44u: goto label_242f44;
        case 0x242f48u: goto label_242f48;
        case 0x242f4cu: goto label_242f4c;
        case 0x242f50u: goto label_242f50;
        case 0x242f54u: goto label_242f54;
        case 0x242f58u: goto label_242f58;
        case 0x242f5cu: goto label_242f5c;
        case 0x242f60u: goto label_242f60;
        case 0x242f64u: goto label_242f64;
        default: break;
    }

    ctx->pc = 0x242c58u;

label_242c58:
    // 0x242c58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x242c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_242c5c:
    // 0x242c5c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x242c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_242c60:
    // 0x242c60: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x242c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_242c64:
    // 0x242c64: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x242c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_242c68:
    // 0x242c68: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x242c68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242c6c:
    // 0x242c6c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x242c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_242c70:
    // 0x242c70: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x242c70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_242c74:
    // 0x242c74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x242c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_242c78:
    // 0x242c78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x242c78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242c7c:
    // 0x242c7c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x242c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_242c80:
    // 0x242c80: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x242c80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_242c84:
    // 0x242c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242c88:
    // 0x242c88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x242c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242c8c:
    // 0x242c8c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x242c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_242c90:
    // 0x242c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242c94:
    // 0x242c94: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x242c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_242c98:
    // 0x242c98: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_242c9c:
    if (ctx->pc == 0x242C9Cu) {
        ctx->pc = 0x242C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C98u;
        // 0x242c9c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CA0u;
        goto label_242ca0;
    }
    ctx->pc = 0x242C98u;
    {
        const bool branch_taken_0x242c98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x242C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242C98u;
        // 0x242c9c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242c98) {
            ctx->pc = 0x242CA8u;
            goto label_242ca8;
        }
    }
    ctx->pc = 0x242CA0u;
label_242ca0:
    // 0x242ca0: 0x1000006e  b           . + 4 + (0x6E << 2)
label_242ca4:
    if (ctx->pc == 0x242CA4u) {
        ctx->pc = 0x242CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CA0u;
        // 0x242ca4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CA8u;
        goto label_242ca8;
    }
    ctx->pc = 0x242CA0u;
    {
        const bool branch_taken_0x242ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CA0u;
        // 0x242ca4: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ca0) {
            ctx->pc = 0x242E5Cu;
            goto label_242e5c;
        }
    }
    ctx->pc = 0x242CA8u;
label_242ca8:
    // 0x242ca8: 0xc08c682  jal         func_231A08
label_242cac:
    if (ctx->pc == 0x242CACu) {
        ctx->pc = 0x242CB0u;
        goto label_242cb0;
    }
    ctx->pc = 0x242CA8u;
    SET_GPR_U32(ctx, 31, 0x242CB0u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x242CA8u, 0x242CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CB0u;
label_242cb0:
    // 0x242cb0: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x242cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_242cb4:
    // 0x242cb4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_242cb8:
    if (ctx->pc == 0x242CB8u) {
        ctx->pc = 0x242CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CB4u;
        // 0x242cb8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CBCu;
        goto label_242cbc;
    }
    ctx->pc = 0x242CB4u;
    {
        const bool branch_taken_0x242cb4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x242CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CB4u;
        // 0x242cb8: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cb4) {
            ctx->pc = 0x242CC4u;
            goto label_242cc4;
        }
    }
    ctx->pc = 0x242CBCu;
label_242cbc:
    // 0x242cbc: 0x56200064  bnel        $s1, $zero, . + 4 + (0x64 << 2)
label_242cc0:
    if (ctx->pc == 0x242CC0u) {
        ctx->pc = 0x242CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CBCu;
        // 0x242cc0: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CC4u;
        goto label_242cc4;
    }
    ctx->pc = 0x242CBCu;
    {
        const bool branch_taken_0x242cbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x242cbc) {
            ctx->pc = 0x242CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242CBCu;
            // 0x242cc0: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242CC4u;
label_242cc4:
    // 0x242cc4: 0x2e220012  sltiu       $v0, $s1, 0x12
    ctx->pc = 0x242cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_242cc8:
    // 0x242cc8: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_242ccc:
    if (ctx->pc == 0x242CCCu) {
        ctx->pc = 0x242CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CC8u;
        // 0x242ccc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CD0u;
        goto label_242cd0;
    }
    ctx->pc = 0x242CC8u;
    {
        const bool branch_taken_0x242cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CC8u;
        // 0x242ccc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cc8) {
            ctx->pc = 0x242E44u;
            goto label_242e44;
        }
    }
    ctx->pc = 0x242CD0u;
label_242cd0:
    // 0x242cd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x242cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_242cd4:
    // 0x242cd4: 0x24426650  addiu       $v0, $v0, 0x6650
    ctx->pc = 0x242cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26192));
label_242cd8:
    // 0x242cd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x242cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_242cdc:
    // 0x242cdc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x242cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_242ce0:
    // 0x242ce0: 0x800008  jr          $a0
label_242ce4:
    if (ctx->pc == 0x242CE4u) {
        ctx->pc = 0x242CE8u;
        goto label_242ce8;
    }
    ctx->pc = 0x242CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242CE8u: goto label_242ce8;
            case 0x242CFCu: goto label_242cfc;
            case 0x242D0Cu: goto label_242d0c;
            case 0x242D1Cu: goto label_242d1c;
            case 0x242D2Cu: goto label_242d2c;
            case 0x242DCCu: goto label_242dcc;
            case 0x242DD4u: goto label_242dd4;
            case 0x242DDCu: goto label_242ddc;
            case 0x242DFCu: goto label_242dfc;
            case 0x242E20u: goto label_242e20;
            case 0x242E44u: goto label_242e44;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242CE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x242CE8u;
label_242ce8:
    // 0x242ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242cec:
    // 0x242cec: 0xc090a42  jal         func_242908
label_242cf0:
    if (ctx->pc == 0x242CF0u) {
        ctx->pc = 0x242CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CECu;
        // 0x242cf0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CF4u;
        goto label_242cf4;
    }
    ctx->pc = 0x242CECu;
    SET_GPR_U32(ctx, 31, 0x242CF4u);
    ctx->pc = 0x242CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CECu;
    // 0x242cf0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242908u, 0x242CECu, 0x242CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242CF4u;
label_242cf4:
    // 0x242cf4: 0x10000056  b           . + 4 + (0x56 << 2)
label_242cf8:
    if (ctx->pc == 0x242CF8u) {
        ctx->pc = 0x242CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CF4u;
        // 0x242cf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242CFCu;
        goto label_242cfc;
    }
    ctx->pc = 0x242CF4u;
    {
        const bool branch_taken_0x242cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CF4u;
        // 0x242cf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242cf4) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242CFCu;
label_242cfc:
    // 0x242cfc: 0xc090a6c  jal         func_2429B0
label_242d00:
    if (ctx->pc == 0x242D00u) {
        ctx->pc = 0x242D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242CFCu;
        // 0x242d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D04u;
        goto label_242d04;
    }
    ctx->pc = 0x242CFCu;
    SET_GPR_U32(ctx, 31, 0x242D04u);
    ctx->pc = 0x242D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242CFCu;
    // 0x242d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2429B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2429B0u, 0x242CFCu, 0x242D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D04u;
label_242d04:
    // 0x242d04: 0x10000052  b           . + 4 + (0x52 << 2)
label_242d08:
    if (ctx->pc == 0x242D08u) {
        ctx->pc = 0x242D0Cu;
        goto label_242d0c;
    }
    ctx->pc = 0x242D04u;
    {
        const bool branch_taken_0x242d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d04) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242D0Cu;
label_242d0c:
    // 0x242d0c: 0xc08c13c  jal         func_2304F0
label_242d10:
    if (ctx->pc == 0x242D10u) {
        ctx->pc = 0x242D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D0Cu;
        // 0x242d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D14u;
        goto label_242d14;
    }
    ctx->pc = 0x242D0Cu;
    SET_GPR_U32(ctx, 31, 0x242D14u);
    ctx->pc = 0x242D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D0Cu;
    // 0x242d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2304F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2304F0u, 0x242D0Cu, 0x242D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D14u;
label_242d14:
    // 0x242d14: 0x10000029  b           . + 4 + (0x29 << 2)
label_242d18:
    if (ctx->pc == 0x242D18u) {
        ctx->pc = 0x242D1Cu;
        goto label_242d1c;
    }
    ctx->pc = 0x242D14u;
    {
        const bool branch_taken_0x242d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d14) {
            ctx->pc = 0x242DBCu;
            goto label_242dbc;
        }
    }
    ctx->pc = 0x242D1Cu;
label_242d1c:
    // 0x242d1c: 0xc08c1f6  jal         func_2307D8
label_242d20:
    if (ctx->pc == 0x242D20u) {
        ctx->pc = 0x242D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D1Cu;
        // 0x242d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D24u;
        goto label_242d24;
    }
    ctx->pc = 0x242D1Cu;
    SET_GPR_U32(ctx, 31, 0x242D24u);
    ctx->pc = 0x242D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242D1Cu;
    // 0x242d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2307D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307D8u, 0x242D1Cu, 0x242D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242D24u;
label_242d24:
    // 0x242d24: 0x1000004a  b           . + 4 + (0x4A << 2)
label_242d28:
    if (ctx->pc == 0x242D28u) {
        ctx->pc = 0x242D2Cu;
        goto label_242d2c;
    }
    ctx->pc = 0x242D24u;
    {
        const bool branch_taken_0x242d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d24) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242D2Cu;
label_242d2c:
    // 0x242d2c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_242d30:
    if (ctx->pc == 0x242D30u) {
        ctx->pc = 0x242D34u;
        goto label_242d34;
    }
    ctx->pc = 0x242D2Cu;
    {
        const bool branch_taken_0x242d2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d2c) {
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242D34u;
label_242d34:
    // 0x242d34: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x242d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_242d38:
    // 0x242d38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_242d3c:
    if (ctx->pc == 0x242D3Cu) {
        ctx->pc = 0x242D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D38u;
        // 0x242d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D40u;
        goto label_242d40;
    }
    ctx->pc = 0x242D38u;
    {
        const bool branch_taken_0x242d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D38u;
        // 0x242d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d38) {
            ctx->pc = 0x242D48u;
            goto label_242d48;
        }
    }
    ctx->pc = 0x242D40u;
label_242d40:
    // 0x242d40: 0x10000028  b           . + 4 + (0x28 << 2)
label_242d44:
    if (ctx->pc == 0x242D44u) {
        ctx->pc = 0x242D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D40u;
        // 0x242d44: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D48u;
        goto label_242d48;
    }
    ctx->pc = 0x242D40u;
    {
        const bool branch_taken_0x242d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D40u;
        // 0x242d44: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d40) {
            ctx->pc = 0x242DE4u;
            goto label_242de4;
        }
    }
    ctx->pc = 0x242D48u;
label_242d48:
    // 0x242d48: 0x12a00011  beqz        $s5, . + 4 + (0x11 << 2)
label_242d4c:
    if (ctx->pc == 0x242D4Cu) {
        ctx->pc = 0x242D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D48u;
        // 0x242d4c: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D50u;
        goto label_242d50;
    }
    ctx->pc = 0x242D48u;
    {
        const bool branch_taken_0x242d48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x242D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D48u;
        // 0x242d4c: 0x96020006  lhu         $v0, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d48) {
            ctx->pc = 0x242D90u;
            goto label_242d90;
        }
    }
    ctx->pc = 0x242D50u;
label_242d50:
    // 0x242d50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x242d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_242d54:
    // 0x242d54: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_242d58:
    if (ctx->pc == 0x242D58u) {
        ctx->pc = 0x242D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D54u;
        // 0x242d58: 0x2414007f  addiu       $s4, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D5Cu;
        goto label_242d5c;
    }
    ctx->pc = 0x242D54u;
    {
        const bool branch_taken_0x242d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D54u;
        // 0x242d58: 0x2414007f  addiu       $s4, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d54) {
            ctx->pc = 0x242DECu;
            goto label_242dec;
        }
    }
    ctx->pc = 0x242D5Cu;
label_242d5c:
    // 0x242d5c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x242d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_242d60:
    // 0x242d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242d64:
    // 0x242d64: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x242d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_242d68:
    // 0x242d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242d6c:
    // 0x242d6c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x242d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_242d70:
    // 0x242d70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x242d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_242d74:
    // 0x242d74: 0x40f809  jalr        $v0
label_242d78:
    if (ctx->pc == 0x242D78u) {
        ctx->pc = 0x242D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D74u;
        // 0x242d78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D7Cu;
        goto label_242d7c;
    }
    ctx->pc = 0x242D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242D7Cu);
        ctx->pc = 0x242D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D74u;
        // 0x242d78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242D74u, 0x242D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242D7Cu;
label_242d7c:
    // 0x242d7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x242d7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242d80:
    // 0x242d80: 0x52800008  beql        $s4, $zero, . + 4 + (0x8 << 2)
label_242d84:
    if (ctx->pc == 0x242D84u) {
        ctx->pc = 0x242D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D80u;
        // 0x242d84: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D88u;
        goto label_242d88;
    }
    ctx->pc = 0x242D80u;
    {
        const bool branch_taken_0x242d80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d80) {
            ctx->pc = 0x242D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D80u;
            // 0x242d84: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242DA4u;
            goto label_242da4;
        }
    }
    ctx->pc = 0x242D88u;
label_242d88:
    // 0x242d88: 0x10000018  b           . + 4 + (0x18 << 2)
label_242d8c:
    if (ctx->pc == 0x242D8Cu) {
        ctx->pc = 0x242D90u;
        goto label_242d90;
    }
    ctx->pc = 0x242D88u;
    {
        const bool branch_taken_0x242d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242d88) {
            ctx->pc = 0x242DECu;
            goto label_242dec;
        }
    }
    ctx->pc = 0x242D90u;
label_242d90:
    // 0x242d90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x242d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_242d94:
    // 0x242d94: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_242d98:
    if (ctx->pc == 0x242D98u) {
        ctx->pc = 0x242D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D94u;
        // 0x242d98: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242D9Cu;
        goto label_242d9c;
    }
    ctx->pc = 0x242D94u;
    {
        const bool branch_taken_0x242d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242d94) {
            ctx->pc = 0x242D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242D94u;
            // 0x242d98: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242DA4u;
            goto label_242da4;
        }
    }
    ctx->pc = 0x242D9Cu;
label_242d9c:
    // 0x242d9c: 0x10000013  b           . + 4 + (0x13 << 2)
label_242da0:
    if (ctx->pc == 0x242DA0u) {
        ctx->pc = 0x242DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D9Cu;
        // 0x242da0: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DA4u;
        goto label_242da4;
    }
    ctx->pc = 0x242D9Cu;
    {
        const bool branch_taken_0x242d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242D9Cu;
        // 0x242da0: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242d9c) {
            ctx->pc = 0x242DECu;
            goto label_242dec;
        }
    }
    ctx->pc = 0x242DA4u;
label_242da4:
    // 0x242da4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x242da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_242da8:
    // 0x242da8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x242da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_242dac:
    // 0x242dac: 0x40f809  jalr        $v0
label_242db0:
    if (ctx->pc == 0x242DB0u) {
        ctx->pc = 0x242DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DACu;
        // 0x242db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DB4u;
        goto label_242db4;
    }
    ctx->pc = 0x242DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242DB4u);
        ctx->pc = 0x242DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DACu;
        // 0x242db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242DACu, 0x242DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242DB4u;
label_242db4:
    // 0x242db4: 0x12a00026  beqz        $s5, . + 4 + (0x26 << 2)
label_242db8:
    if (ctx->pc == 0x242DB8u) {
        ctx->pc = 0x242DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DB4u;
        // 0x242db8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DBCu;
        goto label_242dbc;
    }
    ctx->pc = 0x242DB4u;
    {
        const bool branch_taken_0x242db4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DB4u;
        // 0x242db8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242db4) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242DBCu;
label_242dbc:
    // 0x242dbc: 0xc090a80  jal         func_242A00
label_242dc0:
    if (ctx->pc == 0x242DC0u) {
        ctx->pc = 0x242DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DBCu;
        // 0x242dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DC4u;
        goto label_242dc4;
    }
    ctx->pc = 0x242DBCu;
    SET_GPR_U32(ctx, 31, 0x242DC4u);
    ctx->pc = 0x242DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DBCu;
    // 0x242dc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A00u, 0x242DBCu, 0x242DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DC4u;
label_242dc4:
    // 0x242dc4: 0x10000022  b           . + 4 + (0x22 << 2)
label_242dc8:
    if (ctx->pc == 0x242DC8u) {
        ctx->pc = 0x242DCCu;
        goto label_242dcc;
    }
    ctx->pc = 0x242DC4u;
    {
        const bool branch_taken_0x242dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242dc4) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242DCCu;
label_242dcc:
    // 0x242dcc: 0x10000023  b           . + 4 + (0x23 << 2)
label_242dd0:
    if (ctx->pc == 0x242DD0u) {
        ctx->pc = 0x242DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DCCu;
        // 0x242dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DD4u;
        goto label_242dd4;
    }
    ctx->pc = 0x242DCCu;
    {
        const bool branch_taken_0x242dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DCCu;
        // 0x242dd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dcc) {
            ctx->pc = 0x242E5Cu;
            goto label_242e5c;
        }
    }
    ctx->pc = 0x242DD4u;
label_242dd4:
    // 0x242dd4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_242dd8:
    if (ctx->pc == 0x242DD8u) {
        ctx->pc = 0x242DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DD4u;
        // 0x242dd8: 0x2414005f  addiu       $s4, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DDCu;
        goto label_242ddc;
    }
    ctx->pc = 0x242DD4u;
    {
        const bool branch_taken_0x242dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DD4u;
        // 0x242dd8: 0x2414005f  addiu       $s4, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242dd4) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242DDCu;
label_242ddc:
    // 0x242ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x242ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_242de0:
    // 0x242de0: 0x2414005f  addiu       $s4, $zero, 0x5F
    ctx->pc = 0x242de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_242de4:
    // 0x242de4: 0xc08a9d6  jal         func_22A758
label_242de8:
    if (ctx->pc == 0x242DE8u) {
        ctx->pc = 0x242DECu;
        goto label_242dec;
    }
    ctx->pc = 0x242DE4u;
    SET_GPR_U32(ctx, 31, 0x242DECu);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x242DE4u, 0x242DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DECu;
label_242dec:
    // 0x242dec: 0xc08a9d6  jal         func_22A758
label_242df0:
    if (ctx->pc == 0x242DF0u) {
        ctx->pc = 0x242DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242DECu;
        // 0x242df0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242DF4u;
        goto label_242df4;
    }
    ctx->pc = 0x242DECu;
    SET_GPR_U32(ctx, 31, 0x242DF4u);
    ctx->pc = 0x242DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242DECu;
    // 0x242df0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x242DECu, 0x242DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242DF4u;
label_242df4:
    // 0x242df4: 0x10000016  b           . + 4 + (0x16 << 2)
label_242df8:
    if (ctx->pc == 0x242DF8u) {
        ctx->pc = 0x242DFCu;
        goto label_242dfc;
    }
    ctx->pc = 0x242DF4u;
    {
        const bool branch_taken_0x242df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242df4) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242DFCu;
label_242dfc:
    // 0x242dfc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x242dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_242e00:
    // 0x242e00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_242e04:
    if (ctx->pc == 0x242E04u) {
        ctx->pc = 0x242E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E00u;
        // 0x242e04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E08u;
        goto label_242e08;
    }
    ctx->pc = 0x242E00u;
    {
        const bool branch_taken_0x242e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E00u;
        // 0x242e04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e00) {
            ctx->pc = 0x242E10u;
            goto label_242e10;
        }
    }
    ctx->pc = 0x242E08u;
label_242e08:
    // 0x242e08: 0x10000011  b           . + 4 + (0x11 << 2)
label_242e0c:
    if (ctx->pc == 0x242E0Cu) {
        ctx->pc = 0x242E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E08u;
        // 0x242e0c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E10u;
        goto label_242e10;
    }
    ctx->pc = 0x242E08u;
    {
        const bool branch_taken_0x242e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E08u;
        // 0x242e0c: 0x24140016  addiu       $s4, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e08) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242E10u;
label_242e10:
    // 0x242e10: 0xc090b06  jal         func_242C18
label_242e14:
    if (ctx->pc == 0x242E14u) {
        ctx->pc = 0x242E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E10u;
        // 0x242e14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E18u;
        goto label_242e18;
    }
    ctx->pc = 0x242E10u;
    SET_GPR_U32(ctx, 31, 0x242E18u);
    ctx->pc = 0x242E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E10u;
    // 0x242e14: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242C18u, 0x242E10u, 0x242E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E18u;
label_242e18:
    // 0x242e18: 0x1000000d  b           . + 4 + (0xD << 2)
label_242e1c:
    if (ctx->pc == 0x242E1Cu) {
        ctx->pc = 0x242E20u;
        goto label_242e20;
    }
    ctx->pc = 0x242E18u;
    {
        const bool branch_taken_0x242e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e18) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242E20u;
label_242e20:
    // 0x242e20: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x242e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_242e24:
    // 0x242e24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_242e28:
    if (ctx->pc == 0x242E28u) {
        ctx->pc = 0x242E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E24u;
        // 0x242e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E2Cu;
        goto label_242e2c;
    }
    ctx->pc = 0x242E24u;
    {
        const bool branch_taken_0x242e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E24u;
        // 0x242e28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e24) {
            ctx->pc = 0x242E34u;
            goto label_242e34;
        }
    }
    ctx->pc = 0x242E2Cu;
label_242e2c:
    // 0x242e2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_242e30:
    if (ctx->pc == 0x242E30u) {
        ctx->pc = 0x242E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E2Cu;
        // 0x242e30: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E34u;
        goto label_242e34;
    }
    ctx->pc = 0x242E2Cu;
    {
        const bool branch_taken_0x242e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E2Cu;
        // 0x242e30: 0x24140080  addiu       $s4, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e2c) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242E34u;
label_242e34:
    // 0x242e34: 0xc090b0e  jal         func_242C38
label_242e38:
    if (ctx->pc == 0x242E38u) {
        ctx->pc = 0x242E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E34u;
        // 0x242e38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E3Cu;
        goto label_242e3c;
    }
    ctx->pc = 0x242E34u;
    SET_GPR_U32(ctx, 31, 0x242E3Cu);
    ctx->pc = 0x242E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E34u;
    // 0x242e38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242C38u, 0x242E34u, 0x242E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E3Cu;
label_242e3c:
    // 0x242e3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_242e40:
    if (ctx->pc == 0x242E40u) {
        ctx->pc = 0x242E44u;
        goto label_242e44;
    }
    ctx->pc = 0x242E3Cu;
    {
        const bool branch_taken_0x242e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242e3c) {
            ctx->pc = 0x242E50u;
            goto label_242e50;
        }
    }
    ctx->pc = 0x242E44u;
label_242e44:
    // 0x242e44: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x242e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_242e48:
    // 0x242e48: 0xc08b5e0  jal         func_22D780
label_242e4c:
    if (ctx->pc == 0x242E4Cu) {
        ctx->pc = 0x242E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E48u;
        // 0x242e4c: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E50u;
        goto label_242e50;
    }
    ctx->pc = 0x242E48u;
    SET_GPR_U32(ctx, 31, 0x242E50u);
    ctx->pc = 0x242E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E48u;
    // 0x242e4c: 0x24846640  addiu       $a0, $a0, 0x6640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x242E48u, 0x242E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E50u;
label_242e50:
    // 0x242e50: 0xc08c698  jal         func_231A60
label_242e54:
    if (ctx->pc == 0x242E54u) {
        ctx->pc = 0x242E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E50u;
        // 0x242e54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E58u;
        goto label_242e58;
    }
    ctx->pc = 0x242E50u;
    SET_GPR_U32(ctx, 31, 0x242E58u);
    ctx->pc = 0x242E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242E50u;
    // 0x242e54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x242E50u, 0x242E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242E58u;
label_242e58:
    // 0x242e58: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x242e58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_242e5c:
    // 0x242e5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x242e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_242e60:
    // 0x242e60: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x242e60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_242e64:
    // 0x242e64: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x242e64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_242e68:
    // 0x242e68: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x242e68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_242e6c:
    // 0x242e6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x242e6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_242e70:
    // 0x242e70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x242e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_242e74:
    // 0x242e74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x242e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_242e78:
    // 0x242e78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x242e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242e7c:
    // 0x242e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242e80:
    // 0x242e80: 0x3e00008  jr          $ra
label_242e84:
    if (ctx->pc == 0x242E84u) {
        ctx->pc = 0x242E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E80u;
        // 0x242e84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242E88u;
        goto label_242e88;
    }
    ctx->pc = 0x242E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242E80u;
        // 0x242e84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242E88u;
label_242e88:
    // 0x242e88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_242e8c:
    // 0x242e8c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x242e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_242e90:
    // 0x242e90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242e94:
    // 0x242e94: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x242e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_242e98:
    // 0x242e98: 0x8c50f998  lw          $s0, -0x668($v0)
    ctx->pc = 0x242e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965656)));
label_242e9c:
    // 0x242e9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x242e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242ea0:
    // 0x242ea0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_242ea4:
    if (ctx->pc == 0x242EA4u) {
        ctx->pc = 0x242EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EA0u;
        // 0x242ea4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EA8u;
        goto label_242ea8;
    }
    ctx->pc = 0x242EA0u;
    {
        const bool branch_taken_0x242ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EA0u;
        // 0x242ea4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ea0) {
            ctx->pc = 0x242ED8u;
            goto label_242ed8;
        }
    }
    ctx->pc = 0x242EA8u;
label_242ea8:
    // 0x242ea8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x242ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_242eac:
    // 0x242eac: 0x0  nop
    ctx->pc = 0x242eacu;
    // NOP
label_242eb0:
    // 0x242eb0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_242eb4:
    if (ctx->pc == 0x242EB4u) {
        ctx->pc = 0x242EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EB0u;
        // 0x242eb4: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EB8u;
        goto label_242eb8;
    }
    ctx->pc = 0x242EB0u;
    {
        const bool branch_taken_0x242eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242eb0) {
            ctx->pc = 0x242EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242EB0u;
            // 0x242eb4: 0x8e10001c  lw          $s0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242ED0u;
            goto label_242ed0;
        }
    }
    ctx->pc = 0x242EB8u;
label_242eb8:
    // 0x242eb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x242eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242ebc:
    // 0x242ebc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x242ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_242ec0:
    // 0x242ec0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x242ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_242ec4:
    // 0x242ec4: 0x40f809  jalr        $v0
label_242ec8:
    if (ctx->pc == 0x242EC8u) {
        ctx->pc = 0x242EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EC4u;
        // 0x242ec8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242ECCu;
        goto label_242ecc;
    }
    ctx->pc = 0x242EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x242ECCu);
        ctx->pc = 0x242EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EC4u;
        // 0x242ec8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242EC4u, 0x242ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x242ECCu;
label_242ecc:
    // 0x242ecc: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x242eccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_242ed0:
    // 0x242ed0: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_242ed4:
    if (ctx->pc == 0x242ED4u) {
        ctx->pc = 0x242ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242ED0u;
        // 0x242ed4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242ED8u;
        goto label_242ed8;
    }
    ctx->pc = 0x242ED0u;
    {
        const bool branch_taken_0x242ed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x242ed0) {
            ctx->pc = 0x242ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242ED0u;
            // 0x242ed4: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x242EB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242eb0;
        }
    }
    ctx->pc = 0x242ED8u;
label_242ed8:
    // 0x242ed8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x242ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_242edc:
    // 0x242edc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x242edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242ee0:
    // 0x242ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242ee4:
    // 0x242ee4: 0x3e00008  jr          $ra
label_242ee8:
    if (ctx->pc == 0x242EE8u) {
        ctx->pc = 0x242EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EE4u;
        // 0x242ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242EECu;
        goto label_242eec;
    }
    ctx->pc = 0x242EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242EE4u;
        // 0x242ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242EECu;
label_242eec:
    // 0x242eec: 0x0  nop
    ctx->pc = 0x242eecu;
    // NOP
label_242ef0:
    // 0x242ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_242ef4:
    // 0x242ef4: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x242ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_242ef8:
    // 0x242ef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_242efc:
    // 0x242efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242f00:
    // 0x242f00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_242f04:
    // 0x242f04: 0x2484fee8  addiu       $a0, $a0, -0x118
    ctx->pc = 0x242f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967016));
label_242f08:
    // 0x242f08: 0xc049cb6  jal         func_1272D8
label_242f0c:
    if (ctx->pc == 0x242F0Cu) {
        ctx->pc = 0x242F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F08u;
        // 0x242f0c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F10u;
        goto label_242f10;
    }
    ctx->pc = 0x242F08u;
    SET_GPR_U32(ctx, 31, 0x242F10u);
    ctx->pc = 0x242F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F08u;
    // 0x242f0c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x242F08u, 0x242F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F10u;
label_242f10:
    // 0x242f10: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x242f10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_242f14:
    // 0x242f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242f18:
    // 0x242f18: 0x2610ff10  addiu       $s0, $s0, -0xF0
    ctx->pc = 0x242f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967056));
label_242f1c:
    // 0x242f1c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x242f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_242f20:
    // 0x242f20: 0xc049cb6  jal         func_1272D8
label_242f24:
    if (ctx->pc == 0x242F24u) {
        ctx->pc = 0x242F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F20u;
        // 0x242f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F28u;
        goto label_242f28;
    }
    ctx->pc = 0x242F20u;
    SET_GPR_U32(ctx, 31, 0x242F28u);
    ctx->pc = 0x242F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F20u;
    // 0x242f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x242F20u, 0x242F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F28u;
label_242f28:
    // 0x242f28: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x242f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_242f2c:
    // 0x242f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_242f30:
    // 0x242f30: 0x2484ff00  addiu       $a0, $a0, -0x100
    ctx->pc = 0x242f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
label_242f34:
    // 0x242f34: 0xc049cb6  jal         func_1272D8
label_242f38:
    if (ctx->pc == 0x242F38u) {
        ctx->pc = 0x242F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F34u;
        // 0x242f38: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F3Cu;
        goto label_242f3c;
    }
    ctx->pc = 0x242F34u;
    SET_GPR_U32(ctx, 31, 0x242F3Cu);
    ctx->pc = 0x242F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F34u;
    // 0x242f38: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x242F34u, 0x242F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F3Cu;
label_242f3c:
    // 0x242f3c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x242f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_242f40:
    // 0x242f40: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x242f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_242f44:
    // 0x242f44: 0x0  nop
    ctx->pc = 0x242f44u;
    // NOP
label_242f48:
    // 0x242f48: 0xc0909e8  jal         func_2427A0
label_242f4c:
    if (ctx->pc == 0x242F4Cu) {
        ctx->pc = 0x242F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F48u;
        // 0x242f4c: 0xac40ff90  sw          $zero, -0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F50u;
        goto label_242f50;
    }
    ctx->pc = 0x242F48u;
    SET_GPR_U32(ctx, 31, 0x242F50u);
    ctx->pc = 0x242F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F48u;
    // 0x242f4c: 0xac40ff90  sw          $zero, -0x70($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2427A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2427A0u, 0x242F48u, 0x242F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242F50u;
label_242f50:
    // 0x242f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242f54:
    // 0x242f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x242f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242f58:
    // 0x242f58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242f5c:
    // 0x242f5c: 0x8090ba2  j           func_242E88
label_242f60:
    if (ctx->pc == 0x242F60u) {
        ctx->pc = 0x242F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242F5Cu;
        // 0x242f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x242F64u;
        goto label_242f64;
    }
    ctx->pc = 0x242F5Cu;
    ctx->pc = 0x242F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242F5Cu;
    // 0x242f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242E88u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_242e88;
    ctx->pc = 0x242F64u;
label_242f64:
    // 0x242f64: 0x0  nop
    ctx->pc = 0x242f64u;
    // NOP
    if (ctx->pc == 0x242f64u) { ctx->pc = 0x242f68u; }
}
