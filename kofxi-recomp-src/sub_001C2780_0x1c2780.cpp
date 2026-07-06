#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C2780
// Address: 0x1c2780 - 0x1c2828
void sub_001C2780_0x1c2780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2780_0x1c2780");
#endif

    switch (ctx->pc) {
        case 0x1c27a0u: goto label_1c27a0;
        case 0x1c27b4u: goto label_1c27b4;
        case 0x1c27c0u: goto label_1c27c0;
        case 0x1c27d8u: goto label_1c27d8;
        case 0x1c27f0u: goto label_1c27f0;
        default: break;
    }

    ctx->pc = 0x1c2780u;

    // 0x1c2780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c2784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c2788: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2788u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c278c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1c278cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1c2790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c2790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c2794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c2794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c2798: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C2798u;
    SET_GPR_U32(ctx, 31, 0x1C27A0u);
    ctx->pc = 0x1C279Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2798u;
            // 0x1c279c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27A0u; }
        if (ctx->pc != 0x1C27A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27A0u; }
        if (ctx->pc != 0x1C27A0u) { return; }
    }
    ctx->pc = 0x1C27A0u;
label_1c27a0:
    // 0x1c27a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c27a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c27a4: 0x8c46dcac  lw          $a2, -0x2354($v0)
    ctx->pc = 0x1c27a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958252)));
    // 0x1c27a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c27a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27ac: 0xc046d18  jal         func_11B460
    ctx->pc = 0x1C27ACu;
    SET_GPR_U32(ctx, 31, 0x1C27B4u);
    ctx->pc = 0x1C27B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27ACu;
            // 0x1c27b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B460u;
    if (runtime->hasFunction(0x11B460u)) {
        auto targetFn = runtime->lookupFunction(0x11B460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27B4u; }
        if (ctx->pc != 0x1C27B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B460_0x11b460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27B4u; }
        if (ctx->pc != 0x1C27B4u) { return; }
    }
    ctx->pc = 0x1C27B4u;
label_1c27b4:
    // 0x1c27b4: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x1c27b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1c27b8: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C27B8u;
    SET_GPR_U32(ctx, 31, 0x1C27C0u);
    ctx->pc = 0x1C27BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27B8u;
            // 0x1c27bc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (runtime->hasFunction(0x1C1330u)) {
        auto targetFn = runtime->lookupFunction(0x1C1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27C0u; }
        if (ctx->pc != 0x1C27C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1330_0x1c1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C27C0u; }
        if (ctx->pc != 0x1C27C0u) { return; }
    }
    ctx->pc = 0x1C27C0u;
label_1c27c0:
    // 0x1c27c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c27c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c27c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c27c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c27c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c27cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c27ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c27d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C27D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C27D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27D0u;
            // 0x1c27d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C27D8u;
label_1c27d8:
    // 0x1c27d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c27dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c27dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c27e0: 0x2444dd20  addiu       $a0, $v0, -0x22E0
    ctx->pc = 0x1c27e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958368));
    // 0x1c27e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c27e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c27e8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c27e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c27ec: 0x0  nop
    ctx->pc = 0x1c27ecu;
    // NOP
label_1c27f0:
    // 0x1c27f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c27f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c27f4: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C27F4u;
    {
        const bool branch_taken_0x1c27f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1c27f4) {
            ctx->pc = 0x1C27F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C27F4u;
            // 0x1c27f8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C280Cu;
            goto label_1c280c;
        }
    }
    ctx->pc = 0x1C27FCu;
    // 0x1c27fc: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c2800: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2800u;
    {
        const bool branch_taken_0x1c2800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C2804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2800u;
            // 0x1c2804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2800) {
            ctx->pc = 0x1C2820u;
            goto label_1c2820;
        }
    }
    ctx->pc = 0x1C2808u;
    // 0x1c2808: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c2808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c280c:
    // 0x1c280c: 0x28a20028  slti        $v0, $a1, 0x28
    ctx->pc = 0x1c280cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x1c2810: 0x0  nop
    ctx->pc = 0x1c2810u;
    // NOP
    // 0x1c2814: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C2814u;
    {
        const bool branch_taken_0x1c2814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C2814u;
            // 0x1c2818: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2814) {
            ctx->pc = 0x1C27F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c27f0;
        }
    }
    ctx->pc = 0x1C281Cu;
    // 0x1c281c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c281cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2820:
    // 0x1c2820: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C2828u;
    ctx->pc = 0x1c2828u;
}
