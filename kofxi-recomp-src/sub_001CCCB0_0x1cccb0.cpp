#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CCCB0
// Address: 0x1cccb0 - 0x1ccd78
void sub_001CCCB0_0x1cccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CCCB0_0x1cccb0");
#endif

    switch (ctx->pc) {
        case 0x1cccf4u: goto label_1cccf4;
        case 0x1ccd10u: goto label_1ccd10;
        case 0x1ccd40u: goto label_1ccd40;
        case 0x1ccd54u: goto label_1ccd54;
        case 0x1ccd5cu: goto label_1ccd5c;
        case 0x1ccd64u: goto label_1ccd64;
        default: break;
    }

    ctx->pc = 0x1cccb0u;

    // 0x1cccb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cccb4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCCB4u;
    {
        const bool branch_taken_0x1cccb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCB4u;
            // 0x1cccb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccb4) {
            ctx->pc = 0x1CCCD0u;
            goto label_1cccd0;
        }
    }
    ctx->pc = 0x1CCCBCu;
    // 0x1cccbc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1cccc0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1cccc4: 0x2484bcc0  addiu       $a0, $a0, -0x4340
    ctx->pc = 0x1cccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
    // 0x1cccc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCCC8u;
    {
        const bool branch_taken_0x1cccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCC8u;
            // 0x1ccccc: 0x24a5bb70  addiu       $a1, $a1, -0x4490 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccc8) {
            ctx->pc = 0x1CCCECu;
            goto label_1cccec;
        }
    }
    ctx->pc = 0x1CCCD0u;
label_1cccd0:
    // 0x1cccd0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cccd4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCCD4u;
    {
        const bool branch_taken_0x1cccd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cccd4) {
            ctx->pc = 0x1CCCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCD4u;
            // 0x1cccd8: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD00u;
            goto label_1ccd00;
        }
    }
    ctx->pc = 0x1CCCDCu;
    // 0x1cccdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cccdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1ccce0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1ccce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1ccce4: 0x2484bcd0  addiu       $a0, $a0, -0x4330
    ctx->pc = 0x1ccce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950096));
    // 0x1ccce8: 0x24a5bba0  addiu       $a1, $a1, -0x4460
    ctx->pc = 0x1ccce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949792));
label_1cccec:
    // 0x1cccec: 0xc073006  jal         func_1CC018
    ctx->pc = 0x1CCCECu;
    SET_GPR_U32(ctx, 31, 0x1CCCF4u);
    ctx->pc = 0x1CC018u;
    if (runtime->hasFunction(0x1CC018u)) {
        auto targetFn = runtime->lookupFunction(0x1CC018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCF4u; }
        if (ctx->pc != 0x1CCCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC018_0x1cc018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCF4u; }
        if (ctx->pc != 0x1CCCF4u) { return; }
    }
    ctx->pc = 0x1CCCF4u;
label_1cccf4:
    // 0x1cccf4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CCCF4u;
    {
        const bool branch_taken_0x1cccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCF4u;
            // 0x1cccf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccf4) {
            ctx->pc = 0x1CCD30u;
            goto label_1ccd30;
        }
    }
    ctx->pc = 0x1CCCFCu;
    // 0x1cccfc: 0x0  nop
    ctx->pc = 0x1cccfcu;
    // NOP
label_1ccd00:
    // 0x1ccd00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ccd04: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1ccd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1ccd08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCD08u;
    {
        const bool branch_taken_0x1ccd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD08u;
            // 0x1ccd0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd08) {
            ctx->pc = 0x1CCD2Cu;
            goto label_1ccd2c;
        }
    }
    ctx->pc = 0x1CCD10u;
label_1ccd10:
    // 0x1ccd10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ccd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ccd14: 0x0  nop
    ctx->pc = 0x1ccd14u;
    // NOP
    // 0x1ccd18: 0x0  nop
    ctx->pc = 0x1ccd18u;
    // NOP
    // 0x1ccd1c: 0x0  nop
    ctx->pc = 0x1ccd1cu;
    // NOP
    // 0x1ccd20: 0x0  nop
    ctx->pc = 0x1ccd20u;
    // NOP
    // 0x1ccd24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CCD24u;
    {
        const bool branch_taken_0x1ccd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD24u;
            // 0x1ccd28: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccd24) {
            ctx->pc = 0x1CCD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ccd10;
        }
    }
    ctx->pc = 0x1CCD2Cu;
label_1ccd2c:
    // 0x1ccd2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ccd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd30:
    // 0x1ccd30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccd34: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCD34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD34u;
            // 0x1ccd38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCD3Cu;
    // 0x1ccd3c: 0x0  nop
    ctx->pc = 0x1ccd3cu;
    // NOP
label_1ccd40:
    // 0x1ccd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccd44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccd48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccd4c: 0xc0729fa  jal         func_1CA7E8
    ctx->pc = 0x1CCD4Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD54u);
    ctx->pc = 0x1CCD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD4Cu;
            // 0x1ccd50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD54u; }
        if (ctx->pc != 0x1CCD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD54u; }
        if (ctx->pc != 0x1CCD54u) { return; }
    }
    ctx->pc = 0x1CCD54u;
label_1ccd54:
    // 0x1ccd54: 0xc07335e  jal         func_1CCD78
    ctx->pc = 0x1CCD54u;
    SET_GPR_U32(ctx, 31, 0x1CCD5Cu);
    ctx->pc = 0x1CCD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD54u;
            // 0x1ccd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD78u;
    if (runtime->hasFunction(0x1CCD78u)) {
        auto targetFn = runtime->lookupFunction(0x1CCD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD5Cu; }
        if (ctx->pc != 0x1CCD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCD78_0x1ccd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD5Cu; }
        if (ctx->pc != 0x1CCD5Cu) { return; }
    }
    ctx->pc = 0x1CCD5Cu;
label_1ccd5c:
    // 0x1ccd5c: 0xc072a00  jal         func_1CA800
    ctx->pc = 0x1CCD5Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD64u);
    ctx->pc = 0x1CCD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD5Cu;
            // 0x1ccd60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD64u; }
        if (ctx->pc != 0x1CCD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD64u; }
        if (ctx->pc != 0x1CCD64u) { return; }
    }
    ctx->pc = 0x1CCD64u;
label_1ccd64:
    // 0x1ccd64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccd68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ccd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccd6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccd70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD70u;
            // 0x1ccd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CCD78u;
    ctx->pc = 0x1ccd78u;
}
