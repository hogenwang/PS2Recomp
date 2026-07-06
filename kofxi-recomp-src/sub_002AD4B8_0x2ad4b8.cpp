#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD4B8
// Address: 0x2ad4b8 - 0x2ad560
void sub_002AD4B8_0x2ad4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD4B8_0x2ad4b8");
#endif

    switch (ctx->pc) {
        case 0x2ad4e4u: goto label_2ad4e4;
        case 0x2ad530u: goto label_2ad530;
        default: break;
    }

    ctx->pc = 0x2ad4b8u;

    // 0x2ad4b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ad4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ad4bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2ad4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ad4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ad4c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ad4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ad4c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ad4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad4cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ad4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ad4d0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2ad4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ad4d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD4D4u;
    {
        const bool branch_taken_0x2ad4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4D4u;
            // 0x2ad4d8: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad4d4) {
            ctx->pc = 0x2AD4E4u;
            goto label_2ad4e4;
        }
    }
    ctx->pc = 0x2AD4DCu;
    // 0x2ad4dc: 0xc0a39c0  jal         func_28E700
    ctx->pc = 0x2AD4DCu;
    SET_GPR_U32(ctx, 31, 0x2AD4E4u);
    ctx->pc = 0x28E700u;
    if (runtime->hasFunction(0x28E700u)) {
        auto targetFn = runtime->lookupFunction(0x28E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4E4u; }
        if (ctx->pc != 0x2AD4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E700_0x28e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD4E4u; }
        if (ctx->pc != 0x2AD4E4u) { return; }
    }
    ctx->pc = 0x2AD4E4u;
label_2ad4e4:
    // 0x2ad4e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2AD4E4u;
    {
        const bool branch_taken_0x2ad4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4E4u;
            // 0x2ad4e8: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad4e4) {
            ctx->pc = 0x2AD544u;
            goto label_2ad544;
        }
    }
    ctx->pc = 0x2AD4ECu;
    // 0x2ad4ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2ad4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad4f0: 0x14b20003  bne         $a1, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD4F0u;
    {
        const bool branch_taken_0x2ad4f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        ctx->pc = 0x2AD4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4F0u;
            // 0x2ad4f4: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad4f0) {
            ctx->pc = 0x2AD500u;
            goto label_2ad500;
        }
    }
    ctx->pc = 0x2AD4F8u;
    // 0x2ad4f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AD4F8u;
    {
        const bool branch_taken_0x2ad4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD4F8u;
            // 0x2ad4fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad4f8) {
            ctx->pc = 0x2AD544u;
            goto label_2ad544;
        }
    }
    ctx->pc = 0x2AD500u;
label_2ad500:
    // 0x2ad500: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD500u;
    {
        const bool branch_taken_0x2ad500 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD500u;
            // 0x2ad504: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad500) {
            ctx->pc = 0x2AD510u;
            goto label_2ad510;
        }
    }
    ctx->pc = 0x2AD508u;
    // 0x2ad508: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2AD508u;
    {
        const bool branch_taken_0x2ad508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD508u;
            // 0x2ad50c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad508) {
            ctx->pc = 0x2AD544u;
            goto label_2ad544;
        }
    }
    ctx->pc = 0x2AD510u;
label_2ad510:
    // 0x2ad510: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AD510u;
    {
        const bool branch_taken_0x2ad510 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AD514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD510u;
            // 0x2ad514: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad510) {
            ctx->pc = 0x2AD544u;
            goto label_2ad544;
        }
    }
    ctx->pc = 0x2AD518u;
    // 0x2ad518: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD518u;
    {
        const bool branch_taken_0x2ad518 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD518u;
            // 0x2ad51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad518) {
            ctx->pc = 0x2AD528u;
            goto label_2ad528;
        }
    }
    ctx->pc = 0x2AD520u;
    // 0x2ad520: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD520u;
    {
        const bool branch_taken_0x2ad520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD520u;
            // 0x2ad524: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad520) {
            ctx->pc = 0x2AD544u;
            goto label_2ad544;
        }
    }
    ctx->pc = 0x2AD528u;
label_2ad528:
    // 0x2ad528: 0xc0a3978  jal         func_28E5E0
    ctx->pc = 0x2AD528u;
    SET_GPR_U32(ctx, 31, 0x2AD530u);
    ctx->pc = 0x2AD52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD528u;
            // 0x2ad52c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E5E0u;
    if (runtime->hasFunction(0x28E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x28E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD530u; }
        if (ctx->pc != 0x2AD530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E5E0_0x28e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AD530u; }
        if (ctx->pc != 0x2AD530u) { return; }
    }
    ctx->pc = 0x2AD530u;
label_2ad530:
    // 0x2ad530: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD530u;
    {
        const bool branch_taken_0x2ad530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2AD534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD530u;
            // 0x2ad534: 0x38430074  xori        $v1, $v0, 0x74 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)116);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad530) {
            ctx->pc = 0x2AD544u;
            goto label_2ad544;
        }
    }
    ctx->pc = 0x2AD538u;
    // 0x2ad538: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2ad538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ad53c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ad53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ad540: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2ad540u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2ad544:
    // 0x2ad544: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ad544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad548: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ad548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad54c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ad54cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad550: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ad550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ad554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad558: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AD558u;
            // 0x2ad55c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD560u;
    ctx->pc = 0x2ad560u;
}
