#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF630
// Address: 0x1ef630 - 0x1ef6e8
void sub_001EF630_0x1ef630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF630_0x1ef630");
#endif

    switch (ctx->pc) {
        case 0x1ef658u: goto label_1ef658;
        case 0x1ef67cu: goto label_1ef67c;
        case 0x1ef6ccu: goto label_1ef6cc;
        default: break;
    }

    ctx->pc = 0x1ef630u;

    // 0x1ef630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ef630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ef634: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ef634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ef638: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ef638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ef63c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ef63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef640: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ef640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ef644: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ef644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef648: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ef648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ef64c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ef64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ef650: 0xc07bebc  jal         func_1EFAF0
    ctx->pc = 0x1EF650u;
    SET_GPR_U32(ctx, 31, 0x1EF658u);
    ctx->pc = 0x1EF654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF650u;
            // 0x1ef654: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFAF0u;
    if (runtime->hasFunction(0x1EFAF0u)) {
        auto targetFn = runtime->lookupFunction(0x1EFAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF658u; }
        if (ctx->pc != 0x1EF658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFAF0_0x1efaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF658u; }
        if (ctx->pc != 0x1EF658u) { return; }
    }
    ctx->pc = 0x1EF658u;
label_1ef658:
    // 0x1ef658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef65c: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1EF65Cu;
    {
        const bool branch_taken_0x1ef65c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef65c) {
            ctx->pc = 0x1EF660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF65Cu;
            // 0x1ef660: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF6D0u;
            goto label_1ef6d0;
        }
    }
    ctx->pc = 0x1EF664u;
    // 0x1ef664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef668: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EF668u;
    {
        const bool branch_taken_0x1ef668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef668) {
            ctx->pc = 0x1EF66Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF668u;
            // 0x1ef66c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF6D0u;
            goto label_1ef6d0;
        }
    }
    ctx->pc = 0x1EF670u;
    // 0x1ef670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ef670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef674: 0xc07611e  jal         func_1D8478
    ctx->pc = 0x1EF674u;
    SET_GPR_U32(ctx, 31, 0x1EF67Cu);
    ctx->pc = 0x1EF678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF674u;
            // 0x1ef678: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8478u;
    if (runtime->hasFunction(0x1D8478u)) {
        auto targetFn = runtime->lookupFunction(0x1D8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF67Cu; }
        if (ctx->pc != 0x1EF67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8478_0x1d8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF67Cu; }
        if (ctx->pc != 0x1EF67Cu) { return; }
    }
    ctx->pc = 0x1EF67Cu;
label_1ef67c:
    // 0x1ef67c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ef67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef680: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1ef680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef684: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1ef684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1ef688: 0x28e300b1  slti        $v1, $a3, 0xB1
    ctx->pc = 0x1ef688u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)177) ? 1 : 0);
    // 0x1ef68c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ef690: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x1ef690u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x1ef694: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x1ef694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1ef698: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ef698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef69c: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF69Cu;
    {
        const bool branch_taken_0x1ef69c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1EF6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF69Cu;
            // 0x1ef6a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef69c) {
            ctx->pc = 0x1EF6B0u;
            goto label_1ef6b0;
        }
    }
    ctx->pc = 0x1EF6A4u;
    // 0x1ef6a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF6A4u;
    {
        const bool branch_taken_0x1ef6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6A4u;
            // 0x1ef6a8: 0xac670160  sw          $a3, 0x160($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6a4) {
            ctx->pc = 0x1EF6C4u;
            goto label_1ef6c4;
        }
    }
    ctx->pc = 0x1EF6ACu;
    // 0x1ef6ac: 0x0  nop
    ctx->pc = 0x1ef6acu;
    // NOP
label_1ef6b0:
    // 0x1ef6b0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1ef6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ef6b4: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF6B4u;
    {
        const bool branch_taken_0x1ef6b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ef6b4) {
            ctx->pc = 0x1EF6B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6B4u;
            // 0x1ef6b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF6D0u;
            goto label_1ef6d0;
        }
    }
    ctx->pc = 0x1EF6BCu;
    // 0x1ef6bc: 0xac670164  sw          $a3, 0x164($v1)
    ctx->pc = 0x1ef6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 356), GPR_U32(ctx, 7));
    // 0x1ef6c0: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x1ef6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_1ef6c4:
    // 0x1ef6c4: 0xc0757de  jal         func_1D5F78
    ctx->pc = 0x1EF6C4u;
    SET_GPR_U32(ctx, 31, 0x1EF6CCu);
    ctx->pc = 0x1EF6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6C4u;
            // 0x1ef6c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F78u;
    if (runtime->hasFunction(0x1D5F78u)) {
        auto targetFn = runtime->lookupFunction(0x1D5F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6CCu; }
        if (ctx->pc != 0x1EF6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5F78_0x1d5f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF6CCu; }
        if (ctx->pc != 0x1EF6CCu) { return; }
    }
    ctx->pc = 0x1EF6CCu;
label_1ef6cc:
    // 0x1ef6cc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ef6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ef6d0:
    // 0x1ef6d0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ef6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ef6d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ef6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef6d8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ef6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ef6dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ef6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef6e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF6E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6E0u;
            // 0x1ef6e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EF6E8u;
    ctx->pc = 0x1ef6e8u;
}
