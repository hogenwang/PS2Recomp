#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FCF28
// Address: 0x2fcf28 - 0x2fcfe0
void sub_002FCF28_0x2fcf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCF28_0x2fcf28");
#endif

    switch (ctx->pc) {
        case 0x2fcf44u: goto label_2fcf44;
        case 0x2fcf50u: goto label_2fcf50;
        case 0x2fcf6cu: goto label_2fcf6c;
        case 0x2fcf90u: goto label_2fcf90;
        case 0x2fcf98u: goto label_2fcf98;
        case 0x2fcfb0u: goto label_2fcfb0;
        case 0x2fcfb8u: goto label_2fcfb8;
        default: break;
    }

    ctx->pc = 0x2fcf28u;

label_2fcf28:
    // 0x2fcf28: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2fcf28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf2c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2fcf2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2fcf30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCF30u;
    {
        const bool branch_taken_0x2fcf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF30u;
            // 0x2fcf34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf30) {
            ctx->pc = 0x2FCF44u;
            goto label_2fcf44;
        }
    }
    ctx->pc = 0x2FCF38u;
    // 0x2fcf38: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2fcf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2fcf3c: 0x80bf394  j           func_2FCE50
    ctx->pc = 0x2FCF3Cu;
    ctx->pc = 0x2FCF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF3Cu;
            // 0x2fcf40: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCE50u;
    {
        auto targetFn = runtime->lookupFunction(0x2FCE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2FCF44u;
label_2fcf44:
    // 0x2fcf44: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF44u;
            // 0x2fcf48: 0xa0620003  sb          $v0, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FCF4Cu;
    // 0x2fcf4c: 0x0  nop
    ctx->pc = 0x2fcf4cu;
    // NOP
label_2fcf50:
    // 0x2fcf50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fcf54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fcf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fcf58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fcf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fcf5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fcf5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fcf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fcf64: 0xc0bf332  jal         func_2FCCC8
    ctx->pc = 0x2FCF64u;
    SET_GPR_U32(ctx, 31, 0x2FCF6Cu);
    ctx->pc = 0x2FCF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF64u;
            // 0x2fcf68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCCC8u;
    if (runtime->hasFunction(0x2FCCC8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF6Cu; }
        if (ctx->pc != 0x2FCF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCCC8_0x2fccc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF6Cu; }
        if (ctx->pc != 0x2FCF6Cu) { return; }
    }
    ctx->pc = 0x2FCF6Cu;
label_2fcf6c:
    // 0x2fcf6c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2fcf6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2fcf70: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2fcf70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2fcf74: 0x602000e  bltzl       $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FCF74u;
    {
        const bool branch_taken_0x2fcf74 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2fcf74) {
            ctx->pc = 0x2FCF78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF74u;
            // 0x2fcf78: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCFB0u;
            goto label_2fcfb0;
        }
    }
    ctx->pc = 0x2FCF7Cu;
    // 0x2fcf7c: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x2fcf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2fcf80: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCF80u;
    {
        const bool branch_taken_0x2fcf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fcf80) {
            ctx->pc = 0x2FCF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF80u;
            // 0x2fcf84: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCFC4u;
            goto label_2fcfc4;
        }
    }
    ctx->pc = 0x2FCF88u;
    // 0x2fcf88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcf8c: 0x0  nop
    ctx->pc = 0x2fcf8cu;
    // NOP
label_2fcf90:
    // 0x2fcf90: 0xc0bf3be  jal         func_2FCEF8
    ctx->pc = 0x2FCF90u;
    SET_GPR_U32(ctx, 31, 0x2FCF98u);
    ctx->pc = 0x2FCF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF90u;
            // 0x2fcf94: 0x2610ffc4  addiu       $s0, $s0, -0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCEF8u;
    if (runtime->hasFunction(0x2FCEF8u)) {
        auto targetFn = runtime->lookupFunction(0x2FCEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF98u; }
        if (ctx->pc != 0x2FCF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FCEF8_0x2fcef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FCF98u; }
        if (ctx->pc != 0x2FCF98u) { return; }
    }
    ctx->pc = 0x2FCF98u;
label_2fcf98:
    // 0x2fcf98: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x2fcf98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2fcf9c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2FCF9Cu;
    {
        const bool branch_taken_0x2fcf9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCF9Cu;
            // 0x2fcfa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcf9c) {
            ctx->pc = 0x2FCF90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fcf90;
        }
    }
    ctx->pc = 0x2FCFA4u;
    // 0x2fcfa4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FCFA4u;
    {
        const bool branch_taken_0x2fcfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFA4u;
            // 0x2fcfa8: 0xa2300002  sb          $s0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcfa4) {
            ctx->pc = 0x2FCFC8u;
            goto label_2fcfc8;
        }
    }
    ctx->pc = 0x2FCFACu;
    // 0x2fcfac: 0x0  nop
    ctx->pc = 0x2fcfacu;
    // NOP
label_2fcfb0:
    // 0x2fcfb0: 0xc0bf3ca  jal         func_2FCF28
    ctx->pc = 0x2FCFB0u;
    SET_GPR_U32(ctx, 31, 0x2FCFB8u);
    ctx->pc = 0x2FCFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFB0u;
            // 0x2fcfb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCF28u;
    goto label_2fcf28;
    ctx->pc = 0x2FCFB8u;
label_2fcfb8:
    // 0x2fcfb8: 0x602fffd  bltzl       $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2FCFB8u;
    {
        const bool branch_taken_0x2fcfb8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2fcfb8) {
            ctx->pc = 0x2FCFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFB8u;
            // 0x2fcfbc: 0x2610003c  addiu       $s0, $s0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2FCFB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fcfb0;
        }
    }
    ctx->pc = 0x2FCFC0u;
    // 0x2fcfc0: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x2fcfc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
label_2fcfc4:
    // 0x2fcfc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fcfc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fcfc8:
    // 0x2fcfc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fcfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcfcc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fcfccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcfd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fcfd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcfd4: 0x80bf34c  j           func_2FCD30
    ctx->pc = 0x2FCFD4u;
    ctx->pc = 0x2FCFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FCFD4u;
            // 0x2fcfd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FCD30u;
    {
        auto targetFn = runtime->lookupFunction(0x2FCD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2FCFDCu;
    // 0x2fcfdc: 0x0  nop
    ctx->pc = 0x2fcfdcu;
    // NOP
    ctx->pc = 0x2fcfe0u;
}
