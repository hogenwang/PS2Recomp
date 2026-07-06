#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC4B0
// Address: 0x1dc4b0 - 0x1dc578
void sub_001DC4B0_0x1dc4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC4B0_0x1dc4b0");
#endif

    switch (ctx->pc) {
        case 0x1dc4d4u: goto label_1dc4d4;
        case 0x1dc4e8u: goto label_1dc4e8;
        case 0x1dc504u: goto label_1dc504;
        case 0x1dc520u: goto label_1dc520;
        case 0x1dc52cu: goto label_1dc52c;
        case 0x1dc544u: goto label_1dc544;
        case 0x1dc54cu: goto label_1dc54c;
        default: break;
    }

    ctx->pc = 0x1dc4b0u;

    // 0x1dc4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc4b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dc4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dc4b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dc4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dc4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dc4c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dc4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dc4c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dc4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dc4c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dc4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dc4cc: 0xc074000  jal         func_1D0000
    ctx->pc = 0x1DC4CCu;
    SET_GPR_U32(ctx, 31, 0x1DC4D4u);
    ctx->pc = 0x1DC4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4CCu;
            // 0x1dc4d0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0000u;
    if (runtime->hasFunction(0x1D0000u)) {
        auto targetFn = runtime->lookupFunction(0x1D0000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4D4u; }
        if (ctx->pc != 0x1DC4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0000_0x1d0000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC4D4u; }
        if (ctx->pc != 0x1DC4D4u) { return; }
    }
    ctx->pc = 0x1DC4D4u;
label_1dc4d4:
    // 0x1dc4d4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DC4D4u;
    {
        const bool branch_taken_0x1dc4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4D4u;
            // 0x1dc4d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4d4) {
            ctx->pc = 0x1DC558u;
            goto label_1dc558;
        }
    }
    ctx->pc = 0x1DC4DCu;
    // 0x1dc4dc: 0x263003d8  addiu       $s0, $s1, 0x3D8
    ctx->pc = 0x1dc4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 984));
    // 0x1dc4e0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1dc4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dc4e4: 0x0  nop
    ctx->pc = 0x1dc4e4u;
    // NOP
label_1dc4e8:
    // 0x1dc4e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1dc4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc4ec: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1dc4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dc4f0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1dc4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1dc4f4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x1dc4f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dc4f8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1dc4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1dc4fc: 0xc074082  jal         func_1D0208
    ctx->pc = 0x1DC4FCu;
    SET_GPR_U32(ctx, 31, 0x1DC504u);
    ctx->pc = 0x1DC500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC4FCu;
            // 0x1dc500: 0x8e2403d0  lw          $a0, 0x3D0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0208u;
    if (runtime->hasFunction(0x1D0208u)) {
        auto targetFn = runtime->lookupFunction(0x1D0208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC504u; }
        if (ctx->pc != 0x1DC504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0208_0x1d0208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC504u; }
        if (ctx->pc != 0x1DC504u) { return; }
    }
    ctx->pc = 0x1DC504u;
label_1dc504:
    // 0x1dc504: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1dc504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1dc508: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DC508u;
    {
        const bool branch_taken_0x1dc508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc508) {
            ctx->pc = 0x1DC50Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC508u;
            // 0x1dc50c: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DC4E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc4e8;
        }
    }
    ctx->pc = 0x1DC510u;
    // 0x1dc510: 0x8e2403d0  lw          $a0, 0x3D0($s1)
    ctx->pc = 0x1dc510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
    // 0x1dc514: 0x8e250408  lw          $a1, 0x408($s1)
    ctx->pc = 0x1dc514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1032)));
    // 0x1dc518: 0xc07408c  jal         func_1D0230
    ctx->pc = 0x1DC518u;
    SET_GPR_U32(ctx, 31, 0x1DC520u);
    ctx->pc = 0x1DC51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC518u;
            // 0x1dc51c: 0x8e26040c  lw          $a2, 0x40C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1036)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0230u;
    if (runtime->hasFunction(0x1D0230u)) {
        auto targetFn = runtime->lookupFunction(0x1D0230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC520u; }
        if (ctx->pc != 0x1DC520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0230_0x1d0230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC520u; }
        if (ctx->pc != 0x1DC520u) { return; }
    }
    ctx->pc = 0x1DC520u;
label_1dc520:
    // 0x1dc520: 0x8e2403d0  lw          $a0, 0x3D0($s1)
    ctx->pc = 0x1dc520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
    // 0x1dc524: 0xc0740a0  jal         func_1D0280
    ctx->pc = 0x1DC524u;
    SET_GPR_U32(ctx, 31, 0x1DC52Cu);
    ctx->pc = 0x1DC528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC524u;
            // 0x1dc528: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0280u;
    if (runtime->hasFunction(0x1D0280u)) {
        auto targetFn = runtime->lookupFunction(0x1D0280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC52Cu; }
        if (ctx->pc != 0x1DC52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0280_0x1d0280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC52Cu; }
        if (ctx->pc != 0x1DC52Cu) { return; }
    }
    ctx->pc = 0x1DC52Cu;
label_1dc52c:
    // 0x1dc52c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DC52Cu;
    {
        const bool branch_taken_0x1dc52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC52Cu;
            // 0x1dc530: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc52c) {
            ctx->pc = 0x1DC55Cu;
            goto label_1dc55c;
        }
    }
    ctx->pc = 0x1DC534u;
    // 0x1dc534: 0x8e2403d0  lw          $a0, 0x3D0($s1)
    ctx->pc = 0x1dc534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 976)));
    // 0x1dc538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dc538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc53c: 0xc074096  jal         func_1D0258
    ctx->pc = 0x1DC53Cu;
    SET_GPR_U32(ctx, 31, 0x1DC544u);
    ctx->pc = 0x1DC540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC53Cu;
            // 0x1dc540: 0x26260410  addiu       $a2, $s1, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0258u;
    if (runtime->hasFunction(0x1D0258u)) {
        auto targetFn = runtime->lookupFunction(0x1D0258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC544u; }
        if (ctx->pc != 0x1DC544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0258_0x1d0258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC544u; }
        if (ctx->pc != 0x1DC544u) { return; }
    }
    ctx->pc = 0x1DC544u;
label_1dc544:
    // 0x1dc544: 0xc07715e  jal         func_1DC578
    ctx->pc = 0x1DC544u;
    SET_GPR_U32(ctx, 31, 0x1DC54Cu);
    ctx->pc = 0x1DC548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC544u;
            // 0x1dc548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC578u;
    if (runtime->hasFunction(0x1DC578u)) {
        auto targetFn = runtime->lookupFunction(0x1DC578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC54Cu; }
        if (ctx->pc != 0x1DC54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC578_0x1dc578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DC54Cu; }
        if (ctx->pc != 0x1DC54Cu) { return; }
    }
    ctx->pc = 0x1DC54Cu;
label_1dc54c:
    // 0x1dc54c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC54Cu;
    {
        const bool branch_taken_0x1dc54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC54Cu;
            // 0x1dc550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc54c) {
            ctx->pc = 0x1DC55Cu;
            goto label_1dc55c;
        }
    }
    ctx->pc = 0x1DC554u;
    // 0x1dc554: 0x0  nop
    ctx->pc = 0x1dc554u;
    // NOP
label_1dc558:
    // 0x1dc558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dc558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dc55c:
    // 0x1dc55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dc55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dc560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dc564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc568: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dc568u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc56c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dc56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc570: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC570u;
            // 0x1dc574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC578u;
    ctx->pc = 0x1dc578u;
}
