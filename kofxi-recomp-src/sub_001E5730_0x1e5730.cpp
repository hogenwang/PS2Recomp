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

// Function: sub_001E5730
// Address: 0x1e5730 - 0x1e57b8
void sub_001E5730_0x1e5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5730_0x1e5730");
#endif

    switch (ctx->pc) {
        case 0x1e575cu: goto label_1e575c;
        default: break;
    }

    ctx->pc = 0x1e5730u;

    // 0x1e5730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5738: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e5738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e573c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e573cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5740: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e5740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e5748: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1e5748u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e574c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e5750: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e5754: 0xc078a58  jal         func_1E2960
    ctx->pc = 0x1E5754u;
    SET_GPR_U32(ctx, 31, 0x1E575Cu);
    ctx->pc = 0x1E5758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5754u;
    // 0x1e5758: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2960u, 0x1E5754u, 0x1E575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E575Cu;
label_1e575c:
    // 0x1e575c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e575cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e5760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5764: 0x2484e300  addiu       $a0, $a0, -0x1D00
    ctx->pc = 0x1e5764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959872));
    // 0x1e5768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e576c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1e576cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5770: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1e5770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5774: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5774u;
    {
        const bool branch_taken_0x1e5774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5774u;
        // 0x1e5778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5774) {
            ctx->pc = 0x1E5798u;
            goto label_1e5798;
        }
    }
    ctx->pc = 0x1E577Cu;
    // 0x1e577c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e577cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5780: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5780u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5784: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5788: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e5788u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e578c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e578cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5790: 0x8079afa  j           func_1E6BE8
    ctx->pc = 0x1E5790u;
    ctx->pc = 0x1E5794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5790u;
    // 0x1e5794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    sub_001E6BE8_0x1e6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E5798u;
label_1e5798:
    // 0x1e5798: 0x8e640048  lw          $a0, 0x48($s3)
    ctx->pc = 0x1e5798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1e579c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e579cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e57a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e57a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e57a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e57a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e57a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e57a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e57ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e57acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e57b0: 0x80717e8  j           func_1C5FA0
    ctx->pc = 0x1E57B0u;
    ctx->pc = 0x1E57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E57B0u;
    // 0x1e57b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5FA0u;
    sub_001C5FA0_0x1c5fa0(rdram, ctx, runtime); return;
    ctx->pc = 0x1E57B8u;
}
