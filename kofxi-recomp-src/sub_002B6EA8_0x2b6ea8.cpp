#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6EA8
// Address: 0x2b6ea8 - 0x2b7028
void sub_002B6EA8_0x2b6ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6EA8_0x2b6ea8");
#endif

    switch (ctx->pc) {
        case 0x2b6ea8u: goto label_2b6ea8;
        case 0x2b6eacu: goto label_2b6eac;
        case 0x2b6eb0u: goto label_2b6eb0;
        case 0x2b6eb4u: goto label_2b6eb4;
        case 0x2b6eb8u: goto label_2b6eb8;
        case 0x2b6ebcu: goto label_2b6ebc;
        case 0x2b6ec0u: goto label_2b6ec0;
        case 0x2b6ec4u: goto label_2b6ec4;
        case 0x2b6ec8u: goto label_2b6ec8;
        case 0x2b6eccu: goto label_2b6ecc;
        case 0x2b6ed0u: goto label_2b6ed0;
        case 0x2b6ed4u: goto label_2b6ed4;
        case 0x2b6ed8u: goto label_2b6ed8;
        case 0x2b6edcu: goto label_2b6edc;
        case 0x2b6ee0u: goto label_2b6ee0;
        case 0x2b6ee4u: goto label_2b6ee4;
        case 0x2b6ee8u: goto label_2b6ee8;
        case 0x2b6eecu: goto label_2b6eec;
        case 0x2b6ef0u: goto label_2b6ef0;
        case 0x2b6ef4u: goto label_2b6ef4;
        case 0x2b6ef8u: goto label_2b6ef8;
        case 0x2b6efcu: goto label_2b6efc;
        case 0x2b6f00u: goto label_2b6f00;
        case 0x2b6f04u: goto label_2b6f04;
        case 0x2b6f08u: goto label_2b6f08;
        case 0x2b6f0cu: goto label_2b6f0c;
        case 0x2b6f10u: goto label_2b6f10;
        case 0x2b6f14u: goto label_2b6f14;
        case 0x2b6f18u: goto label_2b6f18;
        case 0x2b6f1cu: goto label_2b6f1c;
        case 0x2b6f20u: goto label_2b6f20;
        case 0x2b6f24u: goto label_2b6f24;
        case 0x2b6f28u: goto label_2b6f28;
        case 0x2b6f2cu: goto label_2b6f2c;
        case 0x2b6f30u: goto label_2b6f30;
        case 0x2b6f34u: goto label_2b6f34;
        case 0x2b6f38u: goto label_2b6f38;
        case 0x2b6f3cu: goto label_2b6f3c;
        case 0x2b6f40u: goto label_2b6f40;
        case 0x2b6f44u: goto label_2b6f44;
        case 0x2b6f48u: goto label_2b6f48;
        case 0x2b6f4cu: goto label_2b6f4c;
        case 0x2b6f50u: goto label_2b6f50;
        case 0x2b6f54u: goto label_2b6f54;
        case 0x2b6f58u: goto label_2b6f58;
        case 0x2b6f5cu: goto label_2b6f5c;
        case 0x2b6f60u: goto label_2b6f60;
        case 0x2b6f64u: goto label_2b6f64;
        case 0x2b6f68u: goto label_2b6f68;
        case 0x2b6f6cu: goto label_2b6f6c;
        case 0x2b6f70u: goto label_2b6f70;
        case 0x2b6f74u: goto label_2b6f74;
        case 0x2b6f78u: goto label_2b6f78;
        case 0x2b6f7cu: goto label_2b6f7c;
        case 0x2b6f80u: goto label_2b6f80;
        case 0x2b6f84u: goto label_2b6f84;
        case 0x2b6f88u: goto label_2b6f88;
        case 0x2b6f8cu: goto label_2b6f8c;
        case 0x2b6f90u: goto label_2b6f90;
        case 0x2b6f94u: goto label_2b6f94;
        case 0x2b6f98u: goto label_2b6f98;
        case 0x2b6f9cu: goto label_2b6f9c;
        case 0x2b6fa0u: goto label_2b6fa0;
        case 0x2b6fa4u: goto label_2b6fa4;
        case 0x2b6fa8u: goto label_2b6fa8;
        case 0x2b6facu: goto label_2b6fac;
        case 0x2b6fb0u: goto label_2b6fb0;
        case 0x2b6fb4u: goto label_2b6fb4;
        case 0x2b6fb8u: goto label_2b6fb8;
        case 0x2b6fbcu: goto label_2b6fbc;
        case 0x2b6fc0u: goto label_2b6fc0;
        case 0x2b6fc4u: goto label_2b6fc4;
        case 0x2b6fc8u: goto label_2b6fc8;
        case 0x2b6fccu: goto label_2b6fcc;
        case 0x2b6fd0u: goto label_2b6fd0;
        case 0x2b6fd4u: goto label_2b6fd4;
        case 0x2b6fd8u: goto label_2b6fd8;
        case 0x2b6fdcu: goto label_2b6fdc;
        case 0x2b6fe0u: goto label_2b6fe0;
        case 0x2b6fe4u: goto label_2b6fe4;
        case 0x2b6fe8u: goto label_2b6fe8;
        case 0x2b6fecu: goto label_2b6fec;
        case 0x2b6ff0u: goto label_2b6ff0;
        case 0x2b6ff4u: goto label_2b6ff4;
        case 0x2b6ff8u: goto label_2b6ff8;
        case 0x2b6ffcu: goto label_2b6ffc;
        case 0x2b7000u: goto label_2b7000;
        case 0x2b7004u: goto label_2b7004;
        case 0x2b7008u: goto label_2b7008;
        case 0x2b700cu: goto label_2b700c;
        case 0x2b7010u: goto label_2b7010;
        case 0x2b7014u: goto label_2b7014;
        case 0x2b7018u: goto label_2b7018;
        case 0x2b701cu: goto label_2b701c;
        case 0x2b7020u: goto label_2b7020;
        case 0x2b7024u: goto label_2b7024;
        default: break;
    }

    ctx->pc = 0x2b6ea8u;

label_2b6ea8:
    // 0x2b6ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b6ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b6eac:
    // 0x2b6eac: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2b6eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2b6eb0:
    // 0x2b6eb0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b6eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b6eb4:
    // 0x2b6eb4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2b6eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b6eb8:
    // 0x2b6eb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b6eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b6ebc:
    // 0x2b6ebc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b6ec0:
    // 0x2b6ec0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b6ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6ec4:
    // 0x2b6ec4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b6ec8:
    // 0x2b6ec8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6ecc:
    // 0x2b6ecc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b6eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b6ed0:
    // 0x2b6ed0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6ed4:
    // 0x2b6ed4: 0xac40010c  sw          $zero, 0x10C($v0)
    ctx->pc = 0x2b6ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 0));
label_2b6ed8:
    // 0x2b6ed8: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x2b6ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6edc:
    // 0x2b6edc: 0xc0ad884  jal         func_2B6210
label_2b6ee0:
    if (ctx->pc == 0x2B6EE0u) {
        ctx->pc = 0x2B6EE0u;
            // 0x2b6ee0: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->pc = 0x2B6EE4u;
        goto label_2b6ee4;
    }
    ctx->pc = 0x2B6EDCu;
    SET_GPR_U32(ctx, 31, 0x2B6EE4u);
    ctx->pc = 0x2B6EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EDCu;
            // 0x2b6ee0: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6210u;
    if (runtime->hasFunction(0x2B6210u)) {
        auto targetFn = runtime->lookupFunction(0x2B6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EE4u; }
        if (ctx->pc != 0x2B6EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6210_0x2b6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EE4u; }
        if (ctx->pc != 0x2B6EE4u) { return; }
    }
    ctx->pc = 0x2B6EE4u;
label_2b6ee4:
    // 0x2b6ee4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b6ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6ee8:
    // 0x2b6ee8: 0x1e600004  bgtz        $s3, . + 4 + (0x4 << 2)
label_2b6eec:
    if (ctx->pc == 0x2B6EECu) {
        ctx->pc = 0x2B6EECu;
            // 0x2b6eec: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x2B6EF0u;
        goto label_2b6ef0;
    }
    ctx->pc = 0x2B6EE8u;
    {
        const bool branch_taken_0x2b6ee8 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2B6EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EE8u;
            // 0x2b6eec: 0x8e030054  lw          $v1, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ee8) {
            ctx->pc = 0x2B6EFCu;
            goto label_2b6efc;
        }
    }
    ctx->pc = 0x2B6EF0u;
label_2b6ef0:
    // 0x2b6ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6ef4:
    // 0x2b6ef4: 0x10000043  b           . + 4 + (0x43 << 2)
label_2b6ef8:
    if (ctx->pc == 0x2B6EF8u) {
        ctx->pc = 0x2B6EF8u;
            // 0x2b6ef8: 0xac62010c  sw          $v0, 0x10C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x2B6EFCu;
        goto label_2b6efc;
    }
    ctx->pc = 0x2B6EF4u;
    {
        const bool branch_taken_0x2b6ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EF4u;
            // 0x2b6ef8: 0xac62010c  sw          $v0, 0x10C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ef4) {
            ctx->pc = 0x2B7004u;
            goto label_2b7004;
        }
    }
    ctx->pc = 0x2B6EFCu;
label_2b6efc:
    // 0x2b6efc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2b6efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b6f00:
    // 0x2b6f00: 0x80620110  lb          $v0, 0x110($v1)
    ctx->pc = 0x2b6f00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 272)));
label_2b6f04:
    // 0x2b6f04: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
label_2b6f08:
    if (ctx->pc == 0x2B6F08u) {
        ctx->pc = 0x2B6F08u;
            // 0x2b6f08: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x2B6F0Cu;
        goto label_2b6f0c;
    }
    ctx->pc = 0x2B6F04u;
    {
        const bool branch_taken_0x2b6f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b6f04) {
            ctx->pc = 0x2B6F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F04u;
            // 0x2b6f08: 0x8e0200e0  lw          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F24u;
            goto label_2b6f24;
        }
    }
    ctx->pc = 0x2B6F0Cu;
label_2b6f0c:
    // 0x2b6f0c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b6f10:
    // 0x2b6f10: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2b6f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2b6f14:
    // 0x2b6f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f18:
    // 0x2b6f18: 0xc0a1558  jal         func_285560
label_2b6f1c:
    if (ctx->pc == 0x2B6F1Cu) {
        ctx->pc = 0x2B6F1Cu;
            // 0x2b6f1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F20u;
        goto label_2b6f20;
    }
    ctx->pc = 0x2B6F18u;
    SET_GPR_U32(ctx, 31, 0x2B6F20u);
    ctx->pc = 0x2B6F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F18u;
            // 0x2b6f1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F20u; }
        if (ctx->pc != 0x2B6F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F20u; }
        if (ctx->pc != 0x2B6F20u) { return; }
    }
    ctx->pc = 0x2B6F20u;
label_2b6f20:
    // 0x2b6f20: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x2b6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_2b6f24:
    // 0x2b6f24: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2b6f28:
    if (ctx->pc == 0x2B6F28u) {
        ctx->pc = 0x2B6F28u;
            // 0x2b6f28: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2B6F2Cu;
        goto label_2b6f2c;
    }
    ctx->pc = 0x2B6F24u;
    {
        const bool branch_taken_0x2b6f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F24u;
            // 0x2b6f28: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f24) {
            ctx->pc = 0x2B6F74u;
            goto label_2b6f74;
        }
    }
    ctx->pc = 0x2B6F2Cu;
label_2b6f2c:
    // 0x2b6f2c: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x2b6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
label_2b6f30:
    // 0x2b6f30: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2b6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b6f34:
    // 0x2b6f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f38:
    // 0x2b6f38: 0xc0a1558  jal         func_285560
label_2b6f3c:
    if (ctx->pc == 0x2B6F3Cu) {
        ctx->pc = 0x2B6F3Cu;
            // 0x2b6f3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F40u;
        goto label_2b6f40;
    }
    ctx->pc = 0x2B6F38u;
    SET_GPR_U32(ctx, 31, 0x2B6F40u);
    ctx->pc = 0x2B6F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F38u;
            // 0x2b6f3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F40u; }
        if (ctx->pc != 0x2B6F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F40u; }
        if (ctx->pc != 0x2B6F40u) { return; }
    }
    ctx->pc = 0x2B6F40u;
label_2b6f40:
    // 0x2b6f40: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2b6f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2b6f44:
    // 0x2b6f44: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2b6f44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2b6f48:
    // 0x2b6f48: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_2b6f4c:
    if (ctx->pc == 0x2B6F4Cu) {
        ctx->pc = 0x2B6F4Cu;
            // 0x2b6f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6F50u;
        goto label_2b6f50;
    }
    ctx->pc = 0x2B6F48u;
    {
        const bool branch_taken_0x2b6f48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B6F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F48u;
            // 0x2b6f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f48) {
            ctx->pc = 0x2B6F70u;
            goto label_2b6f70;
        }
    }
    ctx->pc = 0x2B6F50u;
label_2b6f50:
    // 0x2b6f50: 0xc0a13ba  jal         func_284EE8
label_2b6f54:
    if (ctx->pc == 0x2B6F54u) {
        ctx->pc = 0x2B6F54u;
            // 0x2b6f54: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x2B6F58u;
        goto label_2b6f58;
    }
    ctx->pc = 0x2B6F50u;
    SET_GPR_U32(ctx, 31, 0x2B6F58u);
    ctx->pc = 0x2B6F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F50u;
            // 0x2b6f54: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE8u;
    if (runtime->hasFunction(0x284EE8u)) {
        auto targetFn = runtime->lookupFunction(0x284EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F58u; }
        if (ctx->pc != 0x2B6F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE8_0x284ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6F58u; }
        if (ctx->pc != 0x2B6F58u) { return; }
    }
    ctx->pc = 0x2B6F58u;
label_2b6f58:
    // 0x2b6f58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b6f5c:
    if (ctx->pc == 0x2B6F5Cu) {
        ctx->pc = 0x2B6F5Cu;
            // 0x2b6f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B6F60u;
        goto label_2b6f60;
    }
    ctx->pc = 0x2B6F58u;
    {
        const bool branch_taken_0x2b6f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F58u;
            // 0x2b6f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f58) {
            ctx->pc = 0x2B6F68u;
            goto label_2b6f68;
        }
    }
    ctx->pc = 0x2B6F60u;
label_2b6f60:
    // 0x2b6f60: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2b6f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6f64:
    // 0x2b6f64: 0xac62010c  sw          $v0, 0x10C($v1)
    ctx->pc = 0x2b6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 268), GPR_U32(ctx, 2));
label_2b6f68:
    // 0x2b6f68: 0x10000027  b           . + 4 + (0x27 << 2)
label_2b6f6c:
    if (ctx->pc == 0x2B6F6Cu) {
        ctx->pc = 0x2B6F6Cu;
            // 0x2b6f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B6F70u;
        goto label_2b6f70;
    }
    ctx->pc = 0x2B6F68u;
    {
        const bool branch_taken_0x2b6f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F68u;
            // 0x2b6f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f68) {
            ctx->pc = 0x2B7008u;
            goto label_2b7008;
        }
    }
    ctx->pc = 0x2B6F70u;
label_2b6f70:
    // 0x2b6f70: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2b6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_2b6f74:
    // 0x2b6f74: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2b6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_2b6f78:
    // 0x2b6f78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b6f7c:
    if (ctx->pc == 0x2B6F7Cu) {
        ctx->pc = 0x2B6F7Cu;
            // 0x2b6f7c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F80u;
        goto label_2b6f80;
    }
    ctx->pc = 0x2B6F78u;
    {
        const bool branch_taken_0x2b6f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F78u;
            // 0x2b6f7c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f78) {
            ctx->pc = 0x2B6F88u;
            goto label_2b6f88;
        }
    }
    ctx->pc = 0x2B6F80u;
label_2b6f80:
    // 0x2b6f80: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2b6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b6f84:
    // 0x2b6f84: 0x8c48007c  lw          $t0, 0x7C($v0)
    ctx->pc = 0x2b6f84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2b6f88:
    // 0x2b6f88: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_2b6f8c:
    if (ctx->pc == 0x2B6F8Cu) {
        ctx->pc = 0x2B6F8Cu;
            // 0x2b6f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F90u;
        goto label_2b6f90;
    }
    ctx->pc = 0x2B6F88u;
    {
        const bool branch_taken_0x2b6f88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6F88u;
            // 0x2b6f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f88) {
            ctx->pc = 0x2B6FACu;
            goto label_2b6fac;
        }
    }
    ctx->pc = 0x2B6F90u;
label_2b6f90:
    // 0x2b6f90: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6f94:
    // 0x2b6f94: 0x24054008  addiu       $a1, $zero, 0x4008
    ctx->pc = 0x2b6f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
label_2b6f98:
    // 0x2b6f98: 0x80460110  lb          $a2, 0x110($v0)
    ctx->pc = 0x2b6f98u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 272)));
label_2b6f9c:
    // 0x2b6f9c: 0x80430111  lb          $v1, 0x111($v0)
    ctx->pc = 0x2b6f9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 273)));
label_2b6fa0:
    // 0x2b6fa0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2b6fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2b6fa4:
    // 0x2b6fa4: 0x100f809  jalr        $t0
label_2b6fa8:
    if (ctx->pc == 0x2B6FA8u) {
        ctx->pc = 0x2B6FA8u;
            // 0x2b6fa8: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->pc = 0x2B6FACu;
        goto label_2b6fac;
    }
    ctx->pc = 0x2B6FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x2B6FACu);
        ctx->pc = 0x2B6FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FA4u;
            // 0x2b6fa8: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B6FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FACu; }
            if (ctx->pc != 0x2B6FACu) { return; }
        }
        }
    }
    ctx->pc = 0x2B6FACu;
label_2b6fac:
    // 0x2b6fac: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x2b6facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_2b6fb0:
    // 0x2b6fb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b6fb4:
    if (ctx->pc == 0x2B6FB4u) {
        ctx->pc = 0x2B6FB4u;
            // 0x2b6fb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FB8u;
        goto label_2b6fb8;
    }
    ctx->pc = 0x2B6FB0u;
    {
        const bool branch_taken_0x2b6fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FB0u;
            // 0x2b6fb4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fb0) {
            ctx->pc = 0x2B6FC4u;
            goto label_2b6fc4;
        }
    }
    ctx->pc = 0x2B6FB8u;
label_2b6fb8:
    // 0x2b6fb8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b6fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6fbc:
    // 0x2b6fbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b6fc0:
    if (ctx->pc == 0x2B6FC0u) {
        ctx->pc = 0x2B6FC0u;
            // 0x2b6fc0: 0x8e1200c8  lw          $s2, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->pc = 0x2B6FC4u;
        goto label_2b6fc4;
    }
    ctx->pc = 0x2B6FBCu;
    {
        const bool branch_taken_0x2b6fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FBCu;
            // 0x2b6fc0: 0x8e1200c8  lw          $s2, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fbc) {
            ctx->pc = 0x2B6FDCu;
            goto label_2b6fdc;
        }
    }
    ctx->pc = 0x2B6FC4u;
label_2b6fc4:
    // 0x2b6fc4: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x2b6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_2b6fc8:
    // 0x2b6fc8: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2b6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_2b6fcc:
    // 0x2b6fcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b6fd0:
    if (ctx->pc == 0x2B6FD0u) {
        ctx->pc = 0x2B6FD4u;
        goto label_2b6fd4;
    }
    ctx->pc = 0x2B6FCCu;
    {
        const bool branch_taken_0x2b6fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6fcc) {
            ctx->pc = 0x2B6FDCu;
            goto label_2b6fdc;
        }
    }
    ctx->pc = 0x2B6FD4u;
label_2b6fd4:
    // 0x2b6fd4: 0x8c520084  lw          $s2, 0x84($v0)
    ctx->pc = 0x2b6fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2b6fd8:
    // 0x2b6fd8: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2b6fd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b6fdc:
    // 0x2b6fdc: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_2b6fe0:
    if (ctx->pc == 0x2B6FE0u) {
        ctx->pc = 0x2B6FE0u;
            // 0x2b6fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FE4u;
        goto label_2b6fe4;
    }
    ctx->pc = 0x2B6FDCu;
    {
        const bool branch_taken_0x2b6fdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FDCu;
            // 0x2b6fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fdc) {
            ctx->pc = 0x2B7004u;
            goto label_2b7004;
        }
    }
    ctx->pc = 0x2B6FE4u;
label_2b6fe4:
    // 0x2b6fe4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2b6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2b6fe8:
    // 0x2b6fe8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b6fe8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6fec:
    // 0x2b6fec: 0x24054008  addiu       $a1, $zero, 0x4008
    ctx->pc = 0x2b6fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
label_2b6ff0:
    // 0x2b6ff0: 0x80460110  lb          $a2, 0x110($v0)
    ctx->pc = 0x2b6ff0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 272)));
label_2b6ff4:
    // 0x2b6ff4: 0x80430111  lb          $v1, 0x111($v0)
    ctx->pc = 0x2b6ff4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 273)));
label_2b6ff8:
    // 0x2b6ff8: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x2b6ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_2b6ffc:
    // 0x2b6ffc: 0x100f809  jalr        $t0
label_2b7000:
    if (ctx->pc == 0x2B7000u) {
        ctx->pc = 0x2B7000u;
            // 0x2b7000: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->pc = 0x2B7004u;
        goto label_2b7004;
    }
    ctx->pc = 0x2B6FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x2B7004u);
        ctx->pc = 0x2B7000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6FFCu;
            // 0x2b7000: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B7004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B7004u; }
            if (ctx->pc != 0x2B7004u) { return; }
        }
        }
    }
    ctx->pc = 0x2B7004u;
label_2b7004:
    // 0x2b7004: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2b7004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b7008:
    // 0x2b7008: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b7008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b700c:
    // 0x2b700c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b700cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b7010:
    // 0x2b7010: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b7010u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b7014:
    // 0x2b7014: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b7014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b7018:
    // 0x2b7018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b701c:
    // 0x2b701c: 0x3e00008  jr          $ra
label_2b7020:
    if (ctx->pc == 0x2B7020u) {
        ctx->pc = 0x2B7020u;
            // 0x2b7020: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2B7024u;
        goto label_2b7024;
    }
    ctx->pc = 0x2B701Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B701Cu;
            // 0x2b7020: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B7024u;
label_2b7024:
    // 0x2b7024: 0x0  nop
    ctx->pc = 0x2b7024u;
    // NOP
    ctx->pc = 0x2b7028u;
}
