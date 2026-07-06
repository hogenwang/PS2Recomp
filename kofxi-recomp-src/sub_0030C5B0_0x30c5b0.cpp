#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030C5B0
// Address: 0x30c5b0 - 0x30c700
void sub_0030C5B0_0x30c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C5B0_0x30c5b0");
#endif

    switch (ctx->pc) {
        case 0x30c600u: goto label_30c600;
        case 0x30c610u: goto label_30c610;
        case 0x30c620u: goto label_30c620;
        case 0x30c634u: goto label_30c634;
        case 0x30c6a4u: goto label_30c6a4;
        case 0x30c6e4u: goto label_30c6e4;
        default: break;
    }

    ctx->pc = 0x30c5b0u;

    // 0x30c5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c5b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c5bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30c5c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x30c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30c5c4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x30C5C4u;
    {
        const bool branch_taken_0x30c5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5C4u;
            // 0x30c5c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5c4) {
            ctx->pc = 0x30C628u;
            goto label_30c628;
        }
    }
    ctx->pc = 0x30C5CCu;
    // 0x30c5cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c5d0: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30C5D0u;
    {
        const bool branch_taken_0x30c5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c5d0) {
            ctx->pc = 0x30C5D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5D0u;
            // 0x30c5d4: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C618u;
            goto label_30c618;
        }
    }
    ctx->pc = 0x30C5D8u;
    // 0x30c5d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c5dc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30C5DCu;
    {
        const bool branch_taken_0x30c5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c5dc) {
            ctx->pc = 0x30C5E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5DCu;
            // 0x30c5e0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C608u;
            goto label_30c608;
        }
    }
    ctx->pc = 0x30C5E4u;
    // 0x30c5e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c5e8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C5E8u;
    {
        const bool branch_taken_0x30c5e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c5e8) {
            ctx->pc = 0x30C5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5E8u;
            // 0x30c5ec: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30C5F8u;
            goto label_30c5f8;
        }
    }
    ctx->pc = 0x30C5F0u;
    // 0x30c5f0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x30C5F0u;
    {
        const bool branch_taken_0x30c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5F0u;
            // 0x30c5f4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5f0) {
            ctx->pc = 0x30C638u;
            goto label_30c638;
        }
    }
    ctx->pc = 0x30C5F8u;
label_30c5f8:
    // 0x30c5f8: 0xc0c30d4  jal         func_30C350
    ctx->pc = 0x30C5F8u;
    SET_GPR_U32(ctx, 31, 0x30C600u);
    ctx->pc = 0x30C5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C5F8u;
            // 0x30c5fc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30C350u;
    if (runtime->hasFunction(0x30C350u)) {
        auto targetFn = runtime->lookupFunction(0x30C350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C600u; }
        if (ctx->pc != 0x30C600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C350_0x30c350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C600u; }
        if (ctx->pc != 0x30C600u) { return; }
    }
    ctx->pc = 0x30C600u;
label_30c600:
    // 0x30c600: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30C600u;
    {
        const bool branch_taken_0x30c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c600) {
            ctx->pc = 0x30C634u;
            goto label_30c634;
        }
    }
    ctx->pc = 0x30C608u;
label_30c608:
    // 0x30c608: 0xc0c30fc  jal         func_30C3F0
    ctx->pc = 0x30C608u;
    SET_GPR_U32(ctx, 31, 0x30C610u);
    ctx->pc = 0x30C60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C608u;
            // 0x30c60c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30C3F0u;
    if (runtime->hasFunction(0x30C3F0u)) {
        auto targetFn = runtime->lookupFunction(0x30C3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C610u; }
        if (ctx->pc != 0x30C610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C3F0_0x30c3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C610u; }
        if (ctx->pc != 0x30C610u) { return; }
    }
    ctx->pc = 0x30C610u;
label_30c610:
    // 0x30c610: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30C610u;
    {
        const bool branch_taken_0x30c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c610) {
            ctx->pc = 0x30C634u;
            goto label_30c634;
        }
    }
    ctx->pc = 0x30C618u;
label_30c618:
    // 0x30c618: 0xc0c3148  jal         func_30C520
    ctx->pc = 0x30C618u;
    SET_GPR_U32(ctx, 31, 0x30C620u);
    ctx->pc = 0x30C61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C618u;
            // 0x30c61c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30C520u;
    if (runtime->hasFunction(0x30C520u)) {
        auto targetFn = runtime->lookupFunction(0x30C520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C620u; }
        if (ctx->pc != 0x30C620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C520_0x30c520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C620u; }
        if (ctx->pc != 0x30C620u) { return; }
    }
    ctx->pc = 0x30C620u;
label_30c620:
    // 0x30c620: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30C620u;
    {
        const bool branch_taken_0x30c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c620) {
            ctx->pc = 0x30C634u;
            goto label_30c634;
        }
    }
    ctx->pc = 0x30C628u;
label_30c628:
    // 0x30c628: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x30c628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x30c62c: 0xc0c3124  jal         func_30C490
    ctx->pc = 0x30C62Cu;
    SET_GPR_U32(ctx, 31, 0x30C634u);
    ctx->pc = 0x30C630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C62Cu;
            // 0x30c630: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30C490u;
    if (runtime->hasFunction(0x30C490u)) {
        auto targetFn = runtime->lookupFunction(0x30C490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C634u; }
        if (ctx->pc != 0x30C634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030C490_0x30c490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C634u; }
        if (ctx->pc != 0x30C634u) { return; }
    }
    ctx->pc = 0x30C634u;
label_30c634:
    // 0x30c634: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x30c634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_30c638:
    // 0x30c638: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30c638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30c63c: 0x244239a0  addiu       $v0, $v0, 0x39A0
    ctx->pc = 0x30c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14752));
    // 0x30c640: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x30c640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x30c644: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x30c644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x30c648: 0x2ca10007  sltiu       $at, $a1, 0x7
    ctx->pc = 0x30c648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x30c64c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c650: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x30C650u;
    {
        const bool branch_taken_0x30c650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C650u;
            // 0x30c654: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c650) {
            ctx->pc = 0x30C6ACu;
            goto label_30c6ac;
        }
    }
    ctx->pc = 0x30C658u;
    // 0x30c658: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x30c658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30c65c: 0x3c0301d3  lui         $v1, 0x1D3
    ctx->pc = 0x30c65cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)467 << 16));
    // 0x30c660: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x30c660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30c664: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x30c664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c668: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x30c668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x30c66c: 0x24632da0  addiu       $v1, $v1, 0x2DA0
    ctx->pc = 0x30c66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11680));
    // 0x30c670: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x30c670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x30c674: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x30c674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x30c678: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x30c678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x30c67c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x30c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c680: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x30c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x30c684: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c688: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x30c688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30c68c: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x30c68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30c690: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x30c690u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x30c694: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30c694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30c698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c69c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x30C69Cu;
    SET_GPR_U32(ctx, 31, 0x30C6A4u);
    ctx->pc = 0x30C6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C69Cu;
            // 0x30c6a0: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6A4u; }
        if (ctx->pc != 0x30C6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6A4u; }
        if (ctx->pc != 0x30C6A4u) { return; }
    }
    ctx->pc = 0x30C6A4u;
label_30c6a4:
    // 0x30c6a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30C6A4u;
    {
        const bool branch_taken_0x30c6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6A4u;
            // 0x30c6a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6a4) {
            ctx->pc = 0x30C6E8u;
            goto label_30c6e8;
        }
    }
    ctx->pc = 0x30C6ACu;
label_30c6ac:
    // 0x30c6ac: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x30c6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x30c6b0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x30c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x30c6b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30c6b8: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x30c6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c6bc: 0x24422da0  addiu       $v0, $v0, 0x2DA0
    ctx->pc = 0x30c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11680));
    // 0x30c6c0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x30c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x30c6c4: 0x24053b80  addiu       $a1, $zero, 0x3B80
    ctx->pc = 0x30c6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15232));
    // 0x30c6c8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c6cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x30c6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c6d0: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x30c6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x30c6d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x30c6d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30c6d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c6dc: 0xc040532  jal         func_1014C8
    ctx->pc = 0x30C6DCu;
    SET_GPR_U32(ctx, 31, 0x30C6E4u);
    ctx->pc = 0x30C6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6DCu;
            // 0x30c6e0: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (runtime->hasFunction(0x1014C8u)) {
        auto targetFn = runtime->lookupFunction(0x1014C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6E4u; }
        if (ctx->pc != 0x30C6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001014C8_0x1014c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30C6E4u; }
        if (ctx->pc != 0x30C6E4u) { return; }
    }
    ctx->pc = 0x30C6E4u;
label_30c6e4:
    // 0x30c6e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30c6e8:
    // 0x30c6e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30c6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x30C6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30C6ECu;
            // 0x30c6f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30C6F4u;
    // 0x30c6f4: 0x0  nop
    ctx->pc = 0x30c6f4u;
    // NOP
    // 0x30c6f8: 0x0  nop
    ctx->pc = 0x30c6f8u;
    // NOP
    // 0x30c6fc: 0x0  nop
    ctx->pc = 0x30c6fcu;
    // NOP
    ctx->pc = 0x30c700u;
}
