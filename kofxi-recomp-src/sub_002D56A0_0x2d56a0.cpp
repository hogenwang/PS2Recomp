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

// Function: sub_002D56A0
// Address: 0x2d56a0 - 0x2d5758
void sub_002D56A0_0x2d56a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D56A0_0x2d56a0");
#endif

    switch (ctx->pc) {
        case 0x2d56dcu: goto label_2d56dc;
        case 0x2d56ecu: goto label_2d56ec;
        default: break;
    }

    ctx->pc = 0x2d56a0u;

    // 0x2d56a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d56a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d56a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d56a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d56a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d56a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d56acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d56b0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2d56b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d56b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d56b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d56b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d56bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d56c0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d56c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d56c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d56c8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d56c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56cc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d56ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d56d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d56d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d56d4: 0xc0b22ec  jal         func_2C8BB0
    ctx->pc = 0x2D56D4u;
    SET_GPR_U32(ctx, 31, 0x2D56DCu);
    ctx->pc = 0x2D56D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D56D4u;
    // 0x2d56d8: 0x120a82d  daddu       $s5, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BB0u, 0x2D56D4u, 0x2D56DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56DCu;
label_2d56dc:
    // 0x2d56dc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D56DCu;
    {
        const bool branch_taken_0x2d56dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D56DCu;
        // 0x2d56e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d56dc) {
            ctx->pc = 0x2D5730u;
            goto label_2d5730;
        }
    }
    ctx->pc = 0x2D56E4u;
    // 0x2d56e4: 0xc0b22fa  jal         func_2C8BE8
    ctx->pc = 0x2D56E4u;
    SET_GPR_U32(ctx, 31, 0x2D56ECu);
    ctx->pc = 0x2C8BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8BE8u, 0x2D56E4u, 0x2D56ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D56ECu;
label_2d56ec:
    // 0x2d56ec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D56ECu;
    {
        const bool branch_taken_0x2d56ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d56ec) {
            ctx->pc = 0x2D56F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D56ECu;
            // 0x2d56f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5734u;
            goto label_2d5734;
        }
    }
    ctx->pc = 0x2D56F4u;
    // 0x2d56f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d56f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d56f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d56f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d56fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d56fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5700: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d5704: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d5704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5708: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d5708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d570c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d570cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5710: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5710u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5714: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d5714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5718: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d571c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2d571cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5720: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5720u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5724: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d5724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d5728: 0x80b1bd6  j           func_2C6F58
    ctx->pc = 0x2D5728u;
    ctx->pc = 0x2D572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5728u;
    // 0x2d572c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6F58u, 0x2D5728u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2D5730u;
label_2d5730:
    // 0x2d5730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d5730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d5734:
    // 0x2d5734: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d5734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d5738: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d5738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d573c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d573cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5740: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d5740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d5744: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d5744u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d5748: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d5748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d574c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D574Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D574Cu;
        // 0x2d5750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D574Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5754u;
    // 0x2d5754: 0x0  nop
    ctx->pc = 0x2d5754u;
    // NOP
    if (ctx->pc == 0x2d5754u) { ctx->pc = 0x2d5758u; }
}
