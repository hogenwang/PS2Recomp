#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CAA88
// Address: 0x2caa88 - 0x2cac20
void sub_002CAA88_0x2caa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA88_0x2caa88");
#endif

    switch (ctx->pc) {
        case 0x2caabcu: goto label_2caabc;
        case 0x2caad0u: goto label_2caad0;
        case 0x2caadcu: goto label_2caadc;
        case 0x2caae8u: goto label_2caae8;
        case 0x2caaf0u: goto label_2caaf0;
        case 0x2cab10u: goto label_2cab10;
        case 0x2cab18u: goto label_2cab18;
        case 0x2cab30u: goto label_2cab30;
        case 0x2cab38u: goto label_2cab38;
        case 0x2cab58u: goto label_2cab58;
        case 0x2cab98u: goto label_2cab98;
        case 0x2caba8u: goto label_2caba8;
        case 0x2cabb4u: goto label_2cabb4;
        case 0x2cabc0u: goto label_2cabc0;
        case 0x2cabc8u: goto label_2cabc8;
        case 0x2cabe8u: goto label_2cabe8;
        case 0x2cabf0u: goto label_2cabf0;
        case 0x2cabfcu: goto label_2cabfc;
        default: break;
    }

    ctx->pc = 0x2caa88u;

    // 0x2caa88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2caa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2caa8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2caa8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa90: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2caa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2caa94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2caa94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caa98: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2caa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2caa9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2caa9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaa0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2caaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2caaa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2caaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaa8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2caaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2caaac: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2caaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2caab0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2caab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2caab4: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CAAB4u;
    SET_GPR_U32(ctx, 31, 0x2CAABCu);
    ctx->pc = 0x2CAAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAB4u;
            // 0x2caab8: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAABCu; }
        if (ctx->pc != 0x2CAABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAABCu; }
        if (ctx->pc != 0x2CAABCu) { return; }
    }
    ctx->pc = 0x2CAABCu;
label_2caabc:
    // 0x2caabc: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2caabcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2caac0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2caac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2caac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2caac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caac8: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CAAC8u;
    SET_GPR_U32(ctx, 31, 0x2CAAD0u);
    ctx->pc = 0x2CAACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAC8u;
            // 0x2caacc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAD0u; }
        if (ctx->pc != 0x2CAAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAD0u; }
        if (ctx->pc != 0x2CAAD0u) { return; }
    }
    ctx->pc = 0x2CAAD0u;
label_2caad0:
    // 0x2caad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2caad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caad4: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2CAAD4u;
    SET_GPR_U32(ctx, 31, 0x2CAADCu);
    ctx->pc = 0x2CAAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAD4u;
            // 0x2caad8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (runtime->hasFunction(0x2CAC20u)) {
        auto targetFn = runtime->lookupFunction(0x2CAC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAADCu; }
        if (ctx->pc != 0x2CAADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAC20_0x2cac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAADCu; }
        if (ctx->pc != 0x2CAADCu) { return; }
    }
    ctx->pc = 0x2CAADCu;
label_2caadc:
    // 0x2caadc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2caadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caae0: 0xc0b385e  jal         func_2CE178
    ctx->pc = 0x2CAAE0u;
    SET_GPR_U32(ctx, 31, 0x2CAAE8u);
    ctx->pc = 0x2CAAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAE0u;
            // 0x2caae4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE178u;
    if (runtime->hasFunction(0x2CE178u)) {
        auto targetFn = runtime->lookupFunction(0x2CE178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAE8u; }
        if (ctx->pc != 0x2CAAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE178_0x2ce178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAE8u; }
        if (ctx->pc != 0x2CAAE8u) { return; }
    }
    ctx->pc = 0x2CAAE8u;
label_2caae8:
    // 0x2caae8: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2CAAE8u;
    SET_GPR_U32(ctx, 31, 0x2CAAF0u);
    ctx->pc = 0x2CAAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAAE8u;
            // 0x2caaec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAF0u; }
        if (ctx->pc != 0x2CAAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAAF0u; }
        if (ctx->pc != 0x2CAAF0u) { return; }
    }
    ctx->pc = 0x2CAAF0u;
label_2caaf0:
    // 0x2caaf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2caaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2caaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2caaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caafc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2caafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab00: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2CAB00u;
    {
        const bool branch_taken_0x2cab00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB00u;
            // 0x2cab04: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab00) {
            ctx->pc = 0x2CAB38u;
            goto label_2cab38;
        }
    }
    ctx->pc = 0x2CAB08u;
    // 0x2cab08: 0xc0b38fa  jal         func_2CE3E8
    ctx->pc = 0x2CAB08u;
    SET_GPR_U32(ctx, 31, 0x2CAB10u);
    ctx->pc = 0x2CAB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB08u;
            // 0x2cab0c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE3E8u;
    if (runtime->hasFunction(0x2CE3E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB10u; }
        if (ctx->pc != 0x2CAB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE3E8_0x2ce3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB10u; }
        if (ctx->pc != 0x2CAB10u) { return; }
    }
    ctx->pc = 0x2CAB10u;
label_2cab10:
    // 0x2cab10: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2CAB10u;
    SET_GPR_U32(ctx, 31, 0x2CAB18u);
    ctx->pc = 0x2CAB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB10u;
            // 0x2cab14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB18u; }
        if (ctx->pc != 0x2CAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB18u; }
        if (ctx->pc != 0x2CAB18u) { return; }
    }
    ctx->pc = 0x2CAB18u;
label_2cab18:
    // 0x2cab18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cab18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cab20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAB20u;
    {
        const bool branch_taken_0x2cab20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB20u;
            // 0x2cab24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab20) {
            ctx->pc = 0x2CAB30u;
            goto label_2cab30;
        }
    }
    ctx->pc = 0x2CAB28u;
    // 0x2cab28: 0xc0b60dc  jal         func_2D8370
    ctx->pc = 0x2CAB28u;
    SET_GPR_U32(ctx, 31, 0x2CAB30u);
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB30u; }
        if (ctx->pc != 0x2CAB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB30u; }
        if (ctx->pc != 0x2CAB30u) { return; }
    }
    ctx->pc = 0x2CAB30u;
label_2cab30:
    // 0x2cab30: 0xc0b3872  jal         func_2CE1C8
    ctx->pc = 0x2CAB30u;
    SET_GPR_U32(ctx, 31, 0x2CAB38u);
    ctx->pc = 0x2CAB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB30u;
            // 0x2cab34: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE1C8u;
    if (runtime->hasFunction(0x2CE1C8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB38u; }
        if (ctx->pc != 0x2CAB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE1C8_0x2ce1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB38u; }
        if (ctx->pc != 0x2CAB38u) { return; }
    }
    ctx->pc = 0x2CAB38u;
label_2cab38:
    // 0x2cab38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cab38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab3c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2cab3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cab40: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2cab40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cab44: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2cab44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cab48: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2cab48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cab4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2cab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cab50: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB50u;
            // 0x2cab54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAB58u;
label_2cab58:
    // 0x2cab58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2cab5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cab5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab60: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cab64: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2cab64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cab68: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2cab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2cab6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cab6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab70: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2cab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2cab74: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2cab74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cab78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab7c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2cab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cab80: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2cab84: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cab84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab88: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2cab8c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2cab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2cab90: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CAB90u;
    SET_GPR_U32(ctx, 31, 0x2CAB98u);
    ctx->pc = 0x2CAB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAB90u;
            // 0x2cab94: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB98u; }
        if (ctx->pc != 0x2CAB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAB98u; }
        if (ctx->pc != 0x2CAB98u) { return; }
    }
    ctx->pc = 0x2CAB98u;
label_2cab98:
    // 0x2cab98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab9c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2cab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2caba0: 0xc0b608e  jal         func_2D8238
    ctx->pc = 0x2CABA0u;
    SET_GPR_U32(ctx, 31, 0x2CABA8u);
    ctx->pc = 0x2CABA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABA0u;
            // 0x2caba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABA8u; }
        if (ctx->pc != 0x2CABA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABA8u; }
        if (ctx->pc != 0x2CABA8u) { return; }
    }
    ctx->pc = 0x2CABA8u;
label_2caba8:
    // 0x2caba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2caba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabac: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2CABACu;
    SET_GPR_U32(ctx, 31, 0x2CABB4u);
    ctx->pc = 0x2CABB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABACu;
            // 0x2cabb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (runtime->hasFunction(0x2CAC20u)) {
        auto targetFn = runtime->lookupFunction(0x2CAC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABB4u; }
        if (ctx->pc != 0x2CABB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CAC20_0x2cac20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABB4u; }
        if (ctx->pc != 0x2CABB4u) { return; }
    }
    ctx->pc = 0x2CABB4u;
label_2cabb4:
    // 0x2cabb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cabb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabb8: 0xc0b385e  jal         func_2CE178
    ctx->pc = 0x2CABB8u;
    SET_GPR_U32(ctx, 31, 0x2CABC0u);
    ctx->pc = 0x2CABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABB8u;
            // 0x2cabbc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE178u;
    if (runtime->hasFunction(0x2CE178u)) {
        auto targetFn = runtime->lookupFunction(0x2CE178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABC0u; }
        if (ctx->pc != 0x2CABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE178_0x2ce178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABC0u; }
        if (ctx->pc != 0x2CABC0u) { return; }
    }
    ctx->pc = 0x2CABC0u;
label_2cabc0:
    // 0x2cabc0: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2CABC0u;
    SET_GPR_U32(ctx, 31, 0x2CABC8u);
    ctx->pc = 0x2CABC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABC0u;
            // 0x2cabc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABC8u; }
        if (ctx->pc != 0x2CABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABC8u; }
        if (ctx->pc != 0x2CABC8u) { return; }
    }
    ctx->pc = 0x2CABC8u;
label_2cabc8:
    // 0x2cabc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2cabc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cabccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabd0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2cabd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabd4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2cabd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabd8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CABD8u;
    {
        const bool branch_taken_0x2cabd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CABDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABD8u;
            // 0x2cabdc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cabd8) {
            ctx->pc = 0x2CABFCu;
            goto label_2cabfc;
        }
    }
    ctx->pc = 0x2CABE0u;
    // 0x2cabe0: 0xc0b38fa  jal         func_2CE3E8
    ctx->pc = 0x2CABE0u;
    SET_GPR_U32(ctx, 31, 0x2CABE8u);
    ctx->pc = 0x2CE3E8u;
    if (runtime->hasFunction(0x2CE3E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABE8u; }
        if (ctx->pc != 0x2CABE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE3E8_0x2ce3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABE8u; }
        if (ctx->pc != 0x2CABE8u) { return; }
    }
    ctx->pc = 0x2CABE8u;
label_2cabe8:
    // 0x2cabe8: 0xc0b29f8  jal         func_2CA7E0
    ctx->pc = 0x2CABE8u;
    SET_GPR_U32(ctx, 31, 0x2CABF0u);
    ctx->pc = 0x2CABECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABE8u;
            // 0x2cabec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7E0u;
    if (runtime->hasFunction(0x2CA7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABF0u; }
        if (ctx->pc != 0x2CABF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CA7E0_0x2ca7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABF0u; }
        if (ctx->pc != 0x2CABF0u) { return; }
    }
    ctx->pc = 0x2CABF0u;
label_2cabf0:
    // 0x2cabf0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cabf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cabf4: 0xc0b3872  jal         func_2CE1C8
    ctx->pc = 0x2CABF4u;
    SET_GPR_U32(ctx, 31, 0x2CABFCu);
    ctx->pc = 0x2CABF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CABF4u;
            // 0x2cabf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE1C8u;
    if (runtime->hasFunction(0x2CE1C8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABFCu; }
        if (ctx->pc != 0x2CABFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE1C8_0x2ce1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CABFCu; }
        if (ctx->pc != 0x2CABFCu) { return; }
    }
    ctx->pc = 0x2CABFCu;
label_2cabfc:
    // 0x2cabfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cabfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cac00: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2cac00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cac04: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2cac04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cac08: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2cac08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cac0c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2cac0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cac10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2cac10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cac14: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2cac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cac18: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAC18u;
            // 0x2cac1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CAC20u;
    ctx->pc = 0x2cac20u;
}
