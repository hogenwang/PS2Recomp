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

// Function: sub_002B0778
// Address: 0x2b0778 - 0x2b0818
void sub_002B0778_0x2b0778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0778_0x2b0778");
#endif

    switch (ctx->pc) {
        case 0x2b0778u: goto label_2b0778;
        case 0x2b077cu: goto label_2b077c;
        case 0x2b0780u: goto label_2b0780;
        case 0x2b0784u: goto label_2b0784;
        case 0x2b0788u: goto label_2b0788;
        case 0x2b078cu: goto label_2b078c;
        case 0x2b0790u: goto label_2b0790;
        case 0x2b0794u: goto label_2b0794;
        case 0x2b0798u: goto label_2b0798;
        case 0x2b079cu: goto label_2b079c;
        case 0x2b07a0u: goto label_2b07a0;
        case 0x2b07a4u: goto label_2b07a4;
        case 0x2b07a8u: goto label_2b07a8;
        case 0x2b07acu: goto label_2b07ac;
        case 0x2b07b0u: goto label_2b07b0;
        case 0x2b07b4u: goto label_2b07b4;
        case 0x2b07b8u: goto label_2b07b8;
        case 0x2b07bcu: goto label_2b07bc;
        case 0x2b07c0u: goto label_2b07c0;
        case 0x2b07c4u: goto label_2b07c4;
        case 0x2b07c8u: goto label_2b07c8;
        case 0x2b07ccu: goto label_2b07cc;
        case 0x2b07d0u: goto label_2b07d0;
        case 0x2b07d4u: goto label_2b07d4;
        case 0x2b07d8u: goto label_2b07d8;
        case 0x2b07dcu: goto label_2b07dc;
        case 0x2b07e0u: goto label_2b07e0;
        case 0x2b07e4u: goto label_2b07e4;
        case 0x2b07e8u: goto label_2b07e8;
        case 0x2b07ecu: goto label_2b07ec;
        case 0x2b07f0u: goto label_2b07f0;
        case 0x2b07f4u: goto label_2b07f4;
        case 0x2b07f8u: goto label_2b07f8;
        case 0x2b07fcu: goto label_2b07fc;
        case 0x2b0800u: goto label_2b0800;
        case 0x2b0804u: goto label_2b0804;
        case 0x2b0808u: goto label_2b0808;
        case 0x2b080cu: goto label_2b080c;
        case 0x2b0810u: goto label_2b0810;
        case 0x2b0814u: goto label_2b0814;
        default: break;
    }

    ctx->pc = 0x2b0778u;

label_2b0778:
    // 0x2b0778: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b0778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b077c:
    // 0x2b077c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b0780:
    // 0x2b0780: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b0780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b0784:
    // 0x2b0784: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b0784u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0788:
    // 0x2b0788: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b0788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b078c:
    // 0x2b078c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b078cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0790:
    // 0x2b0790: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2b0790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2b0794:
    // 0x2b0794: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b0794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b0798:
    // 0x2b0798: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b0798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2b079c:
    // 0x2b079c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b079cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b07a0:
    // 0x2b07a0: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_2b07a4:
    if (ctx->pc == 0x2B07A4u) {
        ctx->pc = 0x2B07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07A0u;
        // 0x2b07a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B07A8u;
        goto label_2b07a8;
    }
    ctx->pc = 0x2B07A0u;
    {
        const bool branch_taken_0x2b07a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B07A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07A0u;
        // 0x2b07a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07a0) {
            ctx->pc = 0x2B07F4u;
            goto label_2b07f4;
        }
    }
    ctx->pc = 0x2B07A8u;
label_2b07a8:
    // 0x2b07a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b07a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b07ac:
    // 0x2b07ac: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2b07acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b07b0:
    // 0x2b07b0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2b07b4:
    if (ctx->pc == 0x2B07B4u) {
        ctx->pc = 0x2B07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07B0u;
        // 0x2b07b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B07B8u;
        goto label_2b07b8;
    }
    ctx->pc = 0x2B07B0u;
    {
        const bool branch_taken_0x2b07b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2B07B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07B0u;
        // 0x2b07b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07b0) {
            ctx->pc = 0x2B07F0u;
            goto label_2b07f0;
        }
    }
    ctx->pc = 0x2B07B8u;
label_2b07b8:
    // 0x2b07b8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b07b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b07bc:
    // 0x2b07bc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2b07bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2b07c0:
    // 0x2b07c0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2b07c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2b07c4:
    // 0x2b07c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b07c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b07c8:
    // 0x2b07c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b07c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b07cc:
    // 0x2b07cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b07ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b07d0:
    // 0x2b07d0: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x2b07d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2b07d4:
    // 0x2b07d4: 0x40f809  jalr        $v0
label_2b07d8:
    if (ctx->pc == 0x2B07D8u) {
        ctx->pc = 0x2B07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07D4u;
        // 0x2b07d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B07DCu;
        goto label_2b07dc;
    }
    ctx->pc = 0x2B07D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B07DCu);
        ctx->pc = 0x2B07D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07D4u;
        // 0x2b07d8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B07D4u, 0x2B07DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B07DCu;
label_2b07dc:
    // 0x2b07dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b07e0:
    // 0x2b07e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b07e4:
    // 0x2b07e4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2b07e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2b07e8:
    // 0x2b07e8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_2b07ec:
    if (ctx->pc == 0x2B07ECu) {
        ctx->pc = 0x2B07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07E8u;
        // 0x2b07ec: 0x50800b  movn        $s0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B07F0u;
        goto label_2b07f0;
    }
    ctx->pc = 0x2B07E8u;
    {
        const bool branch_taken_0x2b07e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B07ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B07E8u;
        // 0x2b07ec: 0x50800b  movn        $s0, $v0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b07e8) {
            ctx->pc = 0x2B07B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b07b8;
        }
    }
    ctx->pc = 0x2B07F0u;
label_2b07f0:
    // 0x2b07f0: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x2b07f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2b07f4:
    // 0x2b07f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2b07f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2b07f8:
    // 0x2b07f8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b07f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b07fc:
    // 0x2b07fc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b07fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0800:
    // 0x2b0800: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b0800u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0804:
    // 0x2b0804: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b0804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0808:
    // 0x2b0808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b0808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b080c:
    // 0x2b080c: 0x3e00008  jr          $ra
label_2b0810:
    if (ctx->pc == 0x2B0810u) {
        ctx->pc = 0x2B0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B080Cu;
        // 0x2b0810: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0814u;
        goto label_2b0814;
    }
    ctx->pc = 0x2B080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B080Cu;
        // 0x2b0810: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0814u;
label_2b0814:
    // 0x2b0814: 0x0  nop
    ctx->pc = 0x2b0814u;
    // NOP
}
