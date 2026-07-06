#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA670
// Address: 0x1ea670 - 0x1ea728
void sub_001EA670_0x1ea670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA670_0x1ea670");
#endif

    switch (ctx->pc) {
        case 0x1ea6b8u: goto label_1ea6b8;
        case 0x1ea708u: goto label_1ea708;
        case 0x1ea718u: goto label_1ea718;
        default: break;
    }

    ctx->pc = 0x1ea670u;

    // 0x1ea670: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ea674: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA674u;
    {
        const bool branch_taken_0x1ea674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA674u;
            // 0x1ea678: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea674) {
            ctx->pc = 0x1EA6ACu;
            goto label_1ea6ac;
        }
    }
    ctx->pc = 0x1EA67Cu;
    // 0x1ea67c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea680: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EA680u;
    {
        const bool branch_taken_0x1ea680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA680u;
            // 0x1ea684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea680) {
            ctx->pc = 0x1EA6ACu;
            goto label_1ea6ac;
        }
    }
    ctx->pc = 0x1EA688u;
    // 0x1ea688: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ea688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ea68c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA68Cu;
    {
        const bool branch_taken_0x1ea68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA68Cu;
            // 0x1ea690: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea68c) {
            ctx->pc = 0x1EA6ACu;
            goto label_1ea6ac;
        }
    }
    ctx->pc = 0x1EA694u;
    // 0x1ea694: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1ea694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ea698: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA698u;
    {
        const bool branch_taken_0x1ea698 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ea698) {
            ctx->pc = 0x1EA6ACu;
            goto label_1ea6ac;
        }
    }
    ctx->pc = 0x1EA6A0u;
    // 0x1ea6a0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1ea6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1ea6a4: 0x58600001  blezl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EA6A4u;
    {
        const bool branch_taken_0x1ea6a4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ea6a4) {
            ctx->pc = 0x1EA6A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6A4u;
            // 0x1ea6a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EA6ACu;
            goto label_1ea6ac;
        }
    }
    ctx->pc = 0x1EA6ACu;
label_1ea6ac:
    // 0x1ea6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA6B4u;
    // 0x1ea6b4: 0x0  nop
    ctx->pc = 0x1ea6b4u;
    // NOP
label_1ea6b8:
    // 0x1ea6b8: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1ea6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1ea6bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea6bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea6c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1ea6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ea6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea6c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea6cc: 0x24831368  addiu       $v1, $a0, 0x1368
    ctx->pc = 0x1ea6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x1ea6d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ea6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ea6d4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ea6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea6d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea6dc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ea6dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ea6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ea6e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ea6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ea6e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1ea6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6ec: 0x10470006  beq         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA6ECu;
    {
        const bool branch_taken_0x1ea6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1EA6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6ECu;
            // 0x1ea6f0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6ec) {
            ctx->pc = 0x1EA708u;
            goto label_1ea708;
        }
    }
    ctx->pc = 0x1EA6F4u;
    // 0x1ea6f4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ea6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ea6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea6fc: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x1ea6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
    // 0x1ea700: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1EA700u;
    ctx->pc = 0x1EA704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA700u;
            // 0x1ea704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1EA708u;
label_1ea708:
    // 0x1ea708: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x1ea708u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1ea70c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ea70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea710: 0xc07a9ca  jal         func_1EA728
    ctx->pc = 0x1EA710u;
    SET_GPR_U32(ctx, 31, 0x1EA718u);
    ctx->pc = 0x1EA714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA710u;
            // 0x1ea714: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA728u;
    if (runtime->hasFunction(0x1EA728u)) {
        auto targetFn = runtime->lookupFunction(0x1EA728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA718u; }
        if (ctx->pc != 0x1EA718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EA728_0x1ea728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA718u; }
        if (ctx->pc != 0x1EA718u) { return; }
    }
    ctx->pc = 0x1EA718u;
label_1ea718:
    // 0x1ea718: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea720: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA720u;
            // 0x1ea724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA728u;
    ctx->pc = 0x1ea728u;
}
