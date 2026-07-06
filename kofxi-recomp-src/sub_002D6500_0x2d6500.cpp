#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D6500
// Address: 0x2d6500 - 0x2d6588
void sub_002D6500_0x2d6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6500_0x2d6500");
#endif

    switch (ctx->pc) {
        case 0x2d651cu: goto label_2d651c;
        case 0x2d6538u: goto label_2d6538;
        case 0x2d6540u: goto label_2d6540;
        case 0x2d6568u: goto label_2d6568;
        default: break;
    }

    ctx->pc = 0x2d6500u;

    // 0x2d6500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d650c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d650cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6510: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6514: 0xc0b60b8  jal         func_2D82E0
    ctx->pc = 0x2D6514u;
    SET_GPR_U32(ctx, 31, 0x2D651Cu);
    ctx->pc = 0x2D6518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6514u;
            // 0x2d6518: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D651Cu; }
        if (ctx->pc != 0x2D651Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D651Cu; }
        if (ctx->pc != 0x2D651Cu) { return; }
    }
    ctx->pc = 0x2D651Cu;
label_2d651c:
    // 0x2d651c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d651cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6520: 0x24020206  addiu       $v0, $zero, 0x206
    ctx->pc = 0x2d6520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    // 0x2d6524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6528: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D6528u;
    {
        const bool branch_taken_0x2d6528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D652Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6528u;
            // 0x2d652c: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6528) {
            ctx->pc = 0x2D6554u;
            goto label_2d6554;
        }
    }
    ctx->pc = 0x2D6530u;
    // 0x2d6530: 0xc0b3cfc  jal         func_2CF3F0
    ctx->pc = 0x2D6530u;
    SET_GPR_U32(ctx, 31, 0x2D6538u);
    ctx->pc = 0x2CF3F0u;
    if (runtime->hasFunction(0x2CF3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CF3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6538u; }
        if (ctx->pc != 0x2D6538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF3F0_0x2cf3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6538u; }
        if (ctx->pc != 0x2D6538u) { return; }
    }
    ctx->pc = 0x2D6538u;
label_2d6538:
    // 0x2d6538: 0xc0b2296  jal         func_2C8A58
    ctx->pc = 0x2D6538u;
    SET_GPR_U32(ctx, 31, 0x2D6540u);
    ctx->pc = 0x2D653Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6538u;
            // 0x2d653c: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8A58u;
    if (runtime->hasFunction(0x2C8A58u)) {
        auto targetFn = runtime->lookupFunction(0x2C8A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6540u; }
        if (ctx->pc != 0x2D6540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8A58_0x2c8a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6540u; }
        if (ctx->pc != 0x2D6540u) { return; }
    }
    ctx->pc = 0x2D6540u;
label_2d6540:
    // 0x2d6540: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d6540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2d6544: 0x24429650  addiu       $v0, $v0, -0x69B0
    ctx->pc = 0x2d6544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940240));
    // 0x2d6548: 0xae31002c  sw          $s1, 0x2C($s1)
    ctx->pc = 0x2d6548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 17));
    // 0x2d654c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x2d654cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x2d6550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d6550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6554:
    // 0x2d6554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d655c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d655cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6560: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6560u;
            // 0x2d6564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6568u;
label_2d6568:
    // 0x2d6568: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2d6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2d656c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2d656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d6570: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2d6570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2d6574: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2d6574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2d6578: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d6578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d657c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6580: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6580u;
            // 0x2d6584: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6588u;
    ctx->pc = 0x2d6588u;
}
