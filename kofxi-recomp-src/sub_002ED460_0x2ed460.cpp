#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED460
// Address: 0x2ed460 - 0x2ed5e0
void sub_002ED460_0x2ed460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED460_0x2ed460");
#endif

    switch (ctx->pc) {
        case 0x2ed4bcu: goto label_2ed4bc;
        case 0x2ed4c4u: goto label_2ed4c4;
        case 0x2ed4c8u: goto label_2ed4c8;
        case 0x2ed4ccu: goto label_2ed4cc;
        case 0x2ed4dcu: goto label_2ed4dc;
        case 0x2ed528u: goto label_2ed528;
        case 0x2ed530u: goto label_2ed530;
        case 0x2ed578u: goto label_2ed578;
        case 0x2ed5bcu: goto label_2ed5bc;
        case 0x2ed5ccu: goto label_2ed5cc;
        case 0x2ed5d8u: goto label_2ed5d8;
        default: break;
    }

    ctx->pc = 0x2ed460u;

    // 0x2ed460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ed460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ed464: 0x3c0d003c  lui         $t5, 0x3C
    ctx->pc = 0x2ed464u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x2ed468: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ed468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ed46c: 0x25afeca8  addiu       $t7, $t5, -0x1358
    ctx->pc = 0x2ed46cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294962344));
    // 0x2ed470: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2ed470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2ed474: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed478: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ed478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ed47c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ed47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed480: 0x8dee038c  lw          $t6, 0x38C($t7)
    ctx->pc = 0x2ed480u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 908)));
    // 0x2ed484: 0x15c00010  bnez        $t6, . + 4 + (0x10 << 2)
    ctx->pc = 0x2ED484u;
    {
        const bool branch_taken_0x2ed484 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED484u;
            // 0x2ed488: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed484) {
            ctx->pc = 0x2ED4C8u;
            goto label_2ed4c8;
        }
    }
    ctx->pc = 0x2ED48Cu;
    // 0x2ed48c: 0x8daeeca8  lw          $t6, -0x1358($t5)
    ctx->pc = 0x2ed48cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294962344)));
    // 0x2ed490: 0x240f0007  addiu       $t7, $zero, 0x7
    ctx->pc = 0x2ed490u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ed494: 0x11cf0011  beq         $t6, $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x2ED494u;
    {
        const bool branch_taken_0x2ed494 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED494u;
            // 0x2ed498: 0x240f0005  addiu       $t7, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed494) {
            ctx->pc = 0x2ED4DCu;
            goto label_2ed4dc;
        }
    }
    ctx->pc = 0x2ED49Cu;
    // 0x2ed49c: 0x11cf000f  beq         $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x2ED49Cu;
    {
        const bool branch_taken_0x2ed49c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED49Cu;
            // 0x2ed4a0: 0x240f0008  addiu       $t7, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed49c) {
            ctx->pc = 0x2ED4DCu;
            goto label_2ed4dc;
        }
    }
    ctx->pc = 0x2ED4A4u;
    // 0x2ed4a4: 0x11cf000d  beq         $t6, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x2ED4A4u;
    {
        const bool branch_taken_0x2ed4a4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x2ED4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4A4u;
            // 0x2ed4a8: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4a4) {
            ctx->pc = 0x2ED4DCu;
            goto label_2ed4dc;
        }
    }
    ctx->pc = 0x2ED4ACu;
    // 0x2ed4ac: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ed4acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ed4b0: 0x24840ac0  addiu       $a0, $a0, 0xAC0
    ctx->pc = 0x2ed4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2752));
    // 0x2ed4b4: 0x24e70ad8  addiu       $a3, $a3, 0xAD8
    ctx->pc = 0x2ed4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2776));
    // 0x2ed4b8: 0x240504f9  addiu       $a1, $zero, 0x4F9
    ctx->pc = 0x2ed4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1273));
label_2ed4bc:
    // 0x2ed4bc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2ED4BCu;
    SET_GPR_U32(ctx, 31, 0x2ED4C4u);
    ctx->pc = 0x2ED4C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4BCu;
            // 0x2ed4c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4C4u; }
        if (ctx->pc != 0x2ED4C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4C4u; }
        if (ctx->pc != 0x2ED4C4u) { return; }
    }
    ctx->pc = 0x2ED4C4u;
label_2ed4c4:
    // 0x2ed4c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ed4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed4c8:
    // 0x2ed4c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ed4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed4cc:
    // 0x2ed4cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2ed4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ed4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ed4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4D4u;
            // 0x2ed4d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED4DCu;
label_2ed4dc:
    // 0x2ed4dc: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2ed4dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2ed4e0: 0x25e4eca8  addiu       $a0, $t7, -0x1358
    ctx->pc = 0x2ed4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2ed4e4: 0x8c8e0004  lw          $t6, 0x4($a0)
    ctx->pc = 0x2ed4e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ed4e8: 0x11c00006  beqz        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED4E8u;
    {
        const bool branch_taken_0x2ed4e8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4E8u;
            // 0x2ed4ec: 0x3c070040  lui         $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4e8) {
            ctx->pc = 0x2ED504u;
            goto label_2ed504;
        }
    }
    ctx->pc = 0x2ED4F0u;
    // 0x2ed4f0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed4f4: 0x24840ac0  addiu       $a0, $a0, 0xAC0
    ctx->pc = 0x2ed4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2752));
    // 0x2ed4f8: 0x24e70ad8  addiu       $a3, $a3, 0xAD8
    ctx->pc = 0x2ed4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2776));
    // 0x2ed4fc: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2ED4FCu;
    {
        const bool branch_taken_0x2ed4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4FCu;
            // 0x2ed500: 0x240504fd  addiu       $a1, $zero, 0x4FD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4fc) {
            ctx->pc = 0x2ED4BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed4bc;
        }
    }
    ctx->pc = 0x2ED504u;
label_2ed504:
    // 0x2ed504: 0x601000c  bgez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x2ED504u;
    {
        const bool branch_taken_0x2ed504 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2ED508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED504u;
            // 0x2ed508: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed504) {
            ctx->pc = 0x2ED538u;
            goto label_2ed538;
        }
    }
    ctx->pc = 0x2ED50Cu;
    // 0x2ed50c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed510: 0x24840ac0  addiu       $a0, $a0, 0xAC0
    ctx->pc = 0x2ed510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2752));
    // 0x2ed514: 0x25080af8  addiu       $t0, $t0, 0xAF8
    ctx->pc = 0x2ed514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2808));
    // 0x2ed518: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2ed518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed51c: 0x24050503  addiu       $a1, $zero, 0x503
    ctx->pc = 0x2ed51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x2ed520: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed524: 0x24078acc  addiu       $a3, $zero, -0x7534
    ctx->pc = 0x2ed524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937292));
label_2ed528:
    // 0x2ed528: 0xc0bc73e  jal         func_2F1CF8
    ctx->pc = 0x2ED528u;
    SET_GPR_U32(ctx, 31, 0x2ED530u);
    ctx->pc = 0x2F1CF8u;
    if (runtime->hasFunction(0x2F1CF8u)) {
        auto targetFn = runtime->lookupFunction(0x2F1CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED530u; }
        if (ctx->pc != 0x2ED530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED530u; }
        if (ctx->pc != 0x2ED530u) { return; }
    }
    ctx->pc = 0x2ED530u;
label_2ed530:
    // 0x2ed530: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x2ED530u;
    {
        const bool branch_taken_0x2ed530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED530u;
            // 0x2ed534: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed530) {
            ctx->pc = 0x2ED4CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed4cc;
        }
    }
    ctx->pc = 0x2ED538u;
label_2ed538:
    // 0x2ed538: 0x1200ffe3  beqz        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2ED538u;
    {
        const bool branch_taken_0x2ed538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED538u;
            // 0x2ed53c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed538) {
            ctx->pc = 0x2ED4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed4c8;
        }
    }
    ctx->pc = 0x2ED540u;
    // 0x2ed540: 0x2a0f0100  slti        $t7, $s0, 0x100
    ctx->pc = 0x2ed540u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x2ed544: 0x55e0000a  bnel        $t7, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED544u;
    {
        const bool branch_taken_0x2ed544 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed544) {
            ctx->pc = 0x2ED548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED544u;
            // 0x2ed548: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED570u;
            goto label_2ed570;
        }
    }
    ctx->pc = 0x2ED54Cu;
    // 0x2ed54c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed54cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed550: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed550u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed554: 0x24840ac0  addiu       $a0, $a0, 0xAC0
    ctx->pc = 0x2ed554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2752));
    // 0x2ed558: 0x25080b10  addiu       $t0, $t0, 0xB10
    ctx->pc = 0x2ed558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2832));
    // 0x2ed55c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2ed55cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed560: 0x24050511  addiu       $a1, $zero, 0x511
    ctx->pc = 0x2ed560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1297));
    // 0x2ed564: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed568: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x2ED568u;
    {
        const bool branch_taken_0x2ed568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED568u;
            // 0x2ed56c: 0x24078acb  addiu       $a3, $zero, -0x7535 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed568) {
            ctx->pc = 0x2ED528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed528;
        }
    }
    ctx->pc = 0x2ED570u;
label_2ed570:
    // 0x2ed570: 0xc0bc378  jal         func_2F0DE0
    ctx->pc = 0x2ED570u;
    SET_GPR_U32(ctx, 31, 0x2ED578u);
    ctx->pc = 0x2ED574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED570u;
            // 0x2ed574: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0DE0u;
    if (runtime->hasFunction(0x2F0DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED578u; }
        if (ctx->pc != 0x2ED578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0DE0_0x2f0de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED578u; }
        if (ctx->pc != 0x2ED578u) { return; }
    }
    ctx->pc = 0x2ED578u;
label_2ed578:
    // 0x2ed578: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2ed578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2ed57c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2ed57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ed580: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ED580u;
    {
        const bool branch_taken_0x2ed580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed580) {
            ctx->pc = 0x2ED584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED580u;
            // 0x2ed584: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED5ACu;
            goto label_2ed5ac;
        }
    }
    ctx->pc = 0x2ED588u;
    // 0x2ed588: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ed588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ed58c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2ed58cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2ed590: 0x24840ac0  addiu       $a0, $a0, 0xAC0
    ctx->pc = 0x2ed590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2752));
    // 0x2ed594: 0x25080b28  addiu       $t0, $t0, 0xB28
    ctx->pc = 0x2ed594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2856));
    // 0x2ed598: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2ed598u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed59c: 0x24050514  addiu       $a1, $zero, 0x514
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
    // 0x2ed5a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2ed5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ed5a4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2ED5A4u;
    {
        const bool branch_taken_0x2ed5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5A4u;
            // 0x2ed5a8: 0x24078ac9  addiu       $a3, $zero, -0x7537 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294937289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5a4) {
            ctx->pc = 0x2ED528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed528;
        }
    }
    ctx->pc = 0x2ED5ACu;
label_2ed5ac:
    // 0x2ed5ac: 0x320700ff  andi        $a3, $s0, 0xFF
    ctx->pc = 0x2ed5acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2ed5b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ed5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5b4: 0xc0bc1de  jal         func_2F0778
    ctx->pc = 0x2ED5B4u;
    SET_GPR_U32(ctx, 31, 0x2ED5BCu);
    ctx->pc = 0x2ED5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5B4u;
            // 0x2ed5b8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0778u;
    if (runtime->hasFunction(0x2F0778u)) {
        auto targetFn = runtime->lookupFunction(0x2F0778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5BCu; }
        if (ctx->pc != 0x2ED5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0778_0x2f0778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5BCu; }
        if (ctx->pc != 0x2ED5BCu) { return; }
    }
    ctx->pc = 0x2ED5BCu;
label_2ed5bc:
    // 0x2ed5bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ed5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed5c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ed5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5c4: 0xc0bc280  jal         func_2F0A00
    ctx->pc = 0x2ED5C4u;
    SET_GPR_U32(ctx, 31, 0x2ED5CCu);
    ctx->pc = 0x2ED5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5C4u;
            // 0x2ed5c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A00u;
    if (runtime->hasFunction(0x2F0A00u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5CCu; }
        if (ctx->pc != 0x2ED5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A00_0x2f0a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5CCu; }
        if (ctx->pc != 0x2ED5CCu) { return; }
    }
    ctx->pc = 0x2ED5CCu;
label_2ed5cc:
    // 0x2ed5cc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ed5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed5d0: 0xc0bc390  jal         func_2F0E40
    ctx->pc = 0x2ED5D0u;
    SET_GPR_U32(ctx, 31, 0x2ED5D8u);
    ctx->pc = 0x2ED5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5D0u;
            // 0x2ed5d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0E40u;
    if (runtime->hasFunction(0x2F0E40u)) {
        auto targetFn = runtime->lookupFunction(0x2F0E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5D8u; }
        if (ctx->pc != 0x2ED5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0E40_0x2f0e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5D8u; }
        if (ctx->pc != 0x2ED5D8u) { return; }
    }
    ctx->pc = 0x2ED5D8u;
label_2ed5d8:
    // 0x2ed5d8: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x2ED5D8u;
    {
        const bool branch_taken_0x2ed5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5D8u;
            // 0x2ed5dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5d8) {
            ctx->pc = 0x2ED4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ed4c8;
        }
    }
    ctx->pc = 0x2ED5E0u;
    ctx->pc = 0x2ed5e0u;
}
