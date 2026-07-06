#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED718
// Address: 0x2ed718 - 0x2ed7f0
void sub_002ED718_0x2ed718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED718_0x2ed718");
#endif

    switch (ctx->pc) {
        case 0x2ed764u: goto label_2ed764;
        case 0x2ed790u: goto label_2ed790;
        case 0x2ed798u: goto label_2ed798;
        case 0x2ed79cu: goto label_2ed79c;
        case 0x2ed7a8u: goto label_2ed7a8;
        default: break;
    }

    ctx->pc = 0x2ed718u;

    // 0x2ed718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed71c: 0x30cc00ff  andi        $t4, $a2, 0xFF
    ctx->pc = 0x2ed71cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2ed720: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2ed720u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed728: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ed728u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed72c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed730: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2ed730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed734: 0x2405056b  addiu       $a1, $zero, 0x56B
    ctx->pc = 0x2ed734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1387));
    // 0x2ed738: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x2ed738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x2ed73c: 0x2d8f0010  sltiu       $t7, $t4, 0x10
    ctx->pc = 0x2ed73cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2ed740: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED740u;
    {
        const bool branch_taken_0x2ed740 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED740u;
            // 0x2ed744: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed740) {
            ctx->pc = 0x2ED764u;
            goto label_2ed764;
        }
    }
    ctx->pc = 0x2ED748u;
    // 0x2ed748: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed750: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed750u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed754: 0x24840b70  addiu       $a0, $a0, 0xB70
    ctx->pc = 0x2ed754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2928));
    // 0x2ed758: 0x25080b88  addiu       $t0, $t0, 0xB88
    ctx->pc = 0x2ed758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2952));
    // 0x2ed75c: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2ED75Cu;
    ctx->pc = 0x2ED760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED75Cu;
            // 0x2ed760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2ED764u;
label_2ed764:
    // 0x2ed764: 0x3c0e003c  lui         $t6, 0x3C
    ctx->pc = 0x2ed764u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x2ed768: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ed768u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed76c: 0x8dcdeca8  lw          $t5, -0x1358($t6)
    ctx->pc = 0x2ed76cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294962344)));
    // 0x2ed770: 0x11af000d  beq         $t5, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED770u;
    {
        const bool branch_taken_0x2ed770 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED770u;
            // 0x2ed774: 0x25ceeca8  addiu       $t6, $t6, -0x1358 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294962344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed770) {
            ctx->pc = 0x2ED7A8u;
            goto label_2ed7a8;
        }
    }
    ctx->pc = 0x2ED778u;
    // 0x2ed778: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed77c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ed77cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ed780: 0x24840b70  addiu       $a0, $a0, 0xB70
    ctx->pc = 0x2ed780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2928));
    // 0x2ed784: 0x24050570  addiu       $a1, $zero, 0x570
    ctx->pc = 0x2ed784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    // 0x2ed788: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ed788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed78c: 0x24e70ba0  addiu       $a3, $a3, 0xBA0
    ctx->pc = 0x2ed78cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2976));
label_2ed790:
    // 0x2ed790: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ED790u;
    SET_GPR_U32(ctx, 31, 0x2ED798u);
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED798u; }
        if (ctx->pc != 0x2ED798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED798u; }
        if (ctx->pc != 0x2ED798u) { return; }
    }
    ctx->pc = 0x2ED798u;
label_2ed798:
    // 0x2ed798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed79c:
    // 0x2ed79c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7A0u;
            // 0x2ed7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED7A8u;
label_2ed7a8:
    // 0x2ed7a8: 0x8dcf0004  lw          $t7, 0x4($t6)
    ctx->pc = 0x2ed7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x2ed7ac: 0x55ed0008  bnel        $t7, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED7ACu;
    {
        const bool branch_taken_0x2ed7ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        if (branch_taken_0x2ed7ac) {
            ctx->pc = 0x2ED7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7ACu;
            // 0x2ed7b0: 0x8dcf038c  lw          $t7, 0x38C($t6) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 908)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED7D0u;
            goto label_2ed7d0;
        }
    }
    ctx->pc = 0x2ED7B4u;
    // 0x2ed7b4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed7b8: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ed7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ed7bc: 0x24840b70  addiu       $a0, $a0, 0xB70
    ctx->pc = 0x2ed7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2928));
    // 0x2ed7c0: 0x24050577  addiu       $a1, $zero, 0x577
    ctx->pc = 0x2ed7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    // 0x2ed7c4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2ed7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed7c8: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x2ED7C8u;
    {
        const bool branch_taken_0x2ed7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7C8u;
            // 0x2ed7cc: 0x24e70bb8  addiu       $a3, $a3, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7c8) {
            ctx->pc = 0x2ED790u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed790;
        }
    }
    ctx->pc = 0x2ED7D0u;
label_2ed7d0:
    // 0x2ed7d0: 0x15e0fff2  bnez        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x2ED7D0u;
    {
        const bool branch_taken_0x2ed7d0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7D0u;
            // 0x2ed7d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7d0) {
            ctx->pc = 0x2ED79Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed79c;
        }
    }
    ctx->pc = 0x2ED7D8u;
    // 0x2ed7d8: 0x91c500b0  lbu         $a1, 0xB0($t6)
    ctx->pc = 0x2ed7d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 176)));
    // 0x2ed7dc: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x2ed7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7e0: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2ed7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7e4: 0x80bc4a8  j           func_2F12A0
    ctx->pc = 0x2ED7E4u;
    ctx->pc = 0x2ED7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED7E4u;
            // 0x2ed7e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F12A0u;
    {
        auto targetFn = runtime->lookupFunction(0x2F12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2ED7ECu;
    // 0x2ed7ec: 0x0  nop
    ctx->pc = 0x2ed7ecu;
    // NOP
    ctx->pc = 0x2ed7f0u;
}
