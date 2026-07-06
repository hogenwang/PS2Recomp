#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0440
// Address: 0x1e0440 - 0x1e0568
void sub_001E0440_0x1e0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0440_0x1e0440");
#endif

    switch (ctx->pc) {
        case 0x1e04d8u: goto label_1e04d8;
        case 0x1e0534u: goto label_1e0534;
        case 0x1e0558u: goto label_1e0558;
        default: break;
    }

    ctx->pc = 0x1e0440u;

    // 0x1e0440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e0444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e044c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e044cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0454: 0x26030488  addiu       $v1, $s0, 0x488
    ctx->pc = 0x1e0454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1160));
    // 0x1e0458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e045c: 0x260704a8  addiu       $a3, $s0, 0x4A8
    ctx->pc = 0x1e045cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1192));
    // 0x1e0460: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e0460u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0464: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0468: 0x14460009  bne         $v0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0468u;
    {
        const bool branch_taken_0x1e0468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E046Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0468u;
            // 0x1e046c: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0468) {
            ctx->pc = 0x1E0490u;
            goto label_1e0490;
        }
    }
    ctx->pc = 0x1E0470u;
    // 0x1e0470: 0x8c6a0018  lw          $t2, 0x18($v1)
    ctx->pc = 0x1e0470u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1e0474: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1e0474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e0478: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1e0478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1e047c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e0480: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x1e0480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x1e0484: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x1e0484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x1e0488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0488u;
    {
        const bool branch_taken_0x1e0488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E048Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0488u;
            // 0x1e048c: 0x2c6d0001  sltiu       $t5, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0488) {
            ctx->pc = 0x1E0494u;
            goto label_1e0494;
        }
    }
    ctx->pc = 0x1E0490u;
label_1e0490:
    // 0x1e0490: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1e0490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1e0494:
    // 0x1e0494: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1e0494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e0498: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e0498u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e049c: 0x14a60007  bne         $a1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E049Cu;
    {
        const bool branch_taken_0x1e049c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x1E04A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E049Cu;
            // 0x1e04a0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e049c) {
            ctx->pc = 0x1E04BCu;
            goto label_1e04bc;
        }
    }
    ctx->pc = 0x1E04A4u;
    // 0x1e04a4: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x1e04a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1e04a8: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x1e04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x1e04ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e04acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e04b0: 0x8c430160  lw          $v1, 0x160($v0)
    ctx->pc = 0x1e04b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x1e04b4: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x1e04b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x1e04b8: 0x2c6c0001  sltiu       $t4, $v1, 0x1
    ctx->pc = 0x1e04b8u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1e04bc:
    // 0x1e04bc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1e04bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e04c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e04c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e04c8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1e04c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e04cc: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x1e04ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1e04d0: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x1e04d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x1e04d4: 0x0  nop
    ctx->pc = 0x1e04d4u;
    // NOP
label_1e04d8:
    // 0x1e04d8: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x1e04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1e04dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e04dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e04e0: 0x548b0009  bnel        $a0, $t3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E04E0u;
    {
        const bool branch_taken_0x1e04e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 11));
        if (branch_taken_0x1e04e0) {
            ctx->pc = 0x1E04E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04E0u;
            // 0x1e04e4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0508u;
            goto label_1e0508;
        }
    }
    ctx->pc = 0x1E04E8u;
    // 0x1e04e8: 0x50aa0007  beql        $a1, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E04E8u;
    {
        const bool branch_taken_0x1e04e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 10));
        if (branch_taken_0x1e04e8) {
            ctx->pc = 0x1E04ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04E8u;
            // 0x1e04ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0508u;
            goto label_1e0508;
        }
    }
    ctx->pc = 0x1E04F0u;
    // 0x1e04f0: 0x10a80004  beq         $a1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E04F0u;
    {
        const bool branch_taken_0x1e04f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        ctx->pc = 0x1E04F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E04F0u;
            // 0x1e04f4: 0xe61821  addu        $v1, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04f0) {
            ctx->pc = 0x1E0504u;
            goto label_1e0504;
        }
    }
    ctx->pc = 0x1E04F8u;
    // 0x1e04f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e04fc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1e04fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x1e0500: 0x82880a  movz        $s1, $a0, $v0
    ctx->pc = 0x1e0500u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
label_1e0504:
    // 0x1e0504: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e0504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e0508:
    // 0x1e0508: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1e0508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1e050c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1E050Cu;
    {
        const bool branch_taken_0x1e050c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E050Cu;
            // 0x1e0510: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e050c) {
            ctx->pc = 0x1E04D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e04d8;
        }
    }
    ctx->pc = 0x1E0514u;
    // 0x1e0514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0518: 0x11a20003  beq         $t5, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0518u;
    {
        const bool branch_taken_0x1e0518 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E051Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0518u;
            // 0x1e051c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0518) {
            ctx->pc = 0x1E0528u;
            goto label_1e0528;
        }
    }
    ctx->pc = 0x1E0520u;
    // 0x1e0520: 0x15820004  bne         $t4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0520u;
    {
        const bool branch_taken_0x1e0520 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e0520) {
            ctx->pc = 0x1E0534u;
            goto label_1e0534;
        }
    }
    ctx->pc = 0x1E0528u;
label_1e0528:
    // 0x1e0528: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1e0528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1e052c: 0xc078a16  jal         func_1E2858
    ctx->pc = 0x1E052Cu;
    SET_GPR_U32(ctx, 31, 0x1E0534u);
    ctx->pc = 0x1E0530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E052Cu;
            // 0x1e0530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2858u;
    if (runtime->hasFunction(0x1E2858u)) {
        auto targetFn = runtime->lookupFunction(0x1E2858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0534u; }
        if (ctx->pc != 0x1E0534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2858_0x1e2858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0534u; }
        if (ctx->pc != 0x1E0534u) { return; }
    }
    ctx->pc = 0x1E0534u;
label_1e0534:
    // 0x1e0534: 0x56200008  bnel        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0534u;
    {
        const bool branch_taken_0x1e0534 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0534) {
            ctx->pc = 0x1E0538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0534u;
            // 0x1e0538: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0558u;
            goto label_1e0558;
        }
    }
    ctx->pc = 0x1E053Cu;
    // 0x1e053c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e053cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0544: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e054c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e054cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0550: 0x80788c6  j           func_1E2318
    ctx->pc = 0x1E0550u;
    ctx->pc = 0x1E0554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0550u;
            // 0x1e0554: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2318u;
    {
        auto targetFn = runtime->lookupFunction(0x1E2318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E0558u;
label_1e0558:
    // 0x1e0558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e055c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e055cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0560: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0560u;
            // 0x1e0564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0568u;
    ctx->pc = 0x1e0568u;
}
