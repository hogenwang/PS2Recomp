#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029A7C0
// Address: 0x29a7c0 - 0x29a878
void sub_0029A7C0_0x29a7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A7C0_0x29a7c0");
#endif

    switch (ctx->pc) {
        case 0x29a840u: goto label_29a840;
        case 0x29a868u: goto label_29a868;
        default: break;
    }

    ctx->pc = 0x29a7c0u;

    // 0x29a7c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a7c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29a7c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7c8: 0x2cc2008c  sltiu       $v0, $a2, 0x8C
    ctx->pc = 0x29a7c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)140) ? 1 : 0);
    // 0x29a7cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29A7CCu;
    {
        const bool branch_taken_0x29a7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7CCu;
            // 0x29a7d0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7cc) {
            ctx->pc = 0x29A818u;
            goto label_29a818;
        }
    }
    ctx->pc = 0x29A7D4u;
    // 0x29a7d4: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x29A7D4u;
    {
        const bool branch_taken_0x29a7d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7D4u;
            // 0x29a7d8: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7d4) {
            ctx->pc = 0x29A800u;
            goto label_29a800;
        }
    }
    ctx->pc = 0x29A7DCu;
    // 0x29a7dc: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x29a7e0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x29a7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29a7e4: 0x24a255a0  addiu       $v0, $a1, 0x55A0
    ctx->pc = 0x29a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
    // 0x29a7e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a7ec: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x29a7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29a7f0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A7F0u;
    {
        const bool branch_taken_0x29a7f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7F0u;
            // 0x29a7f4: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7f0) {
            ctx->pc = 0x29A804u;
            goto label_29a804;
        }
    }
    ctx->pc = 0x29A7F8u;
    // 0x29a7f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29A7F8u;
    {
        const bool branch_taken_0x29a7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A7F8u;
            // 0x29a7fc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7f8) {
            ctx->pc = 0x29A854u;
            goto label_29a854;
        }
    }
    ctx->pc = 0x29A800u;
label_29a800:
    // 0x29a800: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x29a800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_29a804:
    // 0x29a804: 0x24a255a0  addiu       $v0, $a1, 0x55A0
    ctx->pc = 0x29a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 21920));
    // 0x29a808: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x29a808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29a80c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a810: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x29A810u;
    {
        const bool branch_taken_0x29a810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A810u;
            // 0x29a814: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a810) {
            ctx->pc = 0x29A86Cu;
            goto label_29a86c;
        }
    }
    ctx->pc = 0x29A818u;
label_29a818:
    // 0x29a818: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29a818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29a81c: 0x8c4467e8  lw          $a0, 0x67E8($v0)
    ctx->pc = 0x29a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
    // 0x29a820: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29A820u;
    {
        const bool branch_taken_0x29a820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A820u;
            // 0x29a824: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a820) {
            ctx->pc = 0x29A868u;
            goto label_29a868;
        }
    }
    ctx->pc = 0x29A828u;
    // 0x29a828: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a82c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x29a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x29a830: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29a830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a834: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x29a834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29a838: 0xc0a6246  jal         func_298918
    ctx->pc = 0x29A838u;
    SET_GPR_U32(ctx, 31, 0x29A840u);
    ctx->pc = 0x29A83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A838u;
            // 0x29a83c: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (runtime->hasFunction(0x298918u)) {
        auto targetFn = runtime->lookupFunction(0x298918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A840u; }
        if (ctx->pc != 0x29A840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298918_0x298918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A840u; }
        if (ctx->pc != 0x29A840u) { return; }
    }
    ctx->pc = 0x29A840u;
label_29a840:
    // 0x29a840: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A840u;
    {
        const bool branch_taken_0x29a840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A840u;
            // 0x29a844: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a840) {
            ctx->pc = 0x29A854u;
            goto label_29a854;
        }
    }
    ctx->pc = 0x29A848u;
    // 0x29a848: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29a84c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29A84Cu;
    {
        const bool branch_taken_0x29a84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A84Cu;
            // 0x29a850: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a84c) {
            ctx->pc = 0x29A86Cu;
            goto label_29a86c;
        }
    }
    ctx->pc = 0x29A854u;
label_29a854:
    // 0x29a854: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x29a854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29a858: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x29a858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x29a85c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29a85cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a860: 0xc0a5648  jal         func_295920
    ctx->pc = 0x29A860u;
    SET_GPR_U32(ctx, 31, 0x29A868u);
    ctx->pc = 0x29A864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A860u;
            // 0x29a864: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A868u; }
        if (ctx->pc != 0x29A868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A868u; }
        if (ctx->pc != 0x29A868u) { return; }
    }
    ctx->pc = 0x29A868u;
label_29a868:
    // 0x29a868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a86c:
    // 0x29a86c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a870: 0x3e00008  jr          $ra
    ctx->pc = 0x29A870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A870u;
            // 0x29a874: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29A878u;
    ctx->pc = 0x29a878u;
}
