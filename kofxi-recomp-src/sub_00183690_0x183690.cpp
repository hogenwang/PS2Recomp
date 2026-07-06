#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183690
// Address: 0x183690 - 0x183740
void sub_00183690_0x183690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183690_0x183690");
#endif

    switch (ctx->pc) {
        case 0x1836d0u: goto label_1836d0;
        case 0x1836e4u: goto label_1836e4;
        default: break;
    }

    ctx->pc = 0x183690u;

    // 0x183690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x183690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x183694: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x183694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x183698: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x183698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18369c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18369cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1836a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1836a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1836a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1836a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1836a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1836a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1836ac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1836acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1836b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1836b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1836b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1836b8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1836b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1836bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1836bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1836c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1836c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1836c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1836c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1836C8u;
    {
        const bool branch_taken_0x1836c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836C8u;
            // 0x1836cc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836c8) {
            ctx->pc = 0x183700u;
            goto label_183700;
        }
    }
    ctx->pc = 0x1836D0u;
label_1836d0:
    // 0x1836d0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1836D0u;
    {
        const bool branch_taken_0x1836d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1836d0) {
            ctx->pc = 0x1836D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1836D0u;
            // 0x1836d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1836F8u;
            goto label_1836f8;
        }
    }
    ctx->pc = 0x1836D8u;
    // 0x1836d8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1836d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1836dc: 0xc060cd0  jal         func_183340
    ctx->pc = 0x1836DCu;
    SET_GPR_U32(ctx, 31, 0x1836E4u);
    ctx->pc = 0x1836E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1836DCu;
            // 0x1836e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183340u;
    if (runtime->hasFunction(0x183340u)) {
        auto targetFn = runtime->lookupFunction(0x183340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836E4u; }
        if (ctx->pc != 0x1836E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183340_0x183340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1836E4u; }
        if (ctx->pc != 0x1836E4u) { return; }
    }
    ctx->pc = 0x1836E4u;
label_1836e4:
    // 0x1836e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1836E4u;
    {
        const bool branch_taken_0x1836e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1836e4) {
            ctx->pc = 0x1836F4u;
            goto label_1836f4;
        }
    }
    ctx->pc = 0x1836ECu;
    // 0x1836ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1836ECu;
    {
        const bool branch_taken_0x1836ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1836ECu;
            // 0x1836f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836ec) {
            ctx->pc = 0x183728u;
            goto label_183728;
        }
    }
    ctx->pc = 0x1836F4u;
label_1836f4:
    // 0x1836f4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1836f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1836f8:
    // 0x1836f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1836f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1836fc: 0x0  nop
    ctx->pc = 0x1836fcu;
    // NOP
label_183700:
    // 0x183700: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x183700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x183704: 0x9043f35b  lbu         $v1, -0xCA5($v0)
    ctx->pc = 0x183704u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x183708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18370c: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18370Cu;
    {
        const bool branch_taken_0x18370c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18370c) {
            ctx->pc = 0x183710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18370Cu;
            // 0x183710: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183718u;
            goto label_183718;
        }
    }
    ctx->pc = 0x183714u;
    // 0x183714: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x183714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_183718:
    // 0x183718: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x183718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18371c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18371Cu;
    {
        const bool branch_taken_0x18371c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18371c) {
            ctx->pc = 0x183720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18371Cu;
            // 0x183720: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1836D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1836d0;
        }
    }
    ctx->pc = 0x183724u;
    // 0x183724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x183724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183728:
    // 0x183728: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x183728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18372c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18372cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183738: 0x3e00008  jr          $ra
    ctx->pc = 0x183738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183738u;
            // 0x18373c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183740u;
    ctx->pc = 0x183740u;
}
