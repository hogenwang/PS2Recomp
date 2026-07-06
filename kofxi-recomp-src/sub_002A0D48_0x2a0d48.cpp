#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A0D48
// Address: 0x2a0d48 - 0x2a0ef0
void sub_002A0D48_0x2a0d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0D48_0x2a0d48");
#endif

    switch (ctx->pc) {
        case 0x2a0d48u: goto label_2a0d48;
        case 0x2a0d4cu: goto label_2a0d4c;
        case 0x2a0d50u: goto label_2a0d50;
        case 0x2a0d54u: goto label_2a0d54;
        case 0x2a0d58u: goto label_2a0d58;
        case 0x2a0d5cu: goto label_2a0d5c;
        case 0x2a0d60u: goto label_2a0d60;
        case 0x2a0d64u: goto label_2a0d64;
        case 0x2a0d68u: goto label_2a0d68;
        case 0x2a0d6cu: goto label_2a0d6c;
        case 0x2a0d70u: goto label_2a0d70;
        case 0x2a0d74u: goto label_2a0d74;
        case 0x2a0d78u: goto label_2a0d78;
        case 0x2a0d7cu: goto label_2a0d7c;
        case 0x2a0d80u: goto label_2a0d80;
        case 0x2a0d84u: goto label_2a0d84;
        case 0x2a0d88u: goto label_2a0d88;
        case 0x2a0d8cu: goto label_2a0d8c;
        case 0x2a0d90u: goto label_2a0d90;
        case 0x2a0d94u: goto label_2a0d94;
        case 0x2a0d98u: goto label_2a0d98;
        case 0x2a0d9cu: goto label_2a0d9c;
        case 0x2a0da0u: goto label_2a0da0;
        case 0x2a0da4u: goto label_2a0da4;
        case 0x2a0da8u: goto label_2a0da8;
        case 0x2a0dacu: goto label_2a0dac;
        case 0x2a0db0u: goto label_2a0db0;
        case 0x2a0db4u: goto label_2a0db4;
        case 0x2a0db8u: goto label_2a0db8;
        case 0x2a0dbcu: goto label_2a0dbc;
        case 0x2a0dc0u: goto label_2a0dc0;
        case 0x2a0dc4u: goto label_2a0dc4;
        case 0x2a0dc8u: goto label_2a0dc8;
        case 0x2a0dccu: goto label_2a0dcc;
        case 0x2a0dd0u: goto label_2a0dd0;
        case 0x2a0dd4u: goto label_2a0dd4;
        case 0x2a0dd8u: goto label_2a0dd8;
        case 0x2a0ddcu: goto label_2a0ddc;
        case 0x2a0de0u: goto label_2a0de0;
        case 0x2a0de4u: goto label_2a0de4;
        case 0x2a0de8u: goto label_2a0de8;
        case 0x2a0decu: goto label_2a0dec;
        case 0x2a0df0u: goto label_2a0df0;
        case 0x2a0df4u: goto label_2a0df4;
        case 0x2a0df8u: goto label_2a0df8;
        case 0x2a0dfcu: goto label_2a0dfc;
        case 0x2a0e00u: goto label_2a0e00;
        case 0x2a0e04u: goto label_2a0e04;
        case 0x2a0e08u: goto label_2a0e08;
        case 0x2a0e0cu: goto label_2a0e0c;
        case 0x2a0e10u: goto label_2a0e10;
        case 0x2a0e14u: goto label_2a0e14;
        case 0x2a0e18u: goto label_2a0e18;
        case 0x2a0e1cu: goto label_2a0e1c;
        case 0x2a0e20u: goto label_2a0e20;
        case 0x2a0e24u: goto label_2a0e24;
        case 0x2a0e28u: goto label_2a0e28;
        case 0x2a0e2cu: goto label_2a0e2c;
        case 0x2a0e30u: goto label_2a0e30;
        case 0x2a0e34u: goto label_2a0e34;
        case 0x2a0e38u: goto label_2a0e38;
        case 0x2a0e3cu: goto label_2a0e3c;
        case 0x2a0e40u: goto label_2a0e40;
        case 0x2a0e44u: goto label_2a0e44;
        case 0x2a0e48u: goto label_2a0e48;
        case 0x2a0e4cu: goto label_2a0e4c;
        case 0x2a0e50u: goto label_2a0e50;
        case 0x2a0e54u: goto label_2a0e54;
        case 0x2a0e58u: goto label_2a0e58;
        case 0x2a0e5cu: goto label_2a0e5c;
        case 0x2a0e60u: goto label_2a0e60;
        case 0x2a0e64u: goto label_2a0e64;
        case 0x2a0e68u: goto label_2a0e68;
        case 0x2a0e6cu: goto label_2a0e6c;
        case 0x2a0e70u: goto label_2a0e70;
        case 0x2a0e74u: goto label_2a0e74;
        case 0x2a0e78u: goto label_2a0e78;
        case 0x2a0e7cu: goto label_2a0e7c;
        case 0x2a0e80u: goto label_2a0e80;
        case 0x2a0e84u: goto label_2a0e84;
        case 0x2a0e88u: goto label_2a0e88;
        case 0x2a0e8cu: goto label_2a0e8c;
        case 0x2a0e90u: goto label_2a0e90;
        case 0x2a0e94u: goto label_2a0e94;
        case 0x2a0e98u: goto label_2a0e98;
        case 0x2a0e9cu: goto label_2a0e9c;
        case 0x2a0ea0u: goto label_2a0ea0;
        case 0x2a0ea4u: goto label_2a0ea4;
        case 0x2a0ea8u: goto label_2a0ea8;
        case 0x2a0eacu: goto label_2a0eac;
        case 0x2a0eb0u: goto label_2a0eb0;
        case 0x2a0eb4u: goto label_2a0eb4;
        case 0x2a0eb8u: goto label_2a0eb8;
        case 0x2a0ebcu: goto label_2a0ebc;
        case 0x2a0ec0u: goto label_2a0ec0;
        case 0x2a0ec4u: goto label_2a0ec4;
        case 0x2a0ec8u: goto label_2a0ec8;
        case 0x2a0eccu: goto label_2a0ecc;
        case 0x2a0ed0u: goto label_2a0ed0;
        case 0x2a0ed4u: goto label_2a0ed4;
        case 0x2a0ed8u: goto label_2a0ed8;
        case 0x2a0edcu: goto label_2a0edc;
        case 0x2a0ee0u: goto label_2a0ee0;
        case 0x2a0ee4u: goto label_2a0ee4;
        case 0x2a0ee8u: goto label_2a0ee8;
        case 0x2a0eecu: goto label_2a0eec;
        default: break;
    }

    ctx->pc = 0x2a0d48u;

label_2a0d48:
    // 0x2a0d48: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2a0d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2a0d4c:
    // 0x2a0d4c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2a0d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2a0d50:
    // 0x2a0d50: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2a0d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_2a0d54:
    // 0x2a0d54: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2a0d54u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a0d58:
    // 0x2a0d58: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2a0d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2a0d5c:
    // 0x2a0d5c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2a0d5cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d60:
    // 0x2a0d60: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2a0d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_2a0d64:
    // 0x2a0d64: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2a0d64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d68:
    // 0x2a0d68: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2a0d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2a0d6c:
    // 0x2a0d6c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2a0d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d70:
    // 0x2a0d70: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2a0d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2a0d74:
    // 0x2a0d74: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2a0d74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d78:
    // 0x2a0d78: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2a0d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2a0d7c:
    // 0x2a0d7c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2a0d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d80:
    // 0x2a0d80: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2a0d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2a0d84:
    // 0x2a0d84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0d88:
    // 0x2a0d88: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2a0d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2a0d8c:
    // 0x2a0d8c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2a0d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_2a0d90:
    // 0x2a0d90: 0x10be0004  beq         $a1, $fp, . + 4 + (0x4 << 2)
label_2a0d94:
    if (ctx->pc == 0x2A0D94u) {
        ctx->pc = 0x2A0D94u;
            // 0x2a0d94: 0xafa70040  sw          $a3, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
        ctx->pc = 0x2A0D98u;
        goto label_2a0d98;
    }
    ctx->pc = 0x2A0D90u;
    {
        const bool branch_taken_0x2a0d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x2A0D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D90u;
            // 0x2a0d94: 0xafa70040  sw          $a3, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d90) {
            ctx->pc = 0x2A0DA4u;
            goto label_2a0da4;
        }
    }
    ctx->pc = 0x2A0D98u;
label_2a0d98:
    // 0x2a0d98: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2a0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2a0d9c:
    // 0x2a0d9c: 0x14a20047  bne         $a1, $v0, . + 4 + (0x47 << 2)
label_2a0da0:
    if (ctx->pc == 0x2A0DA0u) {
        ctx->pc = 0x2A0DA0u;
            // 0x2a0da0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A0DA4u;
        goto label_2a0da4;
    }
    ctx->pc = 0x2A0D9Cu;
    {
        const bool branch_taken_0x2a0d9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A0DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0D9Cu;
            // 0x2a0da0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d9c) {
            ctx->pc = 0x2A0EBCu;
            goto label_2a0ebc;
        }
    }
    ctx->pc = 0x2A0DA4u;
label_2a0da4:
    // 0x2a0da4: 0xc0a1a88  jal         func_286A20
label_2a0da8:
    if (ctx->pc == 0x2A0DA8u) {
        ctx->pc = 0x2A0DA8u;
            // 0x2a0da8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DACu;
        goto label_2a0dac;
    }
    ctx->pc = 0x2A0DA4u;
    SET_GPR_U32(ctx, 31, 0x2A0DACu);
    ctx->pc = 0x2A0DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DA4u;
            // 0x2a0da8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DACu; }
        if (ctx->pc != 0x2A0DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DACu; }
        if (ctx->pc != 0x2A0DACu) { return; }
    }
    ctx->pc = 0x2A0DACu;
label_2a0dac:
    // 0x2a0dac: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x2a0dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2a0db0:
    // 0x2a0db0: 0xc0a1a88  jal         func_286A20
label_2a0db4:
    if (ctx->pc == 0x2A0DB4u) {
        ctx->pc = 0x2A0DB4u;
            // 0x2a0db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DB8u;
        goto label_2a0db8;
    }
    ctx->pc = 0x2A0DB0u;
    SET_GPR_U32(ctx, 31, 0x2A0DB8u);
    ctx->pc = 0x2A0DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DB0u;
            // 0x2a0db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DB8u; }
        if (ctx->pc != 0x2A0DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DB8u; }
        if (ctx->pc != 0x2A0DB8u) { return; }
    }
    ctx->pc = 0x2A0DB8u;
label_2a0db8:
    // 0x2a0db8: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x2a0db8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2a0dbc:
    // 0x2a0dbc: 0xc0a1a02  jal         func_286808
label_2a0dc0:
    if (ctx->pc == 0x2A0DC0u) {
        ctx->pc = 0x2A0DC0u;
            // 0x2a0dc0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2A0DC4u;
        goto label_2a0dc4;
    }
    ctx->pc = 0x2A0DBCu;
    SET_GPR_U32(ctx, 31, 0x2A0DC4u);
    ctx->pc = 0x2A0DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DBCu;
            // 0x2a0dc0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DC4u; }
        if (ctx->pc != 0x2A0DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0DC4u; }
        if (ctx->pc != 0x2A0DC4u) { return; }
    }
    ctx->pc = 0x2A0DC4u;
label_2a0dc4:
    // 0x2a0dc4: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2a0dc8:
    // 0x2a0dc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a0dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a0dcc:
    // 0x2a0dcc: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2a0dd0:
    // 0x2a0dd0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2a0dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a0dd4:
    // 0x2a0dd4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a0dd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2a0dd8:
    // 0x2a0dd8: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x2a0dd8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_2a0ddc:
    // 0x2a0ddc: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x2a0ddcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2a0de0:
    // 0x2a0de0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2a0de4:
    if (ctx->pc == 0x2A0DE4u) {
        ctx->pc = 0x2A0DE4u;
            // 0x2a0de4: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2A0DE8u;
        goto label_2a0de8;
    }
    ctx->pc = 0x2A0DE0u;
    {
        const bool branch_taken_0x2a0de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0de0) {
            ctx->pc = 0x2A0DE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DE0u;
            // 0x2a0de4: 0x8e230058  lw          $v1, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A0DF0u;
            goto label_2a0df0;
        }
    }
    ctx->pc = 0x2A0DE8u;
label_2a0de8:
    // 0x2a0de8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2a0dec:
    if (ctx->pc == 0x2A0DECu) {
        ctx->pc = 0x2A0DECu;
            // 0x2a0dec: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A0DF0u;
        goto label_2a0df0;
    }
    ctx->pc = 0x2A0DE8u;
    {
        const bool branch_taken_0x2a0de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0DE8u;
            // 0x2a0dec: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0de8) {
            ctx->pc = 0x2A0EA8u;
            goto label_2a0ea8;
        }
    }
    ctx->pc = 0x2A0DF0u;
label_2a0df0:
    // 0x2a0df0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2a0df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a0df4:
    // 0x2a0df4: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x2a0df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2a0df8:
    // 0x2a0df8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2a0df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2a0dfc:
    // 0x2a0dfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a0e00:
    // 0x2a0e00: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2a0e00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e04:
    // 0x2a0e04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a0e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e08:
    // 0x2a0e08: 0x40f809  jalr        $v0
label_2a0e0c:
    if (ctx->pc == 0x2A0E0Cu) {
        ctx->pc = 0x2A0E0Cu;
            // 0x2a0e0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E10u;
        goto label_2a0e10;
    }
    ctx->pc = 0x2A0E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0E10u);
        ctx->pc = 0x2A0E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E08u;
            // 0x2a0e0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A0E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E10u; }
            if (ctx->pc != 0x2A0E10u) { return; }
        }
        }
    }
    ctx->pc = 0x2A0E10u;
label_2a0e10:
    // 0x2a0e10: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_2a0e14:
    if (ctx->pc == 0x2A0E14u) {
        ctx->pc = 0x2A0E14u;
            // 0x2a0e14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E18u;
        goto label_2a0e18;
    }
    ctx->pc = 0x2A0E10u;
    {
        const bool branch_taken_0x2a0e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E10u;
            // 0x2a0e14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e10) {
            ctx->pc = 0x2A0EA8u;
            goto label_2a0ea8;
        }
    }
    ctx->pc = 0x2A0E18u;
label_2a0e18:
    // 0x2a0e18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a0e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e1c:
    // 0x2a0e1c: 0xc0a1b8c  jal         func_286E30
label_2a0e20:
    if (ctx->pc == 0x2A0E20u) {
        ctx->pc = 0x2A0E20u;
            // 0x2a0e20: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E24u;
        goto label_2a0e24;
    }
    ctx->pc = 0x2A0E1Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E24u);
    ctx->pc = 0x2A0E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E1Cu;
            // 0x2a0e20: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E24u; }
        if (ctx->pc != 0x2A0E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E24u; }
        if (ctx->pc != 0x2A0E24u) { return; }
    }
    ctx->pc = 0x2A0E24u;
label_2a0e24:
    // 0x2a0e24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a0e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e28:
    // 0x2a0e28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e2c:
    // 0x2a0e2c: 0xc0a83bc  jal         func_2A0EF0
label_2a0e30:
    if (ctx->pc == 0x2A0E30u) {
        ctx->pc = 0x2A0E30u;
            // 0x2a0e30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E34u;
        goto label_2a0e34;
    }
    ctx->pc = 0x2A0E2Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E34u);
    ctx->pc = 0x2A0E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E2Cu;
            // 0x2a0e30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EF0u;
    if (runtime->hasFunction(0x2A0EF0u)) {
        auto targetFn = runtime->lookupFunction(0x2A0EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E34u; }
        if (ctx->pc != 0x2A0E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A0EF0_0x2a0ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E34u; }
        if (ctx->pc != 0x2A0E34u) { return; }
    }
    ctx->pc = 0x2A0E34u;
label_2a0e34:
    // 0x2a0e34: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2a0e38:
    if (ctx->pc == 0x2A0E38u) {
        ctx->pc = 0x2A0E3Cu;
        goto label_2a0e3c;
    }
    ctx->pc = 0x2A0E34u;
    {
        const bool branch_taken_0x2a0e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e34) {
            ctx->pc = 0x2A0EA8u;
            goto label_2a0ea8;
        }
    }
    ctx->pc = 0x2A0E3Cu;
label_2a0e3c:
    // 0x2a0e3c: 0xc0a1a02  jal         func_286808
label_2a0e40:
    if (ctx->pc == 0x2A0E40u) {
        ctx->pc = 0x2A0E40u;
            // 0x2a0e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E44u;
        goto label_2a0e44;
    }
    ctx->pc = 0x2A0E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E44u);
    ctx->pc = 0x2A0E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E3Cu;
            // 0x2a0e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286808u;
    if (runtime->hasFunction(0x286808u)) {
        auto targetFn = runtime->lookupFunction(0x286808u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E44u; }
        if (ctx->pc != 0x2A0E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286808_0x286808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E44u; }
        if (ctx->pc != 0x2A0E44u) { return; }
    }
    ctx->pc = 0x2A0E44u;
label_2a0e44:
    // 0x2a0e44: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x2a0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_2a0e48:
    // 0x2a0e48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2a0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a0e4c:
    // 0x2a0e4c: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2a0e4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a0e50:
    // 0x2a0e50: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2a0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2a0e54:
    // 0x2a0e54: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2a0e54u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2a0e58:
    // 0x2a0e58: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x2a0e58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_2a0e5c:
    // 0x2a0e5c: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x2a0e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2a0e60:
    // 0x2a0e60: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_2a0e64:
    if (ctx->pc == 0x2A0E64u) {
        ctx->pc = 0x2A0E64u;
            // 0x2a0e64: 0x2042823  subu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->pc = 0x2A0E68u;
        goto label_2a0e68;
    }
    ctx->pc = 0x2A0E60u;
    {
        const bool branch_taken_0x2a0e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E60u;
            // 0x2a0e64: 0x2042823  subu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e60) {
            ctx->pc = 0x2A0EA8u;
            goto label_2a0ea8;
        }
    }
    ctx->pc = 0x2A0E68u;
label_2a0e68:
    // 0x2a0e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a0e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a0e6c:
    // 0x2a0e6c: 0xc0a1bdc  jal         func_286F70
label_2a0e70:
    if (ctx->pc == 0x2A0E70u) {
        ctx->pc = 0x2A0E70u;
            // 0x2a0e70: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->pc = 0x2A0E74u;
        goto label_2a0e74;
    }
    ctx->pc = 0x2A0E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E74u);
    ctx->pc = 0x2A0E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E6Cu;
            // 0x2a0e70: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286F70u;
    if (runtime->hasFunction(0x286F70u)) {
        auto targetFn = runtime->lookupFunction(0x286F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E74u; }
        if (ctx->pc != 0x2A0E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286F70_0x286f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0E74u; }
        if (ctx->pc != 0x2A0E74u) { return; }
    }
    ctx->pc = 0x2A0E74u;
label_2a0e74:
    // 0x2a0e74: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2a0e78:
    // 0x2a0e78: 0x18a00008  blez        $a1, . + 4 + (0x8 << 2)
label_2a0e7c:
    if (ctx->pc == 0x2A0E7Cu) {
        ctx->pc = 0x2A0E7Cu;
            // 0x2a0e7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0E80u;
        goto label_2a0e80;
    }
    ctx->pc = 0x2A0E78u;
    {
        const bool branch_taken_0x2a0e78 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2A0E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0E78u;
            // 0x2a0e7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0e78) {
            ctx->pc = 0x2A0E9Cu;
            goto label_2a0e9c;
        }
    }
    ctx->pc = 0x2A0E80u;
label_2a0e80:
    // 0x2a0e80: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x2a0e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2a0e84:
    // 0x2a0e84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2a0e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2a0e88:
    // 0x2a0e88: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2a0e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2a0e8c:
    // 0x2a0e8c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2a0e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2a0e90:
    // 0x2a0e90: 0x0  nop
    ctx->pc = 0x2a0e90u;
    // NOP
label_2a0e94:
    // 0x2a0e94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_2a0e98:
    if (ctx->pc == 0x2A0E98u) {
        ctx->pc = 0x2A0E9Cu;
        goto label_2a0e9c;
    }
    ctx->pc = 0x2A0E94u;
    {
        const bool branch_taken_0x2a0e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a0e94) {
            ctx->pc = 0x2A0E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a0e80;
        }
    }
    ctx->pc = 0x2A0E9Cu;
label_2a0e9c:
    // 0x2a0e9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2a0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2a0ea0:
    // 0x2a0ea0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2a0ea0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ea4:
    // 0x2a0ea4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2a0ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2a0ea8:
    // 0x2a0ea8: 0xc0a1a36  jal         func_2868D8
label_2a0eac:
    if (ctx->pc == 0x2A0EACu) {
        ctx->pc = 0x2A0EACu;
            // 0x2a0eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EB0u;
        goto label_2a0eb0;
    }
    ctx->pc = 0x2A0EA8u;
    SET_GPR_U32(ctx, 31, 0x2A0EB0u);
    ctx->pc = 0x2A0EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EA8u;
            // 0x2a0eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EB0u; }
        if (ctx->pc != 0x2A0EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EB0u; }
        if (ctx->pc != 0x2A0EB0u) { return; }
    }
    ctx->pc = 0x2A0EB0u;
label_2a0eb0:
    // 0x2a0eb0: 0xc0a1a36  jal         func_2868D8
label_2a0eb4:
    if (ctx->pc == 0x2A0EB4u) {
        ctx->pc = 0x2A0EB4u;
            // 0x2a0eb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A0EB8u;
        goto label_2a0eb8;
    }
    ctx->pc = 0x2A0EB0u;
    SET_GPR_U32(ctx, 31, 0x2A0EB8u);
    ctx->pc = 0x2A0EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EB0u;
            // 0x2a0eb4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EB8u; }
        if (ctx->pc != 0x2A0EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0EB8u; }
        if (ctx->pc != 0x2A0EB8u) { return; }
    }
    ctx->pc = 0x2A0EB8u;
label_2a0eb8:
    // 0x2a0eb8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2a0eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a0ebc:
    // 0x2a0ebc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2a0ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2a0ec0:
    // 0x2a0ec0: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2a0ec0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2a0ec4:
    // 0x2a0ec4: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2a0ec4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2a0ec8:
    // 0x2a0ec8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2a0ec8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2a0ecc:
    // 0x2a0ecc: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2a0eccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a0ed0:
    // 0x2a0ed0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2a0ed0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a0ed4:
    // 0x2a0ed4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2a0ed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a0ed8:
    // 0x2a0ed8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2a0ed8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a0edc:
    // 0x2a0edc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2a0edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a0ee0:
    // 0x2a0ee0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2a0ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a0ee4:
    // 0x2a0ee4: 0x3e00008  jr          $ra
label_2a0ee8:
    if (ctx->pc == 0x2A0EE8u) {
        ctx->pc = 0x2A0EE8u;
            // 0x2a0ee8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2A0EECu;
        goto label_2a0eec;
    }
    ctx->pc = 0x2A0EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A0EE4u;
            // 0x2a0ee8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A0EECu;
label_2a0eec:
    // 0x2a0eec: 0x0  nop
    ctx->pc = 0x2a0eecu;
    // NOP
    ctx->pc = 0x2a0ef0u;
}
