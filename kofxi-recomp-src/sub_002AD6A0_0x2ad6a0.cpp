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

// Function: sub_002AD6A0
// Address: 0x2ad6a0 - 0x2ad790
void sub_002AD6A0_0x2ad6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD6A0_0x2ad6a0");
#endif

    switch (ctx->pc) {
        case 0x2ad728u: goto label_2ad728;
        case 0x2ad738u: goto label_2ad738;
        default: break;
    }

    ctx->pc = 0x2ad6a0u;

    // 0x2ad6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ad6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2ad6a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ad6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ad6a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ad6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ad6ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ad6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ad6b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ad6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ad6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ad6b8: 0x24114805  addiu       $s1, $zero, 0x4805
    ctx->pc = 0x2ad6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18437));
    // 0x2ad6bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ad6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2ad6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad6c4: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x2ad6c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2ad6c8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x2ad6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x2ad6cc: 0xa3880b  movn        $s1, $a1, $v1
    ctx->pc = 0x2ad6ccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x2ad6d0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2ad6d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2ad6d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD6D4u;
    {
        const bool branch_taken_0x2ad6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6D4u;
        // 0x2ad6d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6d4) {
            ctx->pc = 0x2AD6F4u;
            goto label_2ad6f4;
        }
    }
    ctx->pc = 0x2AD6DCu;
    // 0x2ad6dc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ad6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad6e0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2ad6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2ad6e4: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2AD6E4u;
    {
        const bool branch_taken_0x2ad6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6E4u;
        // 0x2ad6e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6e4) {
            ctx->pc = 0x2AD770u;
            goto label_2ad770;
        }
    }
    ctx->pc = 0x2AD6ECu;
    // 0x2ad6ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD6ECu;
    {
        const bool branch_taken_0x2ad6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6ECu;
        // 0x2ad6f0: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6ec) {
            ctx->pc = 0x2AD6FCu;
            goto label_2ad6fc;
        }
    }
    ctx->pc = 0x2AD6F4u;
label_2ad6f4:
    // 0x2ad6f4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ad6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad6f8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2ad6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2ad6fc:
    // 0x2ad6fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD6FCu;
    {
        const bool branch_taken_0x2ad6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD6FCu;
        // 0x2ad700: 0x8c640094  lw          $a0, 0x94($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad6fc) {
            ctx->pc = 0x2AD714u;
            goto label_2ad714;
        }
    }
    ctx->pc = 0x2AD704u;
    // 0x2ad704: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AD704u;
    {
        const bool branch_taken_0x2ad704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad704) {
            ctx->pc = 0x2AD730u;
            goto label_2ad730;
        }
    }
    ctx->pc = 0x2AD70Cu;
    // 0x2ad70c: 0x449023  subu        $s2, $v0, $a0
    ctx->pc = 0x2ad70cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ad710: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ad710u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad714:
    // 0x2ad714: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD714u;
    {
        const bool branch_taken_0x2ad714 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad714) {
            ctx->pc = 0x2AD730u;
            goto label_2ad730;
        }
    }
    ctx->pc = 0x2AD71Cu;
    // 0x2ad71c: 0x8c660098  lw          $a2, 0x98($v1)
    ctx->pc = 0x2ad71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x2ad720: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x2AD720u;
    SET_GPR_U32(ctx, 31, 0x2AD728u);
    ctx->pc = 0x2AD724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD720u;
    // 0x2ad724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3000u, 0x2AD720u, 0x2AD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD728u;
label_2ad728:
    // 0x2ad728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AD728u;
    {
        const bool branch_taken_0x2ad728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD728u;
        // 0x2ad72c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad728) {
            ctx->pc = 0x2AD73Cu;
            goto label_2ad73c;
        }
    }
    ctx->pc = 0x2AD730u;
label_2ad730:
    // 0x2ad730: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2AD730u;
    SET_GPR_U32(ctx, 31, 0x2AD738u);
    ctx->pc = 0x2AD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD730u;
    // 0x2ad734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2AD730u, 0x2AD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD738u;
label_2ad738:
    // 0x2ad738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ad738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ad73c:
    // 0x2ad73c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AD73Cu;
    {
        const bool branch_taken_0x2ad73c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD73Cu;
        // 0x2ad740: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad73c) {
            ctx->pc = 0x2AD770u;
            goto label_2ad770;
        }
    }
    ctx->pc = 0x2AD744u;
    // 0x2ad744: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ad744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad748: 0xac440094  sw          $a0, 0x94($v0)
    ctx->pc = 0x2ad748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
    // 0x2ad74c: 0xae110114  sw          $s1, 0x114($s0)
    ctx->pc = 0x2ad74cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 17));
    // 0x2ad750: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ad750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad754: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AD754u;
    {
        const bool branch_taken_0x2ad754 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD754u;
        // 0x2ad758: 0xac510098  sw          $s1, 0x98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad754) {
            ctx->pc = 0x2AD76Cu;
            goto label_2ad76c;
        }
    }
    ctx->pc = 0x2AD75Cu;
    // 0x2ad75c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ad75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ad760: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2ad760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2ad764: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2ad764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2ad768: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ad768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_2ad76c:
    // 0x2ad76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad770:
    // 0x2ad770: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ad770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad774: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ad774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad778: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ad778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad77c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ad77cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ad780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad784: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD784u;
        // 0x2ad788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD78Cu;
    // 0x2ad78c: 0x0  nop
    ctx->pc = 0x2ad78cu;
    // NOP
    if (ctx->pc == 0x2ad78cu) { ctx->pc = 0x2ad790u; }
}
