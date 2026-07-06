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

// Function: sub_00294298
// Address: 0x294298 - 0x294358
void sub_00294298_0x294298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294298_0x294298");
#endif

    switch (ctx->pc) {
        case 0x2942fcu: goto label_2942fc;
        case 0x29431cu: goto label_29431c;
        default: break;
    }

    ctx->pc = 0x294298u;

    // 0x294298: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x294298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x29429c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x29429cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2942a0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2942a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2942a4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2942a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942a8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2942a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2942ac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2942acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2942b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2942b4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2942b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2942b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2942bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2942bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2942c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2942c4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2942c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2942c8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2942c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942cc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2942ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2942d0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2942d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2942d4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2942D4u;
    {
        const bool branch_taken_0x2942d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2942D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2942D4u;
        // 0x2942d8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942d4) {
            ctx->pc = 0x2942FCu;
            goto label_2942fc;
        }
    }
    ctx->pc = 0x2942DCu;
    // 0x2942dc: 0x34620100  ori         $v0, $v1, 0x100
    ctx->pc = 0x2942dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x2942e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2942e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2942e4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2942e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2942e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2942e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942ec: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2942ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2942f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2942f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2942f4: 0xc0a80dc  jal         func_2A0370
    ctx->pc = 0x2942F4u;
    SET_GPR_U32(ctx, 31, 0x2942FCu);
    ctx->pc = 0x2942F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2942F4u;
    // 0x2942f8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0370u, 0x2942F4u, 0x2942FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2942FCu;
label_2942fc:
    // 0x2942fc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2942fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x294300: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x294300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294304: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x294304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294308: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x294308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29430c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x29430cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294310: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x294310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294314: 0xc0a8158  jal         func_2A0560
    ctx->pc = 0x294314u;
    SET_GPR_U32(ctx, 31, 0x29431Cu);
    ctx->pc = 0x294318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294314u;
    // 0x294318: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0560u, 0x294314u, 0x29431Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29431Cu;
label_29431c:
    // 0x29431c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29431Cu;
    {
        const bool branch_taken_0x29431c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x294320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29431Cu;
        // 0x294320: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29431c) {
            ctx->pc = 0x29432Cu;
            goto label_29432c;
        }
    }
    ctx->pc = 0x294324u;
    // 0x294324: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x294324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294328: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x294328u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_29432c:
    // 0x29432c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x29432cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294330: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x294330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x294334: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x294334u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294338: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x294338u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x29433c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x29433cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294340: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x294340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294344: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x294344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294348: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x294348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29434c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29434cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294350: 0x3e00008  jr          $ra
    ctx->pc = 0x294350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294350u;
        // 0x294354: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294358u;
}
