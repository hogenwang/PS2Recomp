#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C790
// Address: 0x28c790 - 0x28c898
void sub_0028C790_0x28c790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C790_0x28c790");
#endif

    switch (ctx->pc) {
        case 0x28c7ccu: goto label_28c7cc;
        case 0x28c7d8u: goto label_28c7d8;
        case 0x28c7f8u: goto label_28c7f8;
        case 0x28c82cu: goto label_28c82c;
        case 0x28c844u: goto label_28c844;
        case 0x28c854u: goto label_28c854;
        case 0x28c864u: goto label_28c864;
        case 0x28c874u: goto label_28c874;
        default: break;
    }

    ctx->pc = 0x28c790u;

    // 0x28c790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28c790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28c794: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c798: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28c798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28c79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7a0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28C7A0u;
    {
        const bool branch_taken_0x28c7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7A0u;
            // 0x28c7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7a0) {
            ctx->pc = 0x28C7E4u;
            goto label_28c7e4;
        }
    }
    ctx->pc = 0x28C7A8u;
    // 0x28c7a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x28c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x28c7ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C7ACu;
    {
        const bool branch_taken_0x28c7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7ACu;
            // 0x28c7b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7ac) {
            ctx->pc = 0x28C7E4u;
            goto label_28c7e4;
        }
    }
    ctx->pc = 0x28C7B4u;
    // 0x28c7b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28c7b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C7B8u;
    {
        const bool branch_taken_0x28c7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c7b8) {
            ctx->pc = 0x28C7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7B8u;
            // 0x28c7bc: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C7DCu;
            goto label_28c7dc;
        }
    }
    ctx->pc = 0x28C7C0u;
    // 0x28c7c0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x28c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28c7c4: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x28C7C4u;
    SET_GPR_U32(ctx, 31, 0x28C7CCu);
    ctx->pc = 0x28C7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7C4u;
            // 0x28c7c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (runtime->hasFunction(0x2FC8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7CCu; }
        if (ctx->pc != 0x28C7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC8E0_0x2fc8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7CCu; }
        if (ctx->pc != 0x28C7CCu) { return; }
    }
    ctx->pc = 0x28C7CCu;
label_28c7cc:
    // 0x28c7cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x28c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28c7d0: 0xc0bf238  jal         func_2FC8E0
    ctx->pc = 0x28C7D0u;
    SET_GPR_U32(ctx, 31, 0x28C7D8u);
    ctx->pc = 0x28C7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7D0u;
            // 0x28c7d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC8E0u;
    if (runtime->hasFunction(0x2FC8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7D8u; }
        if (ctx->pc != 0x28C7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC8E0_0x2fc8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7D8u; }
        if (ctx->pc != 0x28C7D8u) { return; }
    }
    ctx->pc = 0x28C7D8u;
label_28c7d8:
    // 0x28c7d8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x28c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_28c7dc:
    // 0x28c7dc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x28c7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x28c7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c7e4:
    // 0x28c7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28c7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c7e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c7e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x28C7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7ECu;
            // 0x28c7f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C7F4u;
    // 0x28c7f4: 0x0  nop
    ctx->pc = 0x28c7f4u;
    // NOP
label_28c7f8:
    // 0x28c7f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28c7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28c7fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28c7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c800: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c804: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28c804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c808: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c80c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28c80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28c814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c818: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28c818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c81c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28C81Cu;
    {
        const bool branch_taken_0x28c81c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C81Cu;
            // 0x28c820: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c81c) {
            ctx->pc = 0x28C874u;
            goto label_28c874;
        }
    }
    ctx->pc = 0x28C824u;
    // 0x28c824: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x28C824u;
    SET_GPR_U32(ctx, 31, 0x28C82Cu);
    ctx->pc = 0x2FC3F0u;
    if (runtime->hasFunction(0x2FC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C82Cu; }
        if (ctx->pc != 0x28C82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC3F0_0x2fc3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C82Cu; }
        if (ctx->pc != 0x28C82Cu) { return; }
    }
    ctx->pc = 0x28C82Cu;
label_28c82c:
    // 0x28c82c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28c830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c834: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28c834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c83c: 0xc0bf210  jal         func_2FC840
    ctx->pc = 0x28C83Cu;
    SET_GPR_U32(ctx, 31, 0x28C844u);
    ctx->pc = 0x28C840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C83Cu;
            // 0x28c840: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC840u;
    if (runtime->hasFunction(0x2FC840u)) {
        auto targetFn = runtime->lookupFunction(0x2FC840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C844u; }
        if (ctx->pc != 0x28C844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC840_0x2fc840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C844u; }
        if (ctx->pc != 0x28C844u) { return; }
    }
    ctx->pc = 0x28C844u;
label_28c844:
    // 0x28c844: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x28c844u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28c848: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x28c848u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x28c84c: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x28C84Cu;
    SET_GPR_U32(ctx, 31, 0x28C854u);
    ctx->pc = 0x28C850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C84Cu;
            // 0x28c850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (runtime->hasFunction(0x284EB0u)) {
        auto targetFn = runtime->lookupFunction(0x284EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C854u; }
        if (ctx->pc != 0x28C854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EB0_0x284eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C854u; }
        if (ctx->pc != 0x28C854u) { return; }
    }
    ctx->pc = 0x28C854u;
label_28c854:
    // 0x28c854: 0x1e400008  bgtz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C854u;
    {
        const bool branch_taken_0x28c854 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x28C858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C854u;
            // 0x28c858: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c854) {
            ctx->pc = 0x28C878u;
            goto label_28c878;
        }
    }
    ctx->pc = 0x28C85Cu;
    // 0x28c85c: 0xc0ae5e8  jal         func_2B97A0
    ctx->pc = 0x28C85Cu;
    SET_GPR_U32(ctx, 31, 0x28C864u);
    ctx->pc = 0x28C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C85Cu;
            // 0x28c860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B97A0u;
    if (runtime->hasFunction(0x2B97A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B97A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C864u; }
        if (ctx->pc != 0x28C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B97A0_0x2b97a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C864u; }
        if (ctx->pc != 0x28C864u) { return; }
    }
    ctx->pc = 0x28C864u;
label_28c864:
    // 0x28c864: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C864u;
    {
        const bool branch_taken_0x28c864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C864u;
            // 0x28c868: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c864) {
            ctx->pc = 0x28C878u;
            goto label_28c878;
        }
    }
    ctx->pc = 0x28C86Cu;
    // 0x28c86c: 0xc0a139e  jal         func_284E78
    ctx->pc = 0x28C86Cu;
    SET_GPR_U32(ctx, 31, 0x28C874u);
    ctx->pc = 0x28C870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C86Cu;
            // 0x28c870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284E78u;
    if (runtime->hasFunction(0x284E78u)) {
        auto targetFn = runtime->lookupFunction(0x284E78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C874u; }
        if (ctx->pc != 0x28C874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284E78_0x284e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C874u; }
        if (ctx->pc != 0x28C874u) { return; }
    }
    ctx->pc = 0x28C874u;
label_28c874:
    // 0x28c874: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28c874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28c878:
    // 0x28c878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28c878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c87c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28c87cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c884: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c88c: 0x3e00008  jr          $ra
    ctx->pc = 0x28C88Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C88Cu;
            // 0x28c890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C894u;
    // 0x28c894: 0x0  nop
    ctx->pc = 0x28c894u;
    // NOP
    ctx->pc = 0x28c898u;
}
