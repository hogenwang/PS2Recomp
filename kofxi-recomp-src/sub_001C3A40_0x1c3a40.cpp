#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3A40
// Address: 0x1c3a40 - 0x1c3b08
void sub_001C3A40_0x1c3a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3A40_0x1c3a40");
#endif

    switch (ctx->pc) {
        case 0x1c3a88u: goto label_1c3a88;
        case 0x1c3ab0u: goto label_1c3ab0;
        default: break;
    }

    ctx->pc = 0x1c3a40u;

    // 0x1c3a40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3a44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c3a48: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1c3a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3a50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c3a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c3a58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c3a58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c3a60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c3a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a64: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1c3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1c3a68: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1c3a68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c3a70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c3a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c3a74: 0x1a800018  blez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3A74u;
    {
        const bool branch_taken_0x1c3a74 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1C3A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3A74u;
            // 0x1c3a78: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3a74) {
            ctx->pc = 0x1C3AD8u;
            goto label_1c3ad8;
        }
    }
    ctx->pc = 0x1C3A7Cu;
    // 0x1c3a7c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c3a80: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c3a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a84: 0x2455e990  addiu       $s5, $v0, -0x1670
    ctx->pc = 0x1c3a84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961552));
label_1c3a88:
    // 0x1c3a88: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1c3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1c3a8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c3a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3a90: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x1c3a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1c3a94: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x1c3a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c3a98: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1c3a98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1c3a9c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1c3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1c3aa0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c3aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c3aa4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1c3aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c3aa8: 0xc070d3e  jal         func_1C34F8
    ctx->pc = 0x1C3AA8u;
    SET_GPR_U32(ctx, 31, 0x1C3AB0u);
    ctx->pc = 0x1C3AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AA8u;
            // 0x1c3aac: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C34F8u;
    if (runtime->hasFunction(0x1C34F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C34F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AB0u; }
        if (ctx->pc != 0x1C3AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C34F8_0x1c34f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3AB0u; }
        if (ctx->pc != 0x1C3AB0u) { return; }
    }
    ctx->pc = 0x1C3AB0u;
label_1c3ab0:
    // 0x1c3ab0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3AB0u;
    {
        const bool branch_taken_0x1c3ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AB0u;
            // 0x1c3ab4: 0x214182a  slt         $v1, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ab0) {
            ctx->pc = 0x1C3AD0u;
            goto label_1c3ad0;
        }
    }
    ctx->pc = 0x1C3AB8u;
    // 0x1c3ab8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c3abc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1c3ac0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c3ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c3ac4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3AC4u;
    {
        const bool branch_taken_0x1c3ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AC4u;
            // 0x1c3ac8: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ac4) {
            ctx->pc = 0x1C3AE0u;
            goto label_1c3ae0;
        }
    }
    ctx->pc = 0x1C3ACCu;
    // 0x1c3acc: 0x0  nop
    ctx->pc = 0x1c3accu;
    // NOP
label_1c3ad0:
    // 0x1c3ad0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1C3AD0u;
    {
        const bool branch_taken_0x1c3ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3AD0u;
            // 0x1c3ad4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ad0) {
            ctx->pc = 0x1C3A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c3a88;
        }
    }
    ctx->pc = 0x1C3AD8u;
label_1c3ad8:
    // 0x1c3ad8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1c3ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x1c3adc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1c3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1c3ae0:
    // 0x1c3ae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3ae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3ae8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c3ae8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3aec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c3aecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c3af0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c3af0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3af4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c3af4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3af8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1c3af8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3afc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c3afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3b00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3B00u;
            // 0x1c3b04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3B08u;
    ctx->pc = 0x1c3b08u;
}
