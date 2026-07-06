#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C898
// Address: 0x28c898 - 0x28cad0
void sub_0028C898_0x28c898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C898_0x28c898");
#endif

    switch (ctx->pc) {
        case 0x28c8bcu: goto label_28c8bc;
        case 0x28c8d4u: goto label_28c8d4;
        case 0x28c8e4u: goto label_28c8e4;
        case 0x28c8f4u: goto label_28c8f4;
        case 0x28c904u: goto label_28c904;
        case 0x28c920u: goto label_28c920;
        case 0x28c99cu: goto label_28c99c;
        case 0x28c9f8u: goto label_28c9f8;
        case 0x28ca5cu: goto label_28ca5c;
        case 0x28ca88u: goto label_28ca88;
        case 0x28caa8u: goto label_28caa8;
        case 0x28cab8u: goto label_28cab8;
        default: break;
    }

    ctx->pc = 0x28c898u;

label_28c898:
    // 0x28c898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28c898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28c89c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c8a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c8a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c8a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c8ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28c8acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28c8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28c8b4: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x28C8B4u;
    SET_GPR_U32(ctx, 31, 0x28C8BCu);
    ctx->pc = 0x28C8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8B4u;
            // 0x28c8b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3F0u;
    if (runtime->hasFunction(0x2FC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8BCu; }
        if (ctx->pc != 0x28C8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC3F0_0x2fc3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8BCu; }
        if (ctx->pc != 0x28C8BCu) { return; }
    }
    ctx->pc = 0x28C8BCu;
label_28c8bc:
    // 0x28c8bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28c8c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28c8c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28c8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8cc: 0xc0bf220  jal         func_2FC880
    ctx->pc = 0x28C8CCu;
    SET_GPR_U32(ctx, 31, 0x28C8D4u);
    ctx->pc = 0x28C8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8CCu;
            // 0x28c8d0: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC880u;
    if (runtime->hasFunction(0x2FC880u)) {
        auto targetFn = runtime->lookupFunction(0x2FC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8D4u; }
        if (ctx->pc != 0x28C8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC880_0x2fc880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8D4u; }
        if (ctx->pc != 0x28C8D4u) { return; }
    }
    ctx->pc = 0x28C8D4u;
label_28c8d4:
    // 0x28c8d4: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x28c8d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28c8d8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x28c8d8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x28c8dc: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x28C8DCu;
    SET_GPR_U32(ctx, 31, 0x28C8E4u);
    ctx->pc = 0x28C8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8DCu;
            // 0x28c8e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (runtime->hasFunction(0x284EB0u)) {
        auto targetFn = runtime->lookupFunction(0x284EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8E4u; }
        if (ctx->pc != 0x28C8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EB0_0x284eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8E4u; }
        if (ctx->pc != 0x28C8E4u) { return; }
    }
    ctx->pc = 0x28C8E4u;
label_28c8e4:
    // 0x28c8e4: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C8E4u;
    {
        const bool branch_taken_0x28c8e4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28C8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8E4u;
            // 0x28c8e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8e4) {
            ctx->pc = 0x28C908u;
            goto label_28c908;
        }
    }
    ctx->pc = 0x28C8ECu;
    // 0x28c8ec: 0xc0ae5e8  jal         func_2B97A0
    ctx->pc = 0x28C8ECu;
    SET_GPR_U32(ctx, 31, 0x28C8F4u);
    ctx->pc = 0x28C8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8ECu;
            // 0x28c8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B97A0u;
    if (runtime->hasFunction(0x2B97A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B97A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8F4u; }
        if (ctx->pc != 0x28C8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B97A0_0x2b97a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8F4u; }
        if (ctx->pc != 0x28C8F4u) { return; }
    }
    ctx->pc = 0x28C8F4u;
label_28c8f4:
    // 0x28c8f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C8F4u;
    {
        const bool branch_taken_0x28c8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8F4u;
            // 0x28c8f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8f4) {
            ctx->pc = 0x28C908u;
            goto label_28c908;
        }
    }
    ctx->pc = 0x28C8FCu;
    // 0x28c8fc: 0xc0a13a2  jal         func_284E88
    ctx->pc = 0x28C8FCu;
    SET_GPR_U32(ctx, 31, 0x28C904u);
    ctx->pc = 0x28C900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8FCu;
            // 0x28c900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284E88u;
    if (runtime->hasFunction(0x284E88u)) {
        auto targetFn = runtime->lookupFunction(0x284E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C904u; }
        if (ctx->pc != 0x28C904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284E88_0x284e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C904u; }
        if (ctx->pc != 0x28C904u) { return; }
    }
    ctx->pc = 0x28C904u;
label_28c904:
    // 0x28c904: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28c904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c908:
    // 0x28c908: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28c908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c90c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c90cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c910: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c918: 0x3e00008  jr          $ra
    ctx->pc = 0x28C918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C918u;
            // 0x28c91c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C920u;
label_28c920:
    // 0x28c920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28c920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28c924: 0x28a2000d  slti        $v0, $a1, 0xD
    ctx->pc = 0x28c924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x28c928: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28c928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c92c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c930: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28c930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c934: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c938: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28c938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c940: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x28c940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c944: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x28c944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x28c948: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x28C948u;
    {
        const bool branch_taken_0x28c948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C948u;
            // 0x28c94c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c948) {
            ctx->pc = 0x28C990u;
            goto label_28c990;
        }
    }
    ctx->pc = 0x28C950u;
    // 0x28c950: 0x28a2000b  slti        $v0, $a1, 0xB
    ctx->pc = 0x28c950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x28c954: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x28C954u;
    {
        const bool branch_taken_0x28c954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C954u;
            // 0x28c958: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c954) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28C95Cu;
    // 0x28c95c: 0x10a20036  beq         $a1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x28C95Cu;
    {
        const bool branch_taken_0x28c95c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C95Cu;
            // 0x28c960: 0x28a20009  slti        $v0, $a1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c95c) {
            ctx->pc = 0x28CA38u;
            goto label_28ca38;
        }
    }
    ctx->pc = 0x28C964u;
    // 0x28c964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C964u;
    {
        const bool branch_taken_0x28c964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C964u;
            // 0x28c968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c964) {
            ctx->pc = 0x28C97Cu;
            goto label_28c97c;
        }
    }
    ctx->pc = 0x28C96Cu;
    // 0x28c96c: 0x10a2003e  beq         $a1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x28C96Cu;
    {
        const bool branch_taken_0x28c96c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C96Cu;
            // 0x28c970: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c96c) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28C974u;
    // 0x28c974: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28C974u;
    {
        const bool branch_taken_0x28c974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C974u;
            // 0x28c978: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c974) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28C97Cu;
label_28c97c:
    // 0x28c97c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x28c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28c980: 0x10a2002f  beq         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28C980u;
    {
        const bool branch_taken_0x28c980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C980u;
            // 0x28c984: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c980) {
            ctx->pc = 0x28CA40u;
            goto label_28ca40;
        }
    }
    ctx->pc = 0x28C988u;
    // 0x28c988: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x28C988u;
    {
        const bool branch_taken_0x28c988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C988u;
            // 0x28c98c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c988) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28C990u;
label_28c990:
    // 0x28c990: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x28c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x28c994: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28C994u;
    {
        const bool branch_taken_0x28c994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C994u;
            // 0x28c998: 0x28a20069  slti        $v0, $a1, 0x69 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)105) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c994) {
            ctx->pc = 0x28C9F0u;
            goto label_28c9f0;
        }
    }
    ctx->pc = 0x28C99Cu;
label_28c99c:
    // 0x28c99c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C99Cu;
    {
        const bool branch_taken_0x28c99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C99Cu;
            // 0x28c9a0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c99c) {
            ctx->pc = 0x28C9BCu;
            goto label_28c9bc;
        }
    }
    ctx->pc = 0x28C9A4u;
    // 0x28c9a4: 0x10a2002f  beq         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28C9A4u;
    {
        const bool branch_taken_0x28c9a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9A4u;
            // 0x28c9a8: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9a4) {
            ctx->pc = 0x28CA64u;
            goto label_28ca64;
        }
    }
    ctx->pc = 0x28C9ACu;
    // 0x28c9ac: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x28C9ACu;
    {
        const bool branch_taken_0x28c9ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9ACu;
            // 0x28c9b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9ac) {
            ctx->pc = 0x28CA4Cu;
            goto label_28ca4c;
        }
    }
    ctx->pc = 0x28C9B4u;
    // 0x28c9b4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x28C9B4u;
    {
        const bool branch_taken_0x28c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9B4u;
            // 0x28c9b8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9b4) {
            ctx->pc = 0x28CA6Cu;
            goto label_28ca6c;
        }
    }
    ctx->pc = 0x28C9BCu;
label_28c9bc:
    // 0x28c9bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x28c9c0: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C9C0u;
    {
        const bool branch_taken_0x28c9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9C0u;
            // 0x28c9c4: 0x28a20081  slti        $v0, $a1, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9c0) {
            ctx->pc = 0x28C9E8u;
            goto label_28c9e8;
        }
    }
    ctx->pc = 0x28C9C8u;
    // 0x28c9c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C9C8u;
    {
        const bool branch_taken_0x28c9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9C8u;
            // 0x28c9cc: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9c8) {
            ctx->pc = 0x28C9E0u;
            goto label_28c9e0;
        }
    }
    ctx->pc = 0x28C9D0u;
    // 0x28c9d0: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28C9D0u;
    {
        const bool branch_taken_0x28c9d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9D0u;
            // 0x28c9d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9d0) {
            ctx->pc = 0x28CA14u;
            goto label_28ca14;
        }
    }
    ctx->pc = 0x28C9D8u;
    // 0x28c9d8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x28C9D8u;
    {
        const bool branch_taken_0x28c9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9D8u;
            // 0x28c9dc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9d8) {
            ctx->pc = 0x28CA6Cu;
            goto label_28ca6c;
        }
    }
    ctx->pc = 0x28C9E0u;
label_28c9e0:
    // 0x28c9e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28C9E0u;
    {
        const bool branch_taken_0x28c9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9E0u;
            // 0x28c9e4: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9e0) {
            ctx->pc = 0x28CA64u;
            goto label_28ca64;
        }
    }
    ctx->pc = 0x28C9E8u;
label_28c9e8:
    // 0x28c9e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28C9E8u;
    {
        const bool branch_taken_0x28c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9E8u;
            // 0x28c9ec: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9e8) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28C9F0u;
label_28c9f0:
    // 0x28c9f0: 0xc0a31e4  jal         func_28C790
    ctx->pc = 0x28C9F0u;
    SET_GPR_U32(ctx, 31, 0x28C9F8u);
    ctx->pc = 0x28C9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9F0u;
            // 0x28c9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C790u;
    if (runtime->hasFunction(0x28C790u)) {
        auto targetFn = runtime->lookupFunction(0x28C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C9F8u; }
        if (ctx->pc != 0x28C9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028C790_0x28c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C9F8u; }
        if (ctx->pc != 0x28C9F8u) { return; }
    }
    ctx->pc = 0x28C9F8u;
label_28c9f8:
    // 0x28c9f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c9fc: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x28c9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x28ca00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28ca00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ca04: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x28ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x28ca08: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x28ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x28ca0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28CA0Cu;
    {
        const bool branch_taken_0x28ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA0Cu;
            // 0x28ca10: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca0c) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA14u;
label_28ca14:
    // 0x28ca14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28ca18: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28CA18u;
    {
        const bool branch_taken_0x28ca18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA18u;
            // 0x28ca1c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca18) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA20u;
    // 0x28ca20: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CA20u;
    {
        const bool branch_taken_0x28ca20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca20) {
            ctx->pc = 0x28CA24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA20u;
            // 0x28ca24: 0x8e13001c  lw          $s3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA28u;
    // 0x28ca28: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x28ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28ca2c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28ca2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x28ca30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28CA30u;
    {
        const bool branch_taken_0x28ca30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA30u;
            // 0x28ca34: 0x8e13001c  lw          $s3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca30) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA38u;
label_28ca38:
    // 0x28ca38: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28CA38u;
    {
        const bool branch_taken_0x28ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA38u;
            // 0x28ca3c: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca38) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA40u;
label_28ca40:
    // 0x28ca40: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x28ca40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x28ca44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28CA44u;
    {
        const bool branch_taken_0x28ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA44u;
            // 0x28ca48: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca44) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA4Cu;
label_28ca4c:
    // 0x28ca4c: 0x12283c  dsll32      $a1, $s2, 0
    ctx->pc = 0x28ca4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 0));
    // 0x28ca50: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x28ca50u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x28ca54: 0xc0adc28  jal         func_2B70A0
    ctx->pc = 0x28CA54u;
    SET_GPR_U32(ctx, 31, 0x28CA5Cu);
    ctx->pc = 0x28CA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA54u;
            // 0x28ca58: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B70A0u;
    if (runtime->hasFunction(0x2B70A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B70A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA5Cu; }
        if (ctx->pc != 0x28CA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B70A0_0x2b70a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA5Cu; }
        if (ctx->pc != 0x28CA5Cu) { return; }
    }
    ctx->pc = 0x28CA5Cu;
label_28ca5c:
    // 0x28ca5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28CA5Cu;
    {
        const bool branch_taken_0x28ca5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA5Cu;
            // 0x28ca60: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca5c) {
            ctx->pc = 0x28CA68u;
            goto label_28ca68;
        }
    }
    ctx->pc = 0x28CA64u;
label_28ca64:
    // 0x28ca64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28ca64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ca68:
    // 0x28ca68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28ca68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28ca6c:
    // 0x28ca6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x28ca6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ca70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28ca70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ca74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28ca74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ca78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28ca78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ca7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ca7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ca80: 0x3e00008  jr          $ra
    ctx->pc = 0x28CA80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA80u;
            // 0x28ca84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CA88u;
label_28ca88:
    // 0x28ca88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ca8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28ca90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ca94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28ca94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ca98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ca9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28caa0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28CAA0u;
    SET_GPR_U32(ctx, 31, 0x28CAA8u);
    ctx->pc = 0x28CAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CAA0u;
            // 0x28caa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CAA8u; }
        if (ctx->pc != 0x28CAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CAA8u; }
        if (ctx->pc != 0x28CAA8u) { return; }
    }
    ctx->pc = 0x28CAA8u;
label_28caa8:
    // 0x28caa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28caa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28caac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28caacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cab0: 0xc0a3226  jal         func_28C898
    ctx->pc = 0x28CAB0u;
    SET_GPR_U32(ctx, 31, 0x28CAB8u);
    ctx->pc = 0x28CAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CAB0u;
            // 0x28cab4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C898u;
    goto label_28c898;
    ctx->pc = 0x28CAB8u;
label_28cab8:
    // 0x28cab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cabc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28cabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cac4: 0x3e00008  jr          $ra
    ctx->pc = 0x28CAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CAC4u;
            // 0x28cac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CACCu;
    // 0x28cacc: 0x0  nop
    ctx->pc = 0x28caccu;
    // NOP
    ctx->pc = 0x28cad0u;
}
