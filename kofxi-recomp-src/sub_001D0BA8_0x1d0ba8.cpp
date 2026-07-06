#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0BA8
// Address: 0x1d0ba8 - 0x1d0db8
void sub_001D0BA8_0x1d0ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BA8_0x1d0ba8");
#endif

    switch (ctx->pc) {
        case 0x1d0ba8u: goto label_1d0ba8;
        case 0x1d0bacu: goto label_1d0bac;
        case 0x1d0bb0u: goto label_1d0bb0;
        case 0x1d0bb4u: goto label_1d0bb4;
        case 0x1d0bb8u: goto label_1d0bb8;
        case 0x1d0bbcu: goto label_1d0bbc;
        case 0x1d0bc0u: goto label_1d0bc0;
        case 0x1d0bc4u: goto label_1d0bc4;
        case 0x1d0bc8u: goto label_1d0bc8;
        case 0x1d0bccu: goto label_1d0bcc;
        case 0x1d0bd0u: goto label_1d0bd0;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0bd8u: goto label_1d0bd8;
        case 0x1d0bdcu: goto label_1d0bdc;
        case 0x1d0be0u: goto label_1d0be0;
        case 0x1d0be4u: goto label_1d0be4;
        case 0x1d0be8u: goto label_1d0be8;
        case 0x1d0becu: goto label_1d0bec;
        case 0x1d0bf0u: goto label_1d0bf0;
        case 0x1d0bf4u: goto label_1d0bf4;
        case 0x1d0bf8u: goto label_1d0bf8;
        case 0x1d0bfcu: goto label_1d0bfc;
        case 0x1d0c00u: goto label_1d0c00;
        case 0x1d0c04u: goto label_1d0c04;
        case 0x1d0c08u: goto label_1d0c08;
        case 0x1d0c0cu: goto label_1d0c0c;
        case 0x1d0c10u: goto label_1d0c10;
        case 0x1d0c14u: goto label_1d0c14;
        case 0x1d0c18u: goto label_1d0c18;
        case 0x1d0c1cu: goto label_1d0c1c;
        case 0x1d0c20u: goto label_1d0c20;
        case 0x1d0c24u: goto label_1d0c24;
        case 0x1d0c28u: goto label_1d0c28;
        case 0x1d0c2cu: goto label_1d0c2c;
        case 0x1d0c30u: goto label_1d0c30;
        case 0x1d0c34u: goto label_1d0c34;
        case 0x1d0c38u: goto label_1d0c38;
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c40u: goto label_1d0c40;
        case 0x1d0c44u: goto label_1d0c44;
        case 0x1d0c48u: goto label_1d0c48;
        case 0x1d0c4cu: goto label_1d0c4c;
        case 0x1d0c50u: goto label_1d0c50;
        case 0x1d0c54u: goto label_1d0c54;
        case 0x1d0c58u: goto label_1d0c58;
        case 0x1d0c5cu: goto label_1d0c5c;
        case 0x1d0c60u: goto label_1d0c60;
        case 0x1d0c64u: goto label_1d0c64;
        case 0x1d0c68u: goto label_1d0c68;
        case 0x1d0c6cu: goto label_1d0c6c;
        case 0x1d0c70u: goto label_1d0c70;
        case 0x1d0c74u: goto label_1d0c74;
        case 0x1d0c78u: goto label_1d0c78;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c80u: goto label_1d0c80;
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0c88u: goto label_1d0c88;
        case 0x1d0c8cu: goto label_1d0c8c;
        case 0x1d0c90u: goto label_1d0c90;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0c98u: goto label_1d0c98;
        case 0x1d0c9cu: goto label_1d0c9c;
        case 0x1d0ca0u: goto label_1d0ca0;
        case 0x1d0ca4u: goto label_1d0ca4;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cacu: goto label_1d0cac;
        case 0x1d0cb0u: goto label_1d0cb0;
        case 0x1d0cb4u: goto label_1d0cb4;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cc0u: goto label_1d0cc0;
        case 0x1d0cc4u: goto label_1d0cc4;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cccu: goto label_1d0ccc;
        case 0x1d0cd0u: goto label_1d0cd0;
        case 0x1d0cd4u: goto label_1d0cd4;
        case 0x1d0cd8u: goto label_1d0cd8;
        case 0x1d0cdcu: goto label_1d0cdc;
        case 0x1d0ce0u: goto label_1d0ce0;
        case 0x1d0ce4u: goto label_1d0ce4;
        case 0x1d0ce8u: goto label_1d0ce8;
        case 0x1d0cecu: goto label_1d0cec;
        case 0x1d0cf0u: goto label_1d0cf0;
        case 0x1d0cf4u: goto label_1d0cf4;
        case 0x1d0cf8u: goto label_1d0cf8;
        case 0x1d0cfcu: goto label_1d0cfc;
        case 0x1d0d00u: goto label_1d0d00;
        case 0x1d0d04u: goto label_1d0d04;
        case 0x1d0d08u: goto label_1d0d08;
        case 0x1d0d0cu: goto label_1d0d0c;
        case 0x1d0d10u: goto label_1d0d10;
        case 0x1d0d14u: goto label_1d0d14;
        case 0x1d0d18u: goto label_1d0d18;
        case 0x1d0d1cu: goto label_1d0d1c;
        case 0x1d0d20u: goto label_1d0d20;
        case 0x1d0d24u: goto label_1d0d24;
        case 0x1d0d28u: goto label_1d0d28;
        case 0x1d0d2cu: goto label_1d0d2c;
        case 0x1d0d30u: goto label_1d0d30;
        case 0x1d0d34u: goto label_1d0d34;
        case 0x1d0d38u: goto label_1d0d38;
        case 0x1d0d3cu: goto label_1d0d3c;
        case 0x1d0d40u: goto label_1d0d40;
        case 0x1d0d44u: goto label_1d0d44;
        case 0x1d0d48u: goto label_1d0d48;
        case 0x1d0d4cu: goto label_1d0d4c;
        case 0x1d0d50u: goto label_1d0d50;
        case 0x1d0d54u: goto label_1d0d54;
        case 0x1d0d58u: goto label_1d0d58;
        case 0x1d0d5cu: goto label_1d0d5c;
        case 0x1d0d60u: goto label_1d0d60;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0d68u: goto label_1d0d68;
        case 0x1d0d6cu: goto label_1d0d6c;
        case 0x1d0d70u: goto label_1d0d70;
        case 0x1d0d74u: goto label_1d0d74;
        case 0x1d0d78u: goto label_1d0d78;
        case 0x1d0d7cu: goto label_1d0d7c;
        case 0x1d0d80u: goto label_1d0d80;
        case 0x1d0d84u: goto label_1d0d84;
        case 0x1d0d88u: goto label_1d0d88;
        case 0x1d0d8cu: goto label_1d0d8c;
        case 0x1d0d90u: goto label_1d0d90;
        case 0x1d0d94u: goto label_1d0d94;
        case 0x1d0d98u: goto label_1d0d98;
        case 0x1d0d9cu: goto label_1d0d9c;
        case 0x1d0da0u: goto label_1d0da0;
        case 0x1d0da4u: goto label_1d0da4;
        case 0x1d0da8u: goto label_1d0da8;
        case 0x1d0dacu: goto label_1d0dac;
        case 0x1d0db0u: goto label_1d0db0;
        case 0x1d0db4u: goto label_1d0db4;
        default: break;
    }

    ctx->pc = 0x1d0ba8u;

label_1d0ba8:
    // 0x1d0ba8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d0ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d0bac:
    // 0x1d0bac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1d0bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1d0bb0:
    // 0x1d0bb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d0bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bb4:
    // 0x1d0bb4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1d0bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1d0bb8:
    // 0x1d0bb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d0bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bbc:
    // 0x1d0bbc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1d0bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1d0bc0:
    // 0x1d0bc0: 0x26530180  addiu       $s3, $s2, 0x180
    ctx->pc = 0x1d0bc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_1d0bc4:
    // 0x1d0bc4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1d0bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1d0bc8:
    // 0x1d0bc8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1d0bc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d0bcc:
    // 0x1d0bcc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1d0bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1d0bd0:
    // 0x1d0bd0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1d0bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1d0bd4:
    // 0x1d0bd4: 0xae600494  sw          $zero, 0x494($s3)
    ctx->pc = 0x1d0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1172), GPR_U32(ctx, 0));
label_1d0bd8:
    // 0x1d0bd8: 0xae600498  sw          $zero, 0x498($s3)
    ctx->pc = 0x1d0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1176), GPR_U32(ctx, 0));
label_1d0bdc:
    // 0x1d0bdc: 0xae600308  sw          $zero, 0x308($s3)
    ctx->pc = 0x1d0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 776), GPR_U32(ctx, 0));
label_1d0be0:
    // 0x1d0be0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1d0be4:
    if (ctx->pc == 0x1D0BE4u) {
        ctx->pc = 0x1D0BE4u;
            // 0x1d0be4: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->pc = 0x1D0BE8u;
        goto label_1d0be8;
    }
    ctx->pc = 0x1D0BE0u;
    {
        const bool branch_taken_0x1d0be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BE0u;
            // 0x1d0be4: 0xae60030c  sw          $zero, 0x30C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 780), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0be0) {
            ctx->pc = 0x1D0D58u;
            goto label_1d0d58;
        }
    }
    ctx->pc = 0x1D0BE8u;
label_1d0be8:
    // 0x1d0be8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1d0be8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1d0bec:
    // 0x1d0bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bf0:
    // 0x1d0bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0bf4:
    // 0x1d0bf4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1d0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1d0bf8:
    // 0x1d0bf8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1d0bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1d0bfc:
    // 0x1d0bfc: 0x40f809  jalr        $v0
label_1d0c00:
    if (ctx->pc == 0x1D0C00u) {
        ctx->pc = 0x1D0C00u;
            // 0x1d0c00: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C04u;
        goto label_1d0c04;
    }
    ctx->pc = 0x1D0BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0C04u);
        ctx->pc = 0x1D0C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BFCu;
            // 0x1d0c00: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0C04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C04u; }
            if (ctx->pc != 0x1D0C04u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0C04u;
label_1d0c04:
    // 0x1d0c04: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d0c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d0c08:
    // 0x1d0c08: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
label_1d0c0c:
    if (ctx->pc == 0x1D0C0Cu) {
        ctx->pc = 0x1D0C0Cu;
            // 0x1d0c0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C10u;
        goto label_1d0c10;
    }
    ctx->pc = 0x1D0C08u;
    {
        const bool branch_taken_0x1d0c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C08u;
            // 0x1d0c0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c08) {
            ctx->pc = 0x1D0CA8u;
            goto label_1d0ca8;
        }
    }
    ctx->pc = 0x1D0C10u;
label_1d0c10:
    // 0x1d0c10: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d0c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
label_1d0c14:
    // 0x1d0c14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d0c18:
    if (ctx->pc == 0x1D0C18u) {
        ctx->pc = 0x1D0C18u;
            // 0x1d0c18: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1D0C1Cu;
        goto label_1d0c1c;
    }
    ctx->pc = 0x1D0C14u;
    {
        const bool branch_taken_0x1d0c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C14u;
            // 0x1d0c18: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c14) {
            ctx->pc = 0x1D0C38u;
            goto label_1d0c38;
        }
    }
    ctx->pc = 0x1D0C1Cu;
label_1d0c1c:
    // 0x1d0c1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d0c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0c20:
    // 0x1d0c20: 0x1202002b  beq         $s0, $v0, . + 4 + (0x2B << 2)
label_1d0c24:
    if (ctx->pc == 0x1D0C24u) {
        ctx->pc = 0x1D0C24u;
            // 0x1d0c24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1D0C28u;
        goto label_1d0c28;
    }
    ctx->pc = 0x1D0C20u;
    {
        const bool branch_taken_0x1d0c20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C20u;
            // 0x1d0c24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c20) {
            ctx->pc = 0x1D0CD0u;
            goto label_1d0cd0;
        }
    }
    ctx->pc = 0x1D0C28u;
label_1d0c28:
    // 0x1d0c28: 0x12020025  beq         $s0, $v0, . + 4 + (0x25 << 2)
label_1d0c2c:
    if (ctx->pc == 0x1D0C2Cu) {
        ctx->pc = 0x1D0C2Cu;
            // 0x1d0c2c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D0C30u;
        goto label_1d0c30;
    }
    ctx->pc = 0x1D0C28u;
    {
        const bool branch_taken_0x1d0c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C28u;
            // 0x1d0c2c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c28) {
            ctx->pc = 0x1D0CC0u;
            goto label_1d0cc0;
        }
    }
    ctx->pc = 0x1D0C30u;
label_1d0c30:
    // 0x1d0c30: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1d0c34:
    if (ctx->pc == 0x1D0C34u) {
        ctx->pc = 0x1D0C38u;
        goto label_1d0c38;
    }
    ctx->pc = 0x1D0C30u;
    {
        const bool branch_taken_0x1d0c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c30) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0C38u;
label_1d0c38:
    // 0x1d0c38: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_1d0c3c:
    if (ctx->pc == 0x1D0C3Cu) {
        ctx->pc = 0x1D0C3Cu;
            // 0x1d0c3c: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->pc = 0x1D0C40u;
        goto label_1d0c40;
    }
    ctx->pc = 0x1D0C38u;
    {
        const bool branch_taken_0x1d0c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C38u;
            // 0x1d0c3c: 0x2a020041  slti        $v0, $s0, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c38) {
            ctx->pc = 0x1D0C70u;
            goto label_1d0c70;
        }
    }
    ctx->pc = 0x1D0C40u;
label_1d0c40:
    // 0x1d0c40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d0c44:
    if (ctx->pc == 0x1D0C44u) {
        ctx->pc = 0x1D0C44u;
            // 0x1d0c44: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x1D0C48u;
        goto label_1d0c48;
    }
    ctx->pc = 0x1D0C40u;
    {
        const bool branch_taken_0x1d0c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C40u;
            // 0x1d0c44: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c40) {
            ctx->pc = 0x1D0C60u;
            goto label_1d0c60;
        }
    }
    ctx->pc = 0x1D0C48u;
label_1d0c48:
    // 0x1d0c48: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1d0c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d0c4c:
    // 0x1d0c4c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_1d0c50:
    if (ctx->pc == 0x1D0C50u) {
        ctx->pc = 0x1D0C50u;
            // 0x1d0c50: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D0C54u;
        goto label_1d0c54;
    }
    ctx->pc = 0x1D0C4Cu;
    {
        const bool branch_taken_0x1d0c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C4Cu;
            // 0x1d0c50: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c4c) {
            ctx->pc = 0x1D0C98u;
            goto label_1d0c98;
        }
    }
    ctx->pc = 0x1D0C54u;
label_1d0c54:
    // 0x1d0c54: 0x10000022  b           . + 4 + (0x22 << 2)
label_1d0c58:
    if (ctx->pc == 0x1D0C58u) {
        ctx->pc = 0x1D0C5Cu;
        goto label_1d0c5c;
    }
    ctx->pc = 0x1D0C54u;
    {
        const bool branch_taken_0x1d0c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c54) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0C5Cu;
label_1d0c5c:
    // 0x1d0c5c: 0x0  nop
    ctx->pc = 0x1d0c5cu;
    // NOP
label_1d0c60:
    // 0x1d0c60: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_1d0c64:
    if (ctx->pc == 0x1D0C64u) {
        ctx->pc = 0x1D0C64u;
            // 0x1d0c64: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D0C68u;
        goto label_1d0c68;
    }
    ctx->pc = 0x1D0C60u;
    {
        const bool branch_taken_0x1d0c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C60u;
            // 0x1d0c64: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c60) {
            ctx->pc = 0x1D0C88u;
            goto label_1d0c88;
        }
    }
    ctx->pc = 0x1D0C68u;
label_1d0c68:
    // 0x1d0c68: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1d0c6c:
    if (ctx->pc == 0x1D0C6Cu) {
        ctx->pc = 0x1D0C70u;
        goto label_1d0c70;
    }
    ctx->pc = 0x1D0C68u;
    {
        const bool branch_taken_0x1d0c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0c68) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0C70u;
label_1d0c70:
    // 0x1d0c70: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1d0c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0c74:
    // 0x1d0c74: 0xc0743ce  jal         func_1D0F38
label_1d0c78:
    if (ctx->pc == 0x1D0C78u) {
        ctx->pc = 0x1D0C78u;
            // 0x1d0c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C7Cu;
        goto label_1d0c7c;
    }
    ctx->pc = 0x1D0C74u;
    SET_GPR_U32(ctx, 31, 0x1D0C7Cu);
    ctx->pc = 0x1D0C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C74u;
            // 0x1d0c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0F38u;
    if (runtime->hasFunction(0x1D0F38u)) {
        auto targetFn = runtime->lookupFunction(0x1D0F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C7Cu; }
        if (ctx->pc != 0x1D0C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0F38_0x1d0f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C7Cu; }
        if (ctx->pc != 0x1D0C7Cu) { return; }
    }
    ctx->pc = 0x1D0C7Cu;
label_1d0c7c:
    // 0x1d0c7c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d0c80:
    if (ctx->pc == 0x1D0C80u) {
        ctx->pc = 0x1D0C80u;
            // 0x1d0c80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C84u;
        goto label_1d0c84;
    }
    ctx->pc = 0x1D0C7Cu;
    {
        const bool branch_taken_0x1d0c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C7Cu;
            // 0x1d0c80: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c7c) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0C84u;
label_1d0c84:
    // 0x1d0c84: 0x0  nop
    ctx->pc = 0x1d0c84u;
    // NOP
label_1d0c88:
    // 0x1d0c88: 0xc0745c4  jal         func_1D1710
label_1d0c8c:
    if (ctx->pc == 0x1D0C8Cu) {
        ctx->pc = 0x1D0C8Cu;
            // 0x1d0c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C90u;
        goto label_1d0c90;
    }
    ctx->pc = 0x1D0C88u;
    SET_GPR_U32(ctx, 31, 0x1D0C90u);
    ctx->pc = 0x1D0C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C88u;
            // 0x1d0c8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1710u;
    if (runtime->hasFunction(0x1D1710u)) {
        auto targetFn = runtime->lookupFunction(0x1D1710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C90u; }
        if (ctx->pc != 0x1D0C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1710_0x1d1710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0C90u; }
        if (ctx->pc != 0x1D0C90u) { return; }
    }
    ctx->pc = 0x1D0C90u;
label_1d0c90:
    // 0x1d0c90: 0x10000013  b           . + 4 + (0x13 << 2)
label_1d0c94:
    if (ctx->pc == 0x1D0C94u) {
        ctx->pc = 0x1D0C94u;
            // 0x1d0c94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C98u;
        goto label_1d0c98;
    }
    ctx->pc = 0x1D0C90u;
    {
        const bool branch_taken_0x1d0c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C90u;
            // 0x1d0c94: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c90) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0C98u;
label_1d0c98:
    // 0x1d0c98: 0xc07460c  jal         func_1D1830
label_1d0c9c:
    if (ctx->pc == 0x1D0C9Cu) {
        ctx->pc = 0x1D0C9Cu;
            // 0x1d0c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CA0u;
        goto label_1d0ca0;
    }
    ctx->pc = 0x1D0C98u;
    SET_GPR_U32(ctx, 31, 0x1D0CA0u);
    ctx->pc = 0x1D0C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0C98u;
            // 0x1d0c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1830u;
    if (runtime->hasFunction(0x1D1830u)) {
        auto targetFn = runtime->lookupFunction(0x1D1830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CA0u; }
        if (ctx->pc != 0x1D0CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1830_0x1d1830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CA0u; }
        if (ctx->pc != 0x1D0CA0u) { return; }
    }
    ctx->pc = 0x1D0CA0u;
label_1d0ca0:
    // 0x1d0ca0: 0x1000000f  b           . + 4 + (0xF << 2)
label_1d0ca4:
    if (ctx->pc == 0x1D0CA4u) {
        ctx->pc = 0x1D0CA4u;
            // 0x1d0ca4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CA8u;
        goto label_1d0ca8;
    }
    ctx->pc = 0x1D0CA0u;
    {
        const bool branch_taken_0x1d0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CA0u;
            // 0x1d0ca4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ca0) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0CA8u;
label_1d0ca8:
    // 0x1d0ca8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0cac:
    // 0x1d0cac: 0xc074700  jal         func_1D1C00
label_1d0cb0:
    if (ctx->pc == 0x1D0CB0u) {
        ctx->pc = 0x1D0CB0u;
            // 0x1d0cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CB4u;
        goto label_1d0cb4;
    }
    ctx->pc = 0x1D0CACu;
    SET_GPR_U32(ctx, 31, 0x1D0CB4u);
    ctx->pc = 0x1D0CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CACu;
            // 0x1d0cb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C00u;
    if (runtime->hasFunction(0x1D1C00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CB4u; }
        if (ctx->pc != 0x1D0CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C00_0x1d1c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CB4u; }
        if (ctx->pc != 0x1D0CB4u) { return; }
    }
    ctx->pc = 0x1D0CB4u;
label_1d0cb4:
    // 0x1d0cb4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d0cb8:
    if (ctx->pc == 0x1D0CB8u) {
        ctx->pc = 0x1D0CB8u;
            // 0x1d0cb8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CBCu;
        goto label_1d0cbc;
    }
    ctx->pc = 0x1D0CB4u;
    {
        const bool branch_taken_0x1d0cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CB4u;
            // 0x1d0cb8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cb4) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0CBCu;
label_1d0cbc:
    // 0x1d0cbc: 0x0  nop
    ctx->pc = 0x1d0cbcu;
    // NOP
label_1d0cc0:
    // 0x1d0cc0: 0xc0752f8  jal         func_1D4BE0
label_1d0cc4:
    if (ctx->pc == 0x1D0CC4u) {
        ctx->pc = 0x1D0CC4u;
            // 0x1d0cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CC8u;
        goto label_1d0cc8;
    }
    ctx->pc = 0x1D0CC0u;
    SET_GPR_U32(ctx, 31, 0x1D0CC8u);
    ctx->pc = 0x1D0CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CC0u;
            // 0x1d0cc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BE0u;
    if (runtime->hasFunction(0x1D4BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CC8u; }
        if (ctx->pc != 0x1D0CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4BE0_0x1d4be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CC8u; }
        if (ctx->pc != 0x1D0CC8u) { return; }
    }
    ctx->pc = 0x1D0CC8u;
label_1d0cc8:
    // 0x1d0cc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d0ccc:
    if (ctx->pc == 0x1D0CCCu) {
        ctx->pc = 0x1D0CCCu;
            // 0x1d0ccc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CD0u;
        goto label_1d0cd0;
    }
    ctx->pc = 0x1D0CC8u;
    {
        const bool branch_taken_0x1d0cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CC8u;
            // 0x1d0ccc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cc8) {
            ctx->pc = 0x1D0CE0u;
            goto label_1d0ce0;
        }
    }
    ctx->pc = 0x1D0CD0u;
label_1d0cd0:
    // 0x1d0cd0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1d0cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0cd4:
    // 0x1d0cd4: 0xc075452  jal         func_1D5148
label_1d0cd8:
    if (ctx->pc == 0x1D0CD8u) {
        ctx->pc = 0x1D0CD8u;
            // 0x1d0cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CDCu;
        goto label_1d0cdc;
    }
    ctx->pc = 0x1D0CD4u;
    SET_GPR_U32(ctx, 31, 0x1D0CDCu);
    ctx->pc = 0x1D0CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CD4u;
            // 0x1d0cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5148u;
    if (runtime->hasFunction(0x1D5148u)) {
        auto targetFn = runtime->lookupFunction(0x1D5148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CDCu; }
        if (ctx->pc != 0x1D0CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5148_0x1d5148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0CDCu; }
        if (ctx->pc != 0x1D0CDCu) { return; }
    }
    ctx->pc = 0x1D0CDCu;
label_1d0cdc:
    // 0x1d0cdc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d0cdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ce0:
    // 0x1d0ce0: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_1d0ce4:
    if (ctx->pc == 0x1D0CE4u) {
        ctx->pc = 0x1D0CE4u;
            // 0x1d0ce4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1D0CE8u;
        goto label_1d0ce8;
    }
    ctx->pc = 0x1D0CE0u;
    {
        const bool branch_taken_0x1d0ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ce0) {
            ctx->pc = 0x1D0CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CE0u;
            // 0x1d0ce4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D08u;
            goto label_1d0d08;
        }
    }
    ctx->pc = 0x1D0CE8u;
label_1d0ce8:
    // 0x1d0ce8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d0ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0cec:
    // 0x1d0cec: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d0cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0cf0:
    // 0x1d0cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0cf4:
    // 0x1d0cf4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d0cf8:
    // 0x1d0cf8: 0x40f809  jalr        $v0
label_1d0cfc:
    if (ctx->pc == 0x1D0CFCu) {
        ctx->pc = 0x1D0CFCu;
            // 0x1d0cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D0D00u;
        goto label_1d0d00;
    }
    ctx->pc = 0x1D0CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0D00u);
        ctx->pc = 0x1D0CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0CF8u;
            // 0x1d0cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0D00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D00u; }
            if (ctx->pc != 0x1D0D00u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0D00u;
label_1d0d00:
    // 0x1d0d00: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1d0d04:
    if (ctx->pc == 0x1D0D04u) {
        ctx->pc = 0x1D0D04u;
            // 0x1d0d04: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->pc = 0x1D0D08u;
        goto label_1d0d08;
    }
    ctx->pc = 0x1D0D00u;
    {
        const bool branch_taken_0x1d0d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D00u;
            // 0x1d0d04: 0x8e660494  lw          $a2, 0x494($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d00) {
            ctx->pc = 0x1D0D70u;
            goto label_1d0d70;
        }
    }
    ctx->pc = 0x1D0D08u;
label_1d0d08:
    // 0x1d0d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d0d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d0c:
    // 0x1d0d0c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d0d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d10:
    // 0x1d0d10: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1d0d10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d14:
    // 0x1d0d14: 0xc07337e  jal         func_1CCDF8
label_1d0d18:
    if (ctx->pc == 0x1D0D18u) {
        ctx->pc = 0x1D0D18u;
            // 0x1d0d18: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x1D0D1Cu;
        goto label_1d0d1c;
    }
    ctx->pc = 0x1D0D14u;
    SET_GPR_U32(ctx, 31, 0x1D0D1Cu);
    ctx->pc = 0x1D0D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D14u;
            // 0x1d0d18: 0x652823  subu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D1Cu; }
        if (ctx->pc != 0x1D0D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D1Cu; }
        if (ctx->pc != 0x1D0D1Cu) { return; }
    }
    ctx->pc = 0x1D0D1Cu;
label_1d0d1c:
    // 0x1d0d1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0d20:
    // 0x1d0d20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1d0d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d24:
    // 0x1d0d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d28:
    // 0x1d0d28: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1d0d2c:
    // 0x1d0d2c: 0x40f809  jalr        $v0
label_1d0d30:
    if (ctx->pc == 0x1D0D30u) {
        ctx->pc = 0x1D0D30u;
            // 0x1d0d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D34u;
        goto label_1d0d34;
    }
    ctx->pc = 0x1D0D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0D34u);
        ctx->pc = 0x1D0D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D2Cu;
            // 0x1d0d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0D34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D34u; }
            if (ctx->pc != 0x1D0D34u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0D34u;
label_1d0d34:
    // 0x1d0d34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d0d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d0d38:
    // 0x1d0d38: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d0d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d3c:
    // 0x1d0d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d0d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d40:
    // 0x1d0d40: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d0d44:
    // 0x1d0d44: 0x40f809  jalr        $v0
label_1d0d48:
    if (ctx->pc == 0x1D0D48u) {
        ctx->pc = 0x1D0D48u;
            // 0x1d0d48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D0D4Cu;
        goto label_1d0d4c;
    }
    ctx->pc = 0x1D0D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D0D4Cu);
        ctx->pc = 0x1D0D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D44u;
            // 0x1d0d48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0D4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D4Cu; }
            if (ctx->pc != 0x1D0D4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D0D4Cu;
label_1d0d4c:
    // 0x1d0d4c: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x1d0d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_1d0d50:
    // 0x1d0d50: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
label_1d0d54:
    if (ctx->pc == 0x1D0D54u) {
        ctx->pc = 0x1D0D54u;
            // 0x1d0d54: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->pc = 0x1D0D58u;
        goto label_1d0d58;
    }
    ctx->pc = 0x1D0D50u;
    {
        const bool branch_taken_0x1d0d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d50) {
            ctx->pc = 0x1D0D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D50u;
            // 0x1d0d54: 0x8e63049c  lw          $v1, 0x49C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0D74u;
            goto label_1d0d74;
        }
    }
    ctx->pc = 0x1D0D58u;
label_1d0d58:
    // 0x1d0d58: 0xc076e1e  jal         func_1DB878
label_1d0d5c:
    if (ctx->pc == 0x1D0D5Cu) {
        ctx->pc = 0x1D0D5Cu;
            // 0x1d0d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D60u;
        goto label_1d0d60;
    }
    ctx->pc = 0x1D0D58u;
    SET_GPR_U32(ctx, 31, 0x1D0D60u);
    ctx->pc = 0x1D0D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D58u;
            // 0x1d0d5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (runtime->hasFunction(0x1DB878u)) {
        auto targetFn = runtime->lookupFunction(0x1DB878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D60u; }
        if (ctx->pc != 0x1D0D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB878_0x1db878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0D60u; }
        if (ctx->pc != 0x1D0D60u) { return; }
    }
    ctx->pc = 0x1D0D60u;
label_1d0d60:
    // 0x1d0d60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0d64:
    // 0x1d0d64: 0x5600ffa0  bnel        $s0, $zero, . + 4 + (-0x60 << 2)
label_1d0d68:
    if (ctx->pc == 0x1D0D68u) {
        ctx->pc = 0x1D0D68u;
            // 0x1d0d68: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D0D6Cu;
        goto label_1d0d6c;
    }
    ctx->pc = 0x1D0D64u;
    {
        const bool branch_taken_0x1d0d64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d64) {
            ctx->pc = 0x1D0D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0D64u;
            // 0x1d0d68: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D0BE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0be8;
        }
    }
    ctx->pc = 0x1D0D6Cu;
label_1d0d6c:
    // 0x1d0d6c: 0x8e660494  lw          $a2, 0x494($s3)
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1172)));
label_1d0d70:
    // 0x1d0d70: 0x8e63049c  lw          $v1, 0x49C($s3)
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1180)));
label_1d0d74:
    // 0x1d0d74: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1d0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1d0d78:
    // 0x1d0d78: 0x8e6404a0  lw          $a0, 0x4A0($s3)
    ctx->pc = 0x1d0d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1184)));
label_1d0d7c:
    // 0x1d0d7c: 0x6100a  movz        $v0, $zero, $a2
    ctx->pc = 0x1d0d7cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d0d80:
    // 0x1d0d80: 0x8e650498  lw          $a1, 0x498($s3)
    ctx->pc = 0x1d0d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1176)));
label_1d0d84:
    // 0x1d0d84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1d0d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1d0d88:
    // 0x1d0d88: 0xae63049c  sw          $v1, 0x49C($s3)
    ctx->pc = 0x1d0d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1180), GPR_U32(ctx, 3));
label_1d0d8c:
    // 0x1d0d8c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d0d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d0d90:
    // 0x1d0d90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1d0d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0d94:
    // 0x1d0d94: 0xae6404a0  sw          $a0, 0x4A0($s3)
    ctx->pc = 0x1d0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1184), GPR_U32(ctx, 4));
label_1d0d98:
    // 0x1d0d98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1d0d98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1d0d9c:
    // 0x1d0d9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1d0d9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0da0:
    // 0x1d0da0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1d0da0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0da4:
    // 0x1d0da4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1d0da4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d0da8:
    // 0x1d0da8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d0da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d0dac:
    // 0x1d0dac: 0x3e00008  jr          $ra
label_1d0db0:
    if (ctx->pc == 0x1D0DB0u) {
        ctx->pc = 0x1D0DB0u;
            // 0x1d0db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D0DB4u;
        goto label_1d0db4;
    }
    ctx->pc = 0x1D0DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0DACu;
            // 0x1d0db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0DB4u;
label_1d0db4:
    // 0x1d0db4: 0x0  nop
    ctx->pc = 0x1d0db4u;
    // NOP
    ctx->pc = 0x1d0db8u;
}
