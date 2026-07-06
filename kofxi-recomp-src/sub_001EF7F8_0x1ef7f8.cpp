#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF7F8
// Address: 0x1ef7f8 - 0x1ef8e8
void sub_001EF7F8_0x1ef7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF7F8_0x1ef7f8");
#endif

    switch (ctx->pc) {
        case 0x1ef850u: goto label_1ef850;
        case 0x1ef880u: goto label_1ef880;
        case 0x1ef898u: goto label_1ef898;
        case 0x1ef8b4u: goto label_1ef8b4;
        case 0x1ef8d8u: goto label_1ef8d8;
        default: break;
    }

    ctx->pc = 0x1ef7f8u;

    // 0x1ef7f8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1ef7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1ef7fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ef7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef800: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ef800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef804: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ef804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ef808: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ef808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef80c: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x1ef80cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x1ef810: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1ef810u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1ef814: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x1ef814u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x1ef818: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x1ef818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ef81c: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x1ef81cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
    // 0x1ef820: 0x24a6014c  addiu       $a2, $a1, 0x14C
    ctx->pc = 0x1ef820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 332));
    // 0x1ef824: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1ef824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1ef828: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1ef828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1ef82c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x1ef82cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x1ef830: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x1ef830u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x1ef834: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x1ef834u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x1ef838: 0xaca20024  sw          $v0, 0x24($a1)
    ctx->pc = 0x1ef838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 2));
    // 0x1ef83c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1ef83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1ef840: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x1ef840u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x1ef844: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x1ef844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x1ef848: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x1ef848u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x1ef84c: 0x0  nop
    ctx->pc = 0x1ef84cu;
    // NOP
label_1ef850:
    // 0x1ef850: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1ef850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1ef854: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ef854u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1ef858: 0x0  nop
    ctx->pc = 0x1ef858u;
    // NOP
    // 0x1ef85c: 0x0  nop
    ctx->pc = 0x1ef85cu;
    // NOP
    // 0x1ef860: 0x0  nop
    ctx->pc = 0x1ef860u;
    // NOP
    // 0x1ef864: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF864u;
    {
        const bool branch_taken_0x1ef864 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1EF868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF864u;
            // 0x1ef868: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef864) {
            ctx->pc = 0x1EF850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ef850;
        }
    }
    ctx->pc = 0x1EF86Cu;
    // 0x1ef86c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef870: 0xaca00150  sw          $zero, 0x150($a1)
    ctx->pc = 0x1ef870u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 336), GPR_U32(ctx, 0));
    // 0x1ef874: 0xaca20158  sw          $v0, 0x158($a1)
    ctx->pc = 0x1ef874u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 2));
    // 0x1ef878: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF878u;
            // 0x1ef87c: 0xaca00154  sw          $zero, 0x154($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF880u;
label_1ef880:
    // 0x1ef880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef88c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF88Cu;
    ctx->pc = 0x1EF890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF88Cu;
            // 0x1ef890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1EF894u;
    // 0x1ef894: 0x0  nop
    ctx->pc = 0x1ef894u;
    // NOP
label_1ef898:
    // 0x1ef898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ef89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ef89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ef8a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ef8a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ef8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ef8a8: 0x8e021fd4  lw          $v0, 0x1FD4($s0)
    ctx->pc = 0x1ef8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8148)));
    // 0x1ef8ac: 0xc07be3a  jal         func_1EF8E8
    ctx->pc = 0x1EF8ACu;
    SET_GPR_U32(ctx, 31, 0x1EF8B4u);
    ctx->pc = 0x1EF8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8ACu;
            // 0x1ef8b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF8E8u;
    if (runtime->hasFunction(0x1EF8E8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8B4u; }
        if (ctx->pc != 0x1EF8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EF8E8_0x1ef8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8B4u; }
        if (ctx->pc != 0x1EF8B4u) { return; }
    }
    ctx->pc = 0x1EF8B4u;
label_1ef8b4:
    // 0x1ef8b4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ef8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ef8b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF8B8u;
    {
        const bool branch_taken_0x1ef8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8B8u;
            // 0x1ef8bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8b8) {
            ctx->pc = 0x1EF8D8u;
            goto label_1ef8d8;
        }
    }
    ctx->pc = 0x1EF8C0u;
    // 0x1ef8c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef8c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef8c4: 0x34a50d0a  ori         $a1, $a1, 0xD0A
    ctx->pc = 0x1ef8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3338);
    // 0x1ef8c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef8cc: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EF8CCu;
    ctx->pc = 0x1EF8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8CCu;
            // 0x1ef8d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1EF8D4u;
    // 0x1ef8d4: 0x0  nop
    ctx->pc = 0x1ef8d4u;
    // NOP
label_1ef8d8:
    // 0x1ef8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ef8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef8dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ef8dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8E0u;
            // 0x1ef8e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF8E8u;
    ctx->pc = 0x1ef8e8u;
}
