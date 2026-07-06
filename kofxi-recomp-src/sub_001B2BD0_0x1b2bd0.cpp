#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2BD0
// Address: 0x1b2bd0 - 0x1b30e0
void sub_001B2BD0_0x1b2bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2BD0_0x1b2bd0");
#endif

    switch (ctx->pc) {
        case 0x1b2be8u: goto label_1b2be8;
        case 0x1b2c10u: goto label_1b2c10;
        case 0x1b2c18u: goto label_1b2c18;
        case 0x1b2c40u: goto label_1b2c40;
        case 0x1b2c88u: goto label_1b2c88;
        case 0x1b2c9cu: goto label_1b2c9c;
        case 0x1b2ca4u: goto label_1b2ca4;
        case 0x1b2cd8u: goto label_1b2cd8;
        case 0x1b2d40u: goto label_1b2d40;
        case 0x1b2d54u: goto label_1b2d54;
        case 0x1b2d68u: goto label_1b2d68;
        case 0x1b2d74u: goto label_1b2d74;
        case 0x1b2d84u: goto label_1b2d84;
        case 0x1b2d8cu: goto label_1b2d8c;
        case 0x1b2d94u: goto label_1b2d94;
        case 0x1b2d9cu: goto label_1b2d9c;
        case 0x1b2de0u: goto label_1b2de0;
        case 0x1b2e40u: goto label_1b2e40;
        case 0x1b2e68u: goto label_1b2e68;
        case 0x1b2e90u: goto label_1b2e90;
        case 0x1b2ed0u: goto label_1b2ed0;
        case 0x1b2f38u: goto label_1b2f38;
        case 0x1b2f4cu: goto label_1b2f4c;
        case 0x1b2f68u: goto label_1b2f68;
        case 0x1b2f78u: goto label_1b2f78;
        case 0x1b2f8cu: goto label_1b2f8c;
        case 0x1b2fa0u: goto label_1b2fa0;
        case 0x1b2fb8u: goto label_1b2fb8;
        case 0x1b2fc4u: goto label_1b2fc4;
        case 0x1b3008u: goto label_1b3008;
        case 0x1b3060u: goto label_1b3060;
        case 0x1b3074u: goto label_1b3074;
        case 0x1b3090u: goto label_1b3090;
        case 0x1b30a0u: goto label_1b30a0;
        default: break;
    }

    ctx->pc = 0x1b2bd0u;

label_1b2bd0:
    // 0x1b2bd0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2bd4: 0x24633050  addiu       $v1, $v1, 0x3050
    ctx->pc = 0x1b2bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12368));
    // 0x1b2bd8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1b2bd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b2bdc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2bdcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2BE0u;
            // 0x1b2be4: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2BE8u;
label_1b2be8:
    // 0x1b2be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2bec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2bf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2bf4: 0x244230a8  addiu       $v0, $v0, 0x30A8
    ctx->pc = 0x1b2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12456));
    // 0x1b2bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2bfc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1b2bfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2c00: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B2C00u;
    {
        const bool branch_taken_0x1b2c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c00) {
            ctx->pc = 0x1B2C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C00u;
            // 0x1b2c04: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C24u;
            goto label_1b2c24;
        }
    }
    ctx->pc = 0x1B2C08u;
    // 0x1b2c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c0c: 0x0  nop
    ctx->pc = 0x1b2c0cu;
    // NOP
label_1b2c10:
    // 0x1b2c10: 0xc06caf4  jal         func_1B2BD0
    ctx->pc = 0x1B2C10u;
    SET_GPR_U32(ctx, 31, 0x1B2C18u);
    ctx->pc = 0x1B2BD0u;
    goto label_1b2bd0;
    ctx->pc = 0x1B2C18u;
label_1b2c18:
    // 0x1b2c18: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b2c18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2c1c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1B2C1Cu;
    {
        const bool branch_taken_0x1b2c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C1Cu;
            // 0x1b2c20: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c1c) {
            ctx->pc = 0x1B2C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2c10;
        }
    }
    ctx->pc = 0x1B2C24u;
label_1b2c24:
    // 0x1b2c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2c28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2c2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2c30: 0x244230b0  addiu       $v0, $v0, 0x30B0
    ctx->pc = 0x1b2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12464));
    // 0x1b2c34: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2c34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b2c38: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B2C38u;
    ctx->pc = 0x1B2C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C38u;
            // 0x1b2c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2C40u;
label_1b2c40:
    // 0x1b2c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2c44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2c4c: 0x244430b8  addiu       $a0, $v0, 0x30B8
    ctx->pc = 0x1b2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12472));
    // 0x1b2c50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2c54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2c58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2c5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2c60: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1b2c60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2c64: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2C64u;
    {
        const bool branch_taken_0x1b2c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C64u;
            // 0x1b2c68: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c64) {
            ctx->pc = 0x1B2CB0u;
            goto label_1b2cb0;
        }
    }
    ctx->pc = 0x1B2C6Cu;
    // 0x1b2c6c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2c70: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2c74: 0x24513058  addiu       $s1, $v0, 0x3058
    ctx->pc = 0x1b2c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12376));
    // 0x1b2c78: 0x2470303c  addiu       $s0, $v1, 0x303C
    ctx->pc = 0x1b2c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12348));
    // 0x1b2c7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b2c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2c80: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b2c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2c84: 0x0  nop
    ctx->pc = 0x1b2c84u;
    // NOP
label_1b2c88:
    // 0x1b2c88: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x1b2c88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2c8c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2c8cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2c90: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1b2c90u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1b2c94: 0xc073974  jal         func_1CE5D0
    ctx->pc = 0x1B2C94u;
    SET_GPR_U32(ctx, 31, 0x1B2C9Cu);
    ctx->pc = 0x1CE5D0u;
    if (runtime->hasFunction(0x1CE5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C9Cu; }
        if (ctx->pc != 0x1B2C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5D0_0x1ce5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2C9Cu; }
        if (ctx->pc != 0x1B2C9Cu) { return; }
    }
    ctx->pc = 0x1B2C9Cu;
label_1b2c9c:
    // 0x1b2c9c: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B2CA4u);
    ctx->pc = 0x1B2CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2C9Cu;
            // 0x1b2ca0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    if (runtime->hasFunction(0x1B3180u)) {
        auto targetFn = runtime->lookupFunction(0x1B3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CA4u; }
        if (ctx->pc != 0x1B2CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CA4u; }
        if (ctx->pc != 0x1B2CA4u) { return; }
    }
    ctx->pc = 0x1B2CA4u;
label_1b2ca4:
    // 0x1b2ca4: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b2ca4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2ca8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2CA8u;
    {
        const bool branch_taken_0x1b2ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CA8u;
            // 0x1b2cac: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ca8) {
            ctx->pc = 0x1B2C88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2c88;
        }
    }
    ctx->pc = 0x1B2CB0u;
label_1b2cb0:
    // 0x1b2cb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2cb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2cb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2cbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2cc0: 0x244230c0  addiu       $v0, $v0, 0x30C0
    ctx->pc = 0x1b2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12480));
    // 0x1b2cc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2ccc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2cccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b2cd0: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B2CD0u;
    ctx->pc = 0x1B2CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CD0u;
            // 0x1b2cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2CD8u;
label_1b2cd8:
    // 0x1b2cd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2cdc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2ce0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2ce4: 0x244730c8  addiu       $a3, $v0, 0x30C8
    ctx->pc = 0x1b2ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12488));
    // 0x1b2ce8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2cec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2cf0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2cf4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2cf8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2cfc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b2cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b2d00: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b2d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b2d04: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1b2d04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b2d08: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B2D08u;
    {
        const bool branch_taken_0x1b2d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D08u;
            // 0x1b2d0c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d08) {
            ctx->pc = 0x1B2DA8u;
            goto label_1b2da8;
        }
    }
    ctx->pc = 0x1B2D10u;
    // 0x1b2d10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d14: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d18: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b2d18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d1c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1b2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d20: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b2d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b2d24: 0x24533060  addiu       $s3, $v0, 0x3060
    ctx->pc = 0x1b2d24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
    // 0x1b2d28: 0x2476309c  addiu       $s6, $v1, 0x309C
    ctx->pc = 0x1b2d28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 12444));
    // 0x1b2d2c: 0x24923118  addiu       $s2, $a0, 0x3118
    ctx->pc = 0x1b2d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12568));
    // 0x1b2d30: 0x24b530a0  addiu       $s5, $a1, 0x30A0
    ctx->pc = 0x1b2d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 12448));
    // 0x1b2d34: 0x24d13038  addiu       $s1, $a2, 0x3038
    ctx->pc = 0x1b2d34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 12344));
    // 0x1b2d38: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b2d38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d3c: 0x0  nop
    ctx->pc = 0x1b2d3cu;
    // NOP
label_1b2d40:
    // 0x1b2d40: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x1b2d40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b2d44: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2d44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2d48: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x1b2d48u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x1b2d4c: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D54u);
    ctx->pc = 0x1B2D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D4Cu;
            // 0x1b2d50: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3200u;
    if (runtime->hasFunction(0x1B3200u)) {
        auto targetFn = runtime->lookupFunction(0x1B3200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D54u; }
        if (ctx->pc != 0x1B2D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSuspendIfRunnable_0x1b3200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D54u; }
        if (ctx->pc != 0x1B2D54u) { return; }
    }
    ctx->pc = 0x1B2D54u;
label_1b2d54:
    // 0x1b2d54: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2d58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2D58u;
    {
        const bool branch_taken_0x1b2d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2d58) {
            ctx->pc = 0x1B2D68u;
            goto label_1b2d68;
        }
    }
    ctx->pc = 0x1B2D60u;
    // 0x1b2d60: 0xc06d17e  jal         func_1B45F8
    ctx->pc = 0x1B2D60u;
    SET_GPR_U32(ctx, 31, 0x1B2D68u);
    ctx->pc = 0x1B45F8u;
    if (runtime->hasFunction(0x1B45F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B45F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D68u; }
        if (ctx->pc != 0x1B2D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B45F8_0x1b45f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D68u; }
        if (ctx->pc != 0x1B2D68u) { return; }
    }
    ctx->pc = 0x1B2D68u;
label_1b2d68:
    // 0x1b2d68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b2d6c: 0xc06cd8e  jal         func_1B3638
    ctx->pc = 0x1B2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D74u);
    ctx->pc = 0x1B2D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D6Cu;
            // 0x1b2d70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3638u;
    if (runtime->hasFunction(0x1B3638u)) {
        auto targetFn = runtime->lookupFunction(0x1B3638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D74u; }
        if (ctx->pc != 0x1B2D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiGetSchedulerModeFlag_0x1b3638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D74u; }
        if (ctx->pc != 0x1B2D74u) { return; }
    }
    ctx->pc = 0x1B2D74u;
label_1b2d74:
    // 0x1b2d74: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2D74u;
    {
        const bool branch_taken_0x1b2d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1b2d74) {
            ctx->pc = 0x1B2D84u;
            goto label_1b2d84;
        }
    }
    ctx->pc = 0x1B2D7Cu;
    // 0x1b2d7c: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B2D7Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D84u);
    ctx->pc = 0x1B2D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D7Cu;
            // 0x1b2d80: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3200u;
    if (runtime->hasFunction(0x1B3200u)) {
        auto targetFn = runtime->lookupFunction(0x1B3200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D84u; }
        if (ctx->pc != 0x1B2D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSuspendIfRunnable_0x1b3200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D84u; }
        if (ctx->pc != 0x1B2D84u) { return; }
    }
    ctx->pc = 0x1B2D84u;
label_1b2d84:
    // 0x1b2d84: 0xc06d012  jal         func_1B4048
    ctx->pc = 0x1B2D84u;
    SET_GPR_U32(ctx, 31, 0x1B2D8Cu);
    ctx->pc = 0x1B4048u;
    if (runtime->hasFunction(0x1B4048u)) {
        auto targetFn = runtime->lookupFunction(0x1B4048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D8Cu; }
        if (ctx->pc != 0x1B2D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiWakeFrameSleepThread_0x1b4048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D8Cu; }
        if (ctx->pc != 0x1B2D8Cu) { return; }
    }
    ctx->pc = 0x1B2D8Cu;
label_1b2d8c:
    // 0x1b2d8c: 0xc07397a  jal         func_1CE5E8
    ctx->pc = 0x1B2D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D94u);
    ctx->pc = 0x1B2D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D8Cu;
            // 0x1b2d90: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE5E8u;
    if (runtime->hasFunction(0x1CE5E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE5E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D94u; }
        if (ctx->pc != 0x1B2D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE5E8_0x1ce5e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D94u; }
        if (ctx->pc != 0x1B2D94u) { return; }
    }
    ctx->pc = 0x1B2D94u;
label_1b2d94:
    // 0x1b2d94: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2D94u;
    SET_GPR_U32(ctx, 31, 0x1B2D9Cu);
    ctx->pc = 0x1B2D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D94u;
            // 0x1b2d98: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    if (runtime->hasFunction(0x1B3180u)) {
        auto targetFn = runtime->lookupFunction(0x1B3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D9Cu; }
        if (ctx->pc != 0x1B2D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D9Cu; }
        if (ctx->pc != 0x1B2D9Cu) { return; }
    }
    ctx->pc = 0x1B2D9Cu;
label_1b2d9c:
    // 0x1b2d9c: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b2d9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2da0: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B2DA0u;
    {
        const bool branch_taken_0x1b2da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DA0u;
            // 0x1b2da4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2da0) {
            ctx->pc = 0x1B2D40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2d40;
        }
    }
    ctx->pc = 0x1B2DA8u;
label_1b2da8:
    // 0x1b2da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2db0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2db4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2db4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2db8: 0x244230d0  addiu       $v0, $v0, 0x30D0
    ctx->pc = 0x1b2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12496));
    // 0x1b2dbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2dbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2dc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2dc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2dc4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2dc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2dc8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b2dc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2dcc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b2dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2dd0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b2dd4: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B2DD4u;
    ctx->pc = 0x1B2DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DD4u;
            // 0x1b2dd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2DDCu;
    // 0x1b2ddc: 0x0  nop
    ctx->pc = 0x1b2ddcu;
    // NOP
label_1b2de0:
    // 0x1b2de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b2de4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2de8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1b2de8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1b2dec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2df0: 0x26a230d8  addiu       $v0, $s5, 0x30D8
    ctx->pc = 0x1b2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 12504));
    // 0x1b2df4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2df8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2dfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2e00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2e04: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b2e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b2e08: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b2e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b2e0c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1b2e0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2e10: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B2E10u;
    {
        const bool branch_taken_0x1b2e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E10u;
            // 0x1b2e14: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e10) {
            ctx->pc = 0x1B2E9Cu;
            goto label_1b2e9c;
        }
    }
    ctx->pc = 0x1B2E18u;
    // 0x1b2e18: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2e1c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2e20: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b2e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b2e24: 0x3c121200  lui         $s2, 0x1200
    ctx->pc = 0x1b2e24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4608 << 16));
    // 0x1b2e28: 0x24543068  addiu       $s4, $v0, 0x3068
    ctx->pc = 0x1b2e28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12392));
    // 0x1b2e2c: 0x24733040  addiu       $s3, $v1, 0x3040
    ctx->pc = 0x1b2e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12352));
    // 0x1b2e30: 0x24913114  addiu       $s1, $a0, 0x3114
    ctx->pc = 0x1b2e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 12564));
    // 0x1b2e34: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1b2e34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e38: 0x365200e0  ori         $s2, $s2, 0xE0
    ctx->pc = 0x1b2e38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)224);
    // 0x1b2e3c: 0x0  nop
    ctx->pc = 0x1b2e3cu;
    // NOP
label_1b2e40:
    // 0x1b2e40: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b2e40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2e44: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1b2e44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2e48: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2e48u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2e4c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1b2e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1b2e50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2E50u;
    {
        const bool branch_taken_0x1b2e50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E50u;
            // 0x1b2e54: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e50) {
            ctx->pc = 0x1B2E60u;
            goto label_1b2e60;
        }
    }
    ctx->pc = 0x1B2E58u;
    // 0x1b2e58: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1b2e58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2e5c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x1b2e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_1b2e60:
    // 0x1b2e60: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1B2E60u;
    SET_GPR_U32(ctx, 31, 0x1B2E68u);
    ctx->pc = 0x1CE618u;
    if (runtime->hasFunction(0x1CE618u)) {
        auto targetFn = runtime->lookupFunction(0x1CE618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E68u; }
        if (ctx->pc != 0x1B2E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE618_0x1ce618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E68u; }
        if (ctx->pc != 0x1B2E68u) { return; }
    }
    ctx->pc = 0x1B2E68u;
label_1b2e68:
    // 0x1b2e68: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1b2e68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2e6c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B2E6Cu;
    {
        const bool branch_taken_0x1b2e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e6c) {
            ctx->pc = 0x1B2E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E6Cu;
            // 0x1b2e70: 0xfe400000  sd          $zero, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E74u;
            goto label_1b2e74;
        }
    }
    ctx->pc = 0x1B2E74u;
label_1b2e74:
    // 0x1b2e74: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b2e74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b2e78: 0x26b030d8  addiu       $s0, $s5, 0x30D8
    ctx->pc = 0x1b2e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12504));
    // 0x1b2e7c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b2e7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2e80: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2E80u;
    {
        const bool branch_taken_0x1b2e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2e80) {
            ctx->pc = 0x1B2E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E80u;
            // 0x1b2e84: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E9Cu;
            goto label_1b2e9c;
        }
    }
    ctx->pc = 0x1B2E88u;
    // 0x1b2e88: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2E88u;
    SET_GPR_U32(ctx, 31, 0x1B2E90u);
    ctx->pc = 0x1B3180u;
    if (runtime->hasFunction(0x1B3180u)) {
        auto targetFn = runtime->lookupFunction(0x1B3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E90u; }
        if (ctx->pc != 0x1B2E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E90u; }
        if (ctx->pc != 0x1B2E90u) { return; }
    }
    ctx->pc = 0x1B2E90u;
label_1b2e90:
    // 0x1b2e90: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1b2e90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2e94: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B2E94u;
    {
        const bool branch_taken_0x1b2e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E94u;
            // 0x1b2e98: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e94) {
            ctx->pc = 0x1B2E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2e40;
        }
    }
    ctx->pc = 0x1B2E9Cu;
label_1b2e9c:
    // 0x1b2e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ea0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2ea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2ea8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2ea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2eac: 0x244230e0  addiu       $v0, $v0, 0x30E0
    ctx->pc = 0x1b2eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12512));
    // 0x1b2eb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2eb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2eb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2eb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2eb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2eb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2ebc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b2ebcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2ec0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b2ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2ec4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b2ec8: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B2EC8u;
    ctx->pc = 0x1B2ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EC8u;
            // 0x1b2ecc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B2ED0u;
label_1b2ed0:
    // 0x1b2ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b2ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b2ed4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2ed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2edc: 0x244630e8  addiu       $a2, $v0, 0x30E8
    ctx->pc = 0x1b2edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12520));
    // 0x1b2ee0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2ee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2ee8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b2ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2eec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b2eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b2ef0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b2ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b2ef4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b2ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b2ef8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1b2ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1b2efc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b2efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1b2f00: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1b2f00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b2f04: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B2F04u;
    {
        const bool branch_taken_0x1b2f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F04u;
            // 0x1b2f08: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f04) {
            ctx->pc = 0x1B2FD0u;
            goto label_1b2fd0;
        }
    }
    ctx->pc = 0x1B2F0Cu;
    // 0x1b2f0c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f10: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f14: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b2f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1b2f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1b2f1c: 0x24543070  addiu       $s4, $v0, 0x3070
    ctx->pc = 0x1b2f1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
    // 0x1b2f20: 0x24733044  addiu       $s3, $v1, 0x3044
    ctx->pc = 0x1b2f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12356));
    // 0x1b2f24: 0x24923034  addiu       $s2, $a0, 0x3034
    ctx->pc = 0x1b2f24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12340));
    // 0x1b2f28: 0x24b73118  addiu       $s7, $a1, 0x3118
    ctx->pc = 0x1b2f28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 12568));
    // 0x1b2f2c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b2f2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f30: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b2f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2f34: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1b2f34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1b2f38:
    // 0x1b2f38: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b2f38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b2f3c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b2f3cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b2f40: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1b2f40u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1b2f44: 0xc073992  jal         func_1CE648
    ctx->pc = 0x1B2F44u;
    SET_GPR_U32(ctx, 31, 0x1B2F4Cu);
    ctx->pc = 0x1B2F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F44u;
            // 0x1b2f48: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE648u;
    if (runtime->hasFunction(0x1CE648u)) {
        auto targetFn = runtime->lookupFunction(0x1CE648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F4Cu; }
        if (ctx->pc != 0x1B2F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE648_0x1ce648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F4Cu; }
        if (ctx->pc != 0x1B2F4Cu) { return; }
    }
    ctx->pc = 0x1B2F4Cu;
label_1b2f4c:
    // 0x1b2f4c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b2f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b2f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2f58: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2F58u;
    {
        const bool branch_taken_0x1b2f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b2f58) {
            ctx->pc = 0x1B2F68u;
            goto label_1b2f68;
        }
    }
    ctx->pc = 0x1B2F60u;
    // 0x1b2f60: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2F60u;
    SET_GPR_U32(ctx, 31, 0x1B2F68u);
    ctx->pc = 0x1B2F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F60u;
            // 0x1b2f64: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    if (runtime->hasFunction(0x1B3180u)) {
        auto targetFn = runtime->lookupFunction(0x1B3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F68u; }
        if (ctx->pc != 0x1B2F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F68u; }
        if (ctx->pc != 0x1B2F68u) { return; }
    }
    ctx->pc = 0x1B2F68u;
label_1b2f68:
    // 0x1b2f68: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B2F68u;
    {
        const bool branch_taken_0x1b2f68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2f68) {
            ctx->pc = 0x1B2FC4u;
            goto label_1b2fc4;
        }
    }
    ctx->pc = 0x1B2F70u;
    // 0x1b2f70: 0xc06cd8e  jal         func_1B3638
    ctx->pc = 0x1B2F70u;
    SET_GPR_U32(ctx, 31, 0x1B2F78u);
    ctx->pc = 0x1B3638u;
    if (runtime->hasFunction(0x1B3638u)) {
        auto targetFn = runtime->lookupFunction(0x1B3638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F78u; }
        if (ctx->pc != 0x1B2F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiGetSchedulerModeFlag_0x1b3638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F78u; }
        if (ctx->pc != 0x1B2F78u) { return; }
    }
    ctx->pc = 0x1B2F78u;
label_1b2f78:
    // 0x1b2f78: 0x14510009  bne         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2F78u;
    {
        const bool branch_taken_0x1b2f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B2F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F78u;
            // 0x1b2f7c: 0x26b030a0  addiu       $s0, $s5, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 12448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f78) {
            ctx->pc = 0x1B2FA0u;
            goto label_1b2fa0;
        }
    }
    ctx->pc = 0x1B2F80u;
    // 0x1b2f80: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2f84: 0xc06cc66  jal         func_1B3198
    ctx->pc = 0x1B2F84u;
    SET_GPR_U32(ctx, 31, 0x1B2F8Cu);
    ctx->pc = 0x1B3198u;
    if (runtime->hasFunction(0x1B3198u)) {
        auto targetFn = runtime->lookupFunction(0x1B3198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F8Cu; }
        if (ctx->pc != 0x1B2F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadResumeIfSuspended_0x1b3198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2F8Cu; }
        if (ctx->pc != 0x1B2F8Cu) { return; }
    }
    ctx->pc = 0x1B2F8Cu;
label_1b2f8c:
    // 0x1b2f8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b2f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b2f90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2F90u;
    {
        const bool branch_taken_0x1b2f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b2f90) {
            ctx->pc = 0x1B2FA0u;
            goto label_1b2fa0;
        }
    }
    ctx->pc = 0x1B2F98u;
    // 0x1b2f98: 0xc06cc4c  jal         func_1B3130
    ctx->pc = 0x1B2F98u;
    SET_GPR_U32(ctx, 31, 0x1B2FA0u);
    ctx->pc = 0x1B2F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2F98u;
            // 0x1b2f9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3130u;
    if (runtime->hasFunction(0x1B3130u)) {
        auto targetFn = runtime->lookupFunction(0x1B3130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FA0u; }
        if (ctx->pc != 0x1B2FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadWakeIfSleeping_0x1b3130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FA0u; }
        if (ctx->pc != 0x1B2FA0u) { return; }
    }
    ctx->pc = 0x1B2FA0u;
label_1b2fa0:
    // 0x1b2fa0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b2fa4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b2fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2fa8: 0x10500004  beq         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2FA8u;
    {
        const bool branch_taken_0x1b2fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b2fa8) {
            ctx->pc = 0x1B2FBCu;
            goto label_1b2fbc;
        }
    }
    ctx->pc = 0x1B2FB0u;
    // 0x1b2fb0: 0xc06d17e  jal         func_1B45F8
    ctx->pc = 0x1B2FB0u;
    SET_GPR_U32(ctx, 31, 0x1B2FB8u);
    ctx->pc = 0x1B45F8u;
    if (runtime->hasFunction(0x1B45F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B45F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FB8u; }
        if (ctx->pc != 0x1B2FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B45F8_0x1b45f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FB8u; }
        if (ctx->pc != 0x1B2FB8u) { return; }
    }
    ctx->pc = 0x1B2FB8u;
label_1b2fb8:
    // 0x1b2fb8: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x1b2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_1b2fbc:
    // 0x1b2fbc: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B2FBCu;
    SET_GPR_U32(ctx, 31, 0x1B2FC4u);
    ctx->pc = 0x1B3180u;
    if (runtime->hasFunction(0x1B3180u)) {
        auto targetFn = runtime->lookupFunction(0x1B3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FC4u; }
        if (ctx->pc != 0x1B2FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2FC4u; }
        if (ctx->pc != 0x1B2FC4u) { return; }
    }
    ctx->pc = 0x1B2FC4u;
label_1b2fc4:
    // 0x1b2fc4: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x1b2fc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b2fc8: 0x1040ffdb  beqz        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B2FC8u;
    {
        const bool branch_taken_0x1b2fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2FC8u;
            // 0x1b2fcc: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2fc8) {
            ctx->pc = 0x1B2F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2f38;
        }
    }
    ctx->pc = 0x1B2FD0u;
label_1b2fd0:
    // 0x1b2fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2fdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b2fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2fe0: 0x244230f0  addiu       $v0, $v0, 0x30F0
    ctx->pc = 0x1b2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12528));
    // 0x1b2fe4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2fe4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2fe8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b2fe8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2fec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b2fecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2ff0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b2ff0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2ff4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1b2ff4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b2ff8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2ffc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b2ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b3000: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B3000u;
    ctx->pc = 0x1B3004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3000u;
            // 0x1b3004: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B3008u;
label_1b3008:
    // 0x1b3008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b3008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b300c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b300cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3014: 0x244530f8  addiu       $a1, $v0, 0x30F8
    ctx->pc = 0x1b3014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12536));
    // 0x1b3018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b3018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b301c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b3020: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b3020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b3024: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b3024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b3028: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b3028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b302c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b302cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b3030: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1b3030u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b3034: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B3034u;
    {
        const bool branch_taken_0x1b3034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3034u;
            // 0x1b3038: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3034) {
            ctx->pc = 0x1B30ACu;
            goto label_1b30ac;
        }
    }
    ctx->pc = 0x1B303Cu;
    // 0x1b303c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b303cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b3040: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b3044: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b3044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b3048: 0x24543078  addiu       $s4, $v0, 0x3078
    ctx->pc = 0x1b3048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 12408));
    // 0x1b304c: 0x24733048  addiu       $s3, $v1, 0x3048
    ctx->pc = 0x1b304cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12360));
    // 0x1b3050: 0x24923034  addiu       $s2, $a0, 0x3034
    ctx->pc = 0x1b3050u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12340));
    // 0x1b3054: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b3054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3058: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1b3058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b305c: 0x0  nop
    ctx->pc = 0x1b305cu;
    // NOP
label_1b3060:
    // 0x1b3060: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x1b3060u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b3064: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x1b3064u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x1b3068: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1b3068u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x1b306c: 0xc073998  jal         func_1CE660
    ctx->pc = 0x1B306Cu;
    SET_GPR_U32(ctx, 31, 0x1B3074u);
    ctx->pc = 0x1B3070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B306Cu;
            // 0x1b3070: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE660u;
    if (runtime->hasFunction(0x1CE660u)) {
        auto targetFn = runtime->lookupFunction(0x1CE660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3074u; }
        if (ctx->pc != 0x1B3074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE660_0x1ce660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3074u; }
        if (ctx->pc != 0x1B3074u) { return; }
    }
    ctx->pc = 0x1B3074u;
label_1b3074:
    // 0x1b3074: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1b3074u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1b3078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b3078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b307c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b3080: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3080u;
    {
        const bool branch_taken_0x1b3080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b3080) {
            ctx->pc = 0x1B3090u;
            goto label_1b3090;
        }
    }
    ctx->pc = 0x1B3088u;
    // 0x1b3088: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B3088u;
    SET_GPR_U32(ctx, 31, 0x1B3090u);
    ctx->pc = 0x1B308Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3088u;
            // 0x1b308c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3180u;
    if (runtime->hasFunction(0x1B3180u)) {
        auto targetFn = runtime->lookupFunction(0x1B3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3090u; }
        if (ctx->pc != 0x1B3090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3090u; }
        if (ctx->pc != 0x1B3090u) { return; }
    }
    ctx->pc = 0x1B3090u;
label_1b3090:
    // 0x1b3090: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3090u;
    {
        const bool branch_taken_0x1b3090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3090) {
            ctx->pc = 0x1B30A0u;
            goto label_1b30a0;
        }
    }
    ctx->pc = 0x1B3098u;
    // 0x1b3098: 0xc06cc60  jal         func_1B3180
    ctx->pc = 0x1B3098u;
    SET_GPR_U32(ctx, 31, 0x1B30A0u);
    ctx->pc = 0x1B3180u;
    if (runtime->hasFunction(0x1B3180u)) {
        auto targetFn = runtime->lookupFunction(0x1B3180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B30A0u; }
        if (ctx->pc != 0x1B30A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadSleepCurrent_0x1b3180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B30A0u; }
        if (ctx->pc != 0x1B30A0u) { return; }
    }
    ctx->pc = 0x1B30A0u;
label_1b30a0:
    // 0x1b30a0: 0xdea20000  ld          $v0, 0x0($s5)
    ctx->pc = 0x1b30a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b30a4: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B30A4u;
    {
        const bool branch_taken_0x1b30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B30A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30A4u;
            // 0x1b30a8: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b30a4) {
            ctx->pc = 0x1B3060u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b3060;
        }
    }
    ctx->pc = 0x1B30ACu;
label_1b30ac:
    // 0x1b30ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b30acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b30b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b30b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b30b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b30b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b30b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b30bc: 0x24423100  addiu       $v0, $v0, 0x3100
    ctx->pc = 0x1b30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
    // 0x1b30c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b30c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b30c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b30c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b30c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b30c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b30cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b30ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b30d0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1b30d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1b30d4: 0x80432a8  j           func_10CAA0
    ctx->pc = 0x1B30D4u;
    ctx->pc = 0x1B30D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B30D4u;
            // 0x1b30d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B30DCu;
    // 0x1b30dc: 0x0  nop
    ctx->pc = 0x1b30dcu;
    // NOP
    ctx->pc = 0x1b30e0u;
}
