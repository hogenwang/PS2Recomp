#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FB748
// Address: 0x2fb748 - 0x2fb810
void sub_002FB748_0x2fb748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB748_0x2fb748");
#endif

    switch (ctx->pc) {
        case 0x2fb7b4u: goto label_2fb7b4;
        case 0x2fb7dcu: goto label_2fb7dc;
        case 0x2fb7f4u: goto label_2fb7f4;
        default: break;
    }

    ctx->pc = 0x2fb748u;

    // 0x2fb748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb74c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2fb74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2fb750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fb750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fb754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fb754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fb758: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FB758u;
    {
        const bool branch_taken_0x2fb758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FB75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB758u;
            // 0x2fb75c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb758) {
            ctx->pc = 0x2FB7BCu;
            goto label_2fb7bc;
        }
    }
    ctx->pc = 0x2FB760u;
    // 0x2fb760: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2fb760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2fb764: 0x10e20005  beq         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB764u;
    {
        const bool branch_taken_0x2fb764 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB764u;
            // 0x2fb768: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb764) {
            ctx->pc = 0x2FB77Cu;
            goto label_2fb77c;
        }
    }
    ctx->pc = 0x2FB76Cu;
    // 0x2fb76c: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x2fb76cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fb770: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2fb770u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2fb774: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2FB774u;
    {
        const bool branch_taken_0x2fb774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB774u;
            // 0x2fb778: 0x24842d68  addiu       $a0, $a0, 0x2D68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb774) {
            ctx->pc = 0x2FB7D4u;
            goto label_2fb7d4;
        }
    }
    ctx->pc = 0x2FB77Cu;
label_2fb77c:
    // 0x2fb77c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2fb77cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb780: 0x2c420035  sltiu       $v0, $v0, 0x35
    ctx->pc = 0x2fb780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x2fb784: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB784u;
    {
        const bool branch_taken_0x2fb784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB784u;
            // 0x2fb788: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb784) {
            ctx->pc = 0x2FB798u;
            goto label_2fb798;
        }
    }
    ctx->pc = 0x2FB78Cu;
    // 0x2fb78c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x2fb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2fb790: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB790u;
    {
        const bool branch_taken_0x2fb790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB790u;
            // 0x2fb794: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb790) {
            ctx->pc = 0x2FB79Cu;
            goto label_2fb79c;
        }
    }
    ctx->pc = 0x2FB798u;
label_2fb798:
    // 0x2fb798: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2fb798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2fb79c:
    // 0x2fb79c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2fb79cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fb7a0: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x2fb7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb7a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2fb7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7a8: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2fb7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2fb7ac: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2FB7ACu;
    SET_GPR_U32(ctx, 31, 0x2FB7B4u);
    ctx->pc = 0x2FB7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7ACu;
            // 0x2fb7b0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7B4u; }
        if (ctx->pc != 0x2FB7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7B4u; }
        if (ctx->pc != 0x2FB7B4u) { return; }
    }
    ctx->pc = 0x2FB7B4u;
label_2fb7b4:
    // 0x2fb7b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FB7B4u;
    {
        const bool branch_taken_0x2fb7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7B4u;
            // 0x2fb7b8: 0xa200000e  sb          $zero, 0xE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7b4) {
            ctx->pc = 0x2FB7F8u;
            goto label_2fb7f8;
        }
    }
    ctx->pc = 0x2FB7BCu;
label_2fb7bc:
    // 0x2fb7bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2fb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2fb7c0: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FB7C0u;
    {
        const bool branch_taken_0x2fb7c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FB7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7C0u;
            // 0x2fb7c4: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7c0) {
            ctx->pc = 0x2FB7E4u;
            goto label_2fb7e4;
        }
    }
    ctx->pc = 0x2FB7C8u;
    // 0x2fb7c8: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x2fb7c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2fb7cc: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2fb7ccu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2fb7d0: 0x24842d88  addiu       $a0, $a0, 0x2D88
    ctx->pc = 0x2fb7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11656));
label_2fb7d4:
    // 0x2fb7d4: 0xc043e52  jal         func_10F948
    ctx->pc = 0x2FB7D4u;
    SET_GPR_U32(ctx, 31, 0x2FB7DCu);
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7DCu; }
        if (ctx->pc != 0x2FB7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7DCu; }
        if (ctx->pc != 0x2FB7DCu) { return; }
    }
    ctx->pc = 0x2FB7DCu;
label_2fb7dc:
    // 0x2fb7dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB7DCu;
    {
        const bool branch_taken_0x2fb7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7DCu;
            // 0x2fb7e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7dc) {
            ctx->pc = 0x2FB7FCu;
            goto label_2fb7fc;
        }
    }
    ctx->pc = 0x2FB7E4u;
label_2fb7e4:
    // 0x2fb7e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2fb7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fb7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb7ec: 0xc04a966  jal         func_12A598
    ctx->pc = 0x2FB7ECu;
    SET_GPR_U32(ctx, 31, 0x2FB7F4u);
    ctx->pc = 0x2FB7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB7ECu;
            // 0x2fb7f0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7F4u; }
        if (ctx->pc != 0x2FB7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FB7F4u; }
        if (ctx->pc != 0x2FB7F4u) { return; }
    }
    ctx->pc = 0x2FB7F4u;
label_2fb7f4:
    // 0x2fb7f4: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2fb7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
label_2fb7f8:
    // 0x2fb7f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb7f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb7fc:
    // 0x2fb7fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fb7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fb800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb804: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FB804u;
            // 0x2fb808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FB80Cu;
    // 0x2fb80c: 0x0  nop
    ctx->pc = 0x2fb80cu;
    // NOP
    ctx->pc = 0x2fb810u;
}
