#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002858C0
// Address: 0x2858c0 - 0x285a30
void sub_002858C0_0x2858c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002858C0_0x2858c0");
#endif

    switch (ctx->pc) {
        case 0x28592cu: goto label_28592c;
        case 0x285968u: goto label_285968;
        case 0x285980u: goto label_285980;
        case 0x2859e8u: goto label_2859e8;
        case 0x285a2cu: goto label_285a2c;
        default: break;
    }

    ctx->pc = 0x2858c0u;

    // 0x2858c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2858c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2858c4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2858c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2858c8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2858c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2858cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2858ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2858d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2858d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2858d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2858d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2858d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2858dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2858dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2858e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2858e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2858e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2858e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2858e8: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x2858e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2858ec: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x2858ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2858f0: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x2858f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2858f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2858F4u;
    {
        const bool branch_taken_0x2858f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2858F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2858F4u;
        // 0x2858f8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2858f4) {
            ctx->pc = 0x285910u;
            goto label_285910;
        }
    }
    ctx->pc = 0x2858FCu;
    // 0x2858fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2858fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285900: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x285900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285904: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x285904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285908: 0x8e320004  lw          $s2, 0x4($s1)
    ctx->pc = 0x285908u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28590c: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x28590cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_285910:
    // 0x285910: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x285910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x285914: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x285914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x285918: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x285918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28591c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28591Cu;
    {
        const bool branch_taken_0x28591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28591c) {
            ctx->pc = 0x28593Cu;
            goto label_28593c;
        }
    }
    ctx->pc = 0x285924u;
    // 0x285924: 0xc0a1ada  jal         func_286B68
    ctx->pc = 0x285924u;
    SET_GPR_U32(ctx, 31, 0x28592Cu);
    ctx->pc = 0x285928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285924u;
    // 0x285928: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286B68u, 0x285924u, 0x28592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28592Cu;
label_28592c:
    // 0x28592c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28592Cu;
    {
        const bool branch_taken_0x28592c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28592c) {
            ctx->pc = 0x285930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28592Cu;
            // 0x285930: 0xaeb20004  sw          $s2, 0x4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28594Cu;
            goto label_28594c;
        }
    }
    ctx->pc = 0x285934u;
    // 0x285934: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x285934u;
    {
        const bool branch_taken_0x285934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285934u;
        // 0x285938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285934) {
            ctx->pc = 0x285A08u;
            goto label_285a08;
        }
    }
    ctx->pc = 0x28593Cu;
label_28593c:
    // 0x28593c: 0x56a00003  bnel        $s5, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28593Cu;
    {
        const bool branch_taken_0x28593c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x28593c) {
            ctx->pc = 0x285940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28593Cu;
            // 0x285940: 0xaeb20004  sw          $s2, 0x4($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28594Cu;
            goto label_28594c;
        }
    }
    ctx->pc = 0x285944u;
    // 0x285944: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x285944u;
    {
        const bool branch_taken_0x285944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285944u;
        // 0x285948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285944) {
            ctx->pc = 0x285A08u;
            goto label_285a08;
        }
    }
    ctx->pc = 0x28594Cu;
label_28594c:
    // 0x28594c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x28594cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285950: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x285950u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x285954: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x285954u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x285958: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x285958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28595c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28595cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285960: 0xc0a2446  jal         func_289118
    ctx->pc = 0x285960u;
    SET_GPR_U32(ctx, 31, 0x285968u);
    ctx->pc = 0x285964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285960u;
    // 0x285964: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289118u, 0x285960u, 0x285968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285968u;
label_285968:
    // 0x285968: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x285968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x28596c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28596cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285970: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x285970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x285974: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x285974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285978: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x285978u;
    {
        const bool branch_taken_0x285978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285978u;
        // 0x28597c: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285978) {
            ctx->pc = 0x2859D4u;
            goto label_2859d4;
        }
    }
    ctx->pc = 0x285980u;
label_285980:
    // 0x285980: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x285980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x285984: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x285984u;
    {
        const bool branch_taken_0x285984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x285984) {
            ctx->pc = 0x2859B8u;
            goto label_2859b8;
        }
    }
    ctx->pc = 0x28598Cu;
    // 0x28598c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x28598cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x285990: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x285990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x285994: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x285994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x285998: 0x64620001  daddiu      $v0, $v1, 0x1
    ctx->pc = 0x285998u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x28599c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x28599cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2859a0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2859a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2859a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2859A4u;
    {
        const bool branch_taken_0x2859a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2859A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859A4u;
        // 0x2859a8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859a4) {
            ctx->pc = 0x285980u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285980;
        }
    }
    ctx->pc = 0x2859ACu;
    // 0x2859ac: 0xf2102a  slt         $v0, $a3, $s2
    ctx->pc = 0x2859acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2859b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2859B0u;
    {
        const bool branch_taken_0x2859b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2859B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859B0u;
        // 0x2859b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859b0) {
            ctx->pc = 0x2859D4u;
            goto label_2859d4;
        }
    }
    ctx->pc = 0x2859B8u;
label_2859b8:
    // 0x2859b8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2859B8u;
    {
        const bool branch_taken_0x2859b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859B8u;
        // 0x2859bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859b8) {
            ctx->pc = 0x2859D4u;
            goto label_2859d4;
        }
    }
    ctx->pc = 0x2859C0u;
    // 0x2859c0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2859c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2859c4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2859c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2859c8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2859c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2859cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2859ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2859d0: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x2859d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_2859d4:
    // 0x2859d4: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x2859D4u;
    {
        const bool branch_taken_0x2859d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2859D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859D4u;
        // 0x2859d8: 0xf2102a  slt         $v0, $a3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859d4) {
            ctx->pc = 0x285A04u;
            goto label_285a04;
        }
    }
    ctx->pc = 0x2859DCu;
    // 0x2859dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2859DCu;
    {
        const bool branch_taken_0x2859dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2859E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2859DCu;
        // 0x2859e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2859dc) {
            ctx->pc = 0x285A08u;
            goto label_285a08;
        }
    }
    ctx->pc = 0x2859E4u;
    // 0x2859e4: 0x2473823  subu        $a3, $s2, $a3
    ctx->pc = 0x2859e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_2859e8:
    // 0x2859e8: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x2859e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2859ec: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2859ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2859f0: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x2859f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2859f4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2859f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2859f8: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2859f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2859fc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2859FCu;
    {
        const bool branch_taken_0x2859fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2859fc) {
            ctx->pc = 0x2859E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2859e8;
        }
    }
    ctx->pc = 0x285A04u;
label_285a04:
    // 0x285a04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x285a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285a08:
    // 0x285a08: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x285a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x285a0c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x285a0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x285a10: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x285a10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x285a14: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x285a14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285a18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x285a18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285a1c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285a24: 0x3e00008  jr          $ra
    ctx->pc = 0x285A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285A24u;
        // 0x285a28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285A2Cu;
label_285a2c:
    // 0x285a2c: 0x0  nop
    ctx->pc = 0x285a2cu;
    // NOP
    if (ctx->pc == 0x285a2cu) { ctx->pc = 0x285a30u; }
}
