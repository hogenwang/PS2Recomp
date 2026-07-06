#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FC3F0
// Address: 0x2fc3f0 - 0x2fc490
void sub_002FC3F0_0x2fc3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC3F0_0x2fc3f0");
#endif

    switch (ctx->pc) {
        case 0x2fc400u: goto label_2fc400;
        case 0x2fc454u: goto label_2fc454;
        case 0x2fc464u: goto label_2fc464;
        case 0x2fc474u: goto label_2fc474;
        case 0x2fc484u: goto label_2fc484;
        default: break;
    }

    ctx->pc = 0x2fc3f0u;

    // 0x2fc3f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fc3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fc3f8: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2FC3F8u;
    SET_GPR_U32(ctx, 31, 0x2FC400u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC400u; }
        if (ctx->pc != 0x2FC400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC400u; }
        if (ctx->pc != 0x2FC400u) { return; }
    }
    ctx->pc = 0x2FC400u;
label_2fc400:
    // 0x2fc400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fc400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fc404: 0x2402006e  addiu       $v0, $zero, 0x6E
    ctx->pc = 0x2fc404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2fc408: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2FC408u;
    {
        const bool branch_taken_0x2fc408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC408u;
            // 0x2fc40c: 0x2862006f  slti        $v0, $v1, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)111) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc408) {
            ctx->pc = 0x2FC46Cu;
            goto label_2fc46c;
        }
    }
    ctx->pc = 0x2FC410u;
    // 0x2fc410: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FC410u;
    {
        const bool branch_taken_0x2fc410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC410u;
            // 0x2fc414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc410) {
            ctx->pc = 0x2FC430u;
            goto label_2fc430;
        }
    }
    ctx->pc = 0x2FC418u;
    // 0x2fc418: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FC418u;
    {
        const bool branch_taken_0x2fc418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC418u;
            // 0x2fc41c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc418) {
            ctx->pc = 0x2FC44Cu;
            goto label_2fc44c;
        }
    }
    ctx->pc = 0x2FC420u;
    // 0x2fc420: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2FC420u;
    {
        const bool branch_taken_0x2fc420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fc420) {
            ctx->pc = 0x2FC45Cu;
            goto label_2fc45c;
        }
    }
    ctx->pc = 0x2FC428u;
    // 0x2fc428: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2FC428u;
    {
        const bool branch_taken_0x2fc428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc428) {
            ctx->pc = 0x2FC47Cu;
            goto label_2fc47c;
        }
    }
    ctx->pc = 0x2FC430u;
label_2fc430:
    // 0x2fc430: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x2fc430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2fc434: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FC434u;
    {
        const bool branch_taken_0x2fc434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FC438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC434u;
            // 0x2fc438: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc434) {
            ctx->pc = 0x2FC45Cu;
            goto label_2fc45c;
        }
    }
    ctx->pc = 0x2FC43Cu;
    // 0x2fc43c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC43Cu;
    {
        const bool branch_taken_0x2fc43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fc43c) {
            ctx->pc = 0x2FC46Cu;
            goto label_2fc46c;
        }
    }
    ctx->pc = 0x2FC444u;
    // 0x2fc444: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FC444u;
    {
        const bool branch_taken_0x2fc444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc444) {
            ctx->pc = 0x2FC47Cu;
            goto label_2fc47c;
        }
    }
    ctx->pc = 0x2FC44Cu;
label_2fc44c:
    // 0x2fc44c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2FC44Cu;
    SET_GPR_U32(ctx, 31, 0x2FC454u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC454u; }
        if (ctx->pc != 0x2FC454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC454u; }
        if (ctx->pc != 0x2FC454u) { return; }
    }
    ctx->pc = 0x2FC454u;
label_2fc454:
    // 0x2fc454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FC454u;
    {
        const bool branch_taken_0x2fc454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC454u;
            // 0x2fc458: 0x24030071  addiu       $v1, $zero, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc454) {
            ctx->pc = 0x2FC478u;
            goto label_2fc478;
        }
    }
    ctx->pc = 0x2FC45Cu;
label_2fc45c:
    // 0x2fc45c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2FC45Cu;
    SET_GPR_U32(ctx, 31, 0x2FC464u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC464u; }
        if (ctx->pc != 0x2FC464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC464u; }
        if (ctx->pc != 0x2FC464u) { return; }
    }
    ctx->pc = 0x2FC464u;
label_2fc464:
    // 0x2fc464: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC464u;
    {
        const bool branch_taken_0x2fc464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC464u;
            // 0x2fc468: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc464) {
            ctx->pc = 0x2FC478u;
            goto label_2fc478;
        }
    }
    ctx->pc = 0x2FC46Cu;
label_2fc46c:
    // 0x2fc46c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2FC46Cu;
    SET_GPR_U32(ctx, 31, 0x2FC474u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC474u; }
        if (ctx->pc != 0x2FC474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC474u; }
        if (ctx->pc != 0x2FC474u) { return; }
    }
    ctx->pc = 0x2FC474u;
label_2fc474:
    // 0x2fc474: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2fc474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2fc478:
    // 0x2fc478: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fc478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2fc47c:
    // 0x2fc47c: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x2FC47Cu;
    SET_GPR_U32(ctx, 31, 0x2FC484u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC484u; }
        if (ctx->pc != 0x2FC484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FC484u; }
        if (ctx->pc != 0x2FC484u) { return; }
    }
    ctx->pc = 0x2FC484u;
label_2fc484:
    // 0x2fc484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fc484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc488: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FC488u;
            // 0x2fc48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FC490u;
    ctx->pc = 0x2fc490u;
}
