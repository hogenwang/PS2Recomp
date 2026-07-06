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

// Function: sub_001C47B8
// Address: 0x1c47b8 - 0x1c4c50
void sub_001C47B8_0x1c47b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C47B8_0x1c47b8");
#endif

    switch (ctx->pc) {
        case 0x1c4828u: goto label_1c4828;
        case 0x1c4848u: goto label_1c4848;
        case 0x1c4858u: goto label_1c4858;
        case 0x1c4878u: goto label_1c4878;
        case 0x1c4888u: goto label_1c4888;
        case 0x1c4890u: goto label_1c4890;
        case 0x1c48a8u: goto label_1c48a8;
        case 0x1c48b8u: goto label_1c48b8;
        case 0x1c48c4u: goto label_1c48c4;
        case 0x1c48e0u: goto label_1c48e0;
        case 0x1c48e8u: goto label_1c48e8;
        case 0x1c4980u: goto label_1c4980;
        case 0x1c4994u: goto label_1c4994;
        case 0x1c499cu: goto label_1c499c;
        case 0x1c49a8u: goto label_1c49a8;
        case 0x1c49bcu: goto label_1c49bc;
        case 0x1c4a0cu: goto label_1c4a0c;
        case 0x1c4aa4u: goto label_1c4aa4;
        case 0x1c4b24u: goto label_1c4b24;
        case 0x1c4b38u: goto label_1c4b38;
        case 0x1c4b70u: goto label_1c4b70;
        case 0x1c4bb4u: goto label_1c4bb4;
        case 0x1c4bccu: goto label_1c4bcc;
        case 0x1c4becu: goto label_1c4bec;
        case 0x1c4bf4u: goto label_1c4bf4;
        case 0x1c4c0cu: goto label_1c4c0c;
        default: break;
    }

    ctx->pc = 0x1c47b8u;

label_1c47b8:
    // 0x1c47b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c47b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c47bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c47bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c47c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c47c4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1c47c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c47c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c47c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c47cc: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x1C47CCu;
    ctx->pc = 0x1C47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C47CCu;
    // 0x1c47d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C47D4u;
    // 0x1c47d4: 0x0  nop
    ctx->pc = 0x1c47d4u;
    // NOP
    // 0x1c47d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c47d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c47dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c47dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c47e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c47e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c47e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c47e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c47e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c47e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c47ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c47ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c47f0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C47F0u;
    {
        const bool branch_taken_0x1c47f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C47F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47F0u;
        // 0x1c47f4: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47f0) {
            ctx->pc = 0x1C4808u;
            goto label_1c4808;
        }
    }
    ctx->pc = 0x1C47F8u;
    // 0x1c47f8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c47f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c47fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C47FCu;
    {
        const bool branch_taken_0x1c47fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C47FCu;
        // 0x1c4800: 0x24a5a298  addiu       $a1, $a1, -0x5D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c47fc) {
            ctx->pc = 0x1C4840u;
            goto label_1c4840;
        }
    }
    ctx->pc = 0x1C4804u;
    // 0x1c4804: 0x0  nop
    ctx->pc = 0x1c4804u;
    // NOP
label_1c4808:
    // 0x1c4808: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4808u;
    {
        const bool branch_taken_0x1c4808 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4808u;
        // 0x1c480c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4808) {
            ctx->pc = 0x1C4820u;
            goto label_1c4820;
        }
    }
    ctx->pc = 0x1C4810u;
    // 0x1c4810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4814: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4814u;
    {
        const bool branch_taken_0x1c4814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4814u;
        // 0x1c4818: 0x24a5a2c0  addiu       $a1, $a1, -0x5D40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4814) {
            ctx->pc = 0x1C4840u;
            goto label_1c4840;
        }
    }
    ctx->pc = 0x1C481Cu;
    // 0x1c481c: 0x0  nop
    ctx->pc = 0x1c481cu;
    // NOP
label_1c4820:
    // 0x1c4820: 0xc0711e0  jal         func_1C4780
    ctx->pc = 0x1C4820u;
    SET_GPR_U32(ctx, 31, 0x1C4828u);
    ctx->pc = 0x1C4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4780u, 0x1C4820u, 0x1C4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4828u;
label_1c4828:
    // 0x1c4828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c482c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C482Cu;
    {
        const bool branch_taken_0x1c482c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C482Cu;
        // 0x1c4830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c482c) {
            ctx->pc = 0x1C4850u;
            goto label_1c4850;
        }
    }
    ctx->pc = 0x1C4834u;
    // 0x1c4834: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c4838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c483c: 0x24a5a2e8  addiu       $a1, $a1, -0x5D18
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943464));
label_1c4840:
    // 0x1c4840: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C4840u;
    SET_GPR_U32(ctx, 31, 0x1C4848u);
    ctx->pc = 0x1C41D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D8u, 0x1C4840u, 0x1C4848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4848u;
label_1c4848:
    // 0x1c4848: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C4848u;
    {
        const bool branch_taken_0x1c4848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4848u;
        // 0x1c484c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4848) {
            ctx->pc = 0x1C4938u;
            goto label_1c4938;
        }
    }
    ctx->pc = 0x1C4850u;
label_1c4850:
    // 0x1c4850: 0xc071664  jal         func_1C5990
    ctx->pc = 0x1C4850u;
    SET_GPR_U32(ctx, 31, 0x1C4858u);
    ctx->pc = 0x1C4854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4850u;
    // 0x1c4854: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5990u, 0x1C4850u, 0x1C4858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4858u;
label_1c4858:
    // 0x1c4858: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c4858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c485c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C485Cu;
    {
        const bool branch_taken_0x1c485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C485Cu;
        // 0x1c4860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c485c) {
            ctx->pc = 0x1C48F0u;
            goto label_1c48f0;
        }
    }
    ctx->pc = 0x1C4864u;
    // 0x1c4864: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c486c: 0x2452ee20  addiu       $s2, $v0, -0x11E0
    ctx->pc = 0x1c486cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962720));
    // 0x1c4870: 0xc071426  jal         func_1C5098
    ctx->pc = 0x1C4870u;
    SET_GPR_U32(ctx, 31, 0x1C4878u);
    ctx->pc = 0x1C4874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4870u;
    // 0x1c4874: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5098u, 0x1C4870u, 0x1C4878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4878u;
label_1c4878:
    // 0x1c4878: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c4878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c487c: 0x2484a318  addiu       $a0, $a0, -0x5CE8
    ctx->pc = 0x1c487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943512));
    // 0x1c4880: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C4880u;
    SET_GPR_U32(ctx, 31, 0x1C4888u);
    ctx->pc = 0x1C4884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4880u;
    // 0x1c4884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C4880u, 0x1C4888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4888u;
label_1c4888:
    // 0x1c4888: 0xc071150  jal         func_1C4540
    ctx->pc = 0x1C4888u;
    SET_GPR_U32(ctx, 31, 0x1C4890u);
    ctx->pc = 0x1C488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4888u;
    // 0x1c488c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4540u, 0x1C4888u, 0x1C4890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4890u;
label_1c4890:
    // 0x1c4890: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4890u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4898: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C4898u;
    {
        const bool branch_taken_0x1c4898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4898u;
        // 0x1c489c: 0xfe030008  sd          $v1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4898) {
            ctx->pc = 0x1C4938u;
            goto label_1c4938;
        }
    }
    ctx->pc = 0x1C48A0u;
    // 0x1c48a0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C48A0u;
    SET_GPR_U32(ctx, 31, 0x1C48A8u);
    ctx->pc = 0x1C48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48A0u;
    // 0x1c48a4: 0x24044900  addiu       $a0, $zero, 0x4900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C48A0u, 0x1C48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48A8u;
label_1c48a8:
    // 0x1c48a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c48ac: 0x8c45ef60  lw          $a1, -0x10A0($v0)
    ctx->pc = 0x1c48acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963040)));
    // 0x1c48b0: 0xc070590  jal         func_1C1640
    ctx->pc = 0x1C48B0u;
    SET_GPR_U32(ctx, 31, 0x1C48B8u);
    ctx->pc = 0x1C48B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48B0u;
    // 0x1c48b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1640u, 0x1C48B0u, 0x1C48B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48B8u;
label_1c48b8:
    // 0x1c48b8: 0x24044901  addiu       $a0, $zero, 0x4901
    ctx->pc = 0x1c48b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18689));
    // 0x1c48bc: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C48BCu;
    SET_GPR_U32(ctx, 31, 0x1C48C4u);
    ctx->pc = 0x1C48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48BCu;
    // 0x1c48c0: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C48BCu, 0x1C48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48C4u;
label_1c48c4:
    // 0x1c48c4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1c48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c48c8: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C48C8u;
    {
        const bool branch_taken_0x1c48c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1c48c8) {
            ctx->pc = 0x1C48CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C48C8u;
            // 0x1c48cc: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4904u;
            goto label_1c4904;
        }
    }
    ctx->pc = 0x1C48D0u;
    // 0x1c48d0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c48d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c48d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c48d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c48d8: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C48D8u;
    SET_GPR_U32(ctx, 31, 0x1C48E0u);
    ctx->pc = 0x1C48DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48D8u;
    // 0x1c48dc: 0x24a5a340  addiu       $a1, $a1, -0x5CC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D8u, 0x1C48D8u, 0x1C48E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C48E0u;
label_1c48e0:
    // 0x1c48e0: 0xc0711ee  jal         func_1C47B8
    ctx->pc = 0x1C48E0u;
    SET_GPR_U32(ctx, 31, 0x1C48E8u);
    ctx->pc = 0x1C48E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C48E0u;
    // 0x1c48e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C47B8u;
    goto label_1c47b8;
    ctx->pc = 0x1C48E8u;
label_1c48e8:
    // 0x1c48e8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C48E8u;
    {
        const bool branch_taken_0x1c48e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C48E8u;
        // 0x1c48ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c48e8) {
            ctx->pc = 0x1C4938u;
            goto label_1c4938;
        }
    }
    ctx->pc = 0x1C48F0u;
label_1c48f0:
    // 0x1c48f0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1c48f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c48f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1c48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c48f8: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1c48f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1c48fc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1c4900: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1c4900u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_1c4904:
    // 0x1c4904: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1c4904u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c490c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c4910: 0x646307ff  daddiu      $v1, $v1, 0x7FF
    ctx->pc = 0x1c4910u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2047);
    // 0x1c4914: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1c4914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1c4918: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x1c4918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x1c491c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1c491cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1c4920: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c4920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c4924: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1c4924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1c4928: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c4928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c492c: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x1c492cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c4930: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1c4930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c4934: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c4934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c4938:
    // 0x1c4938: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c4938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c493c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c493cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c4940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4944: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c4944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4948: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4948u;
        // 0x1c494c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4950u;
    // 0x1c4950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4954: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4958: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c495c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4960: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C4960u;
    {
        const bool branch_taken_0x1c4960 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4960u;
        // 0x1c4964: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4960) {
            ctx->pc = 0x1C49D8u;
            goto label_1c49d8;
        }
    }
    ctx->pc = 0x1C4968u;
    // 0x1c4968: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1c4968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1c496c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1c496cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c4970: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4970u;
    {
        const bool branch_taken_0x1c4970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4970) {
            ctx->pc = 0x1C4974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4970u;
            // 0x1c4974: 0x82220001  lb          $v0, 0x1($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4984u;
            goto label_1c4984;
        }
    }
    ctx->pc = 0x1C4978u;
    // 0x1c4978: 0xc071314  jal         func_1C4C50
    ctx->pc = 0x1C4978u;
    SET_GPR_U32(ctx, 31, 0x1C4980u);
    ctx->pc = 0x1C4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4C50u, 0x1C4978u, 0x1C4980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4980u;
label_1c4980:
    // 0x1c4980: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x1c4980u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_1c4984:
    // 0x1c4984: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1C4984u;
    {
        const bool branch_taken_0x1c4984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4984) {
            ctx->pc = 0x1C4988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4984u;
            // 0x1c4988: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C49C0u;
            goto label_1c49c0;
        }
    }
    ctx->pc = 0x1C498Cu;
    // 0x1c498c: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C498Cu;
    SET_GPR_U32(ctx, 31, 0x1C4994u);
    ctx->pc = 0x1C4990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C498Cu;
    // 0x1c4990: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C498Cu, 0x1C4994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4994u;
label_1c4994:
    // 0x1c4994: 0xc0705aa  jal         func_1C16A8
    ctx->pc = 0x1C4994u;
    SET_GPR_U32(ctx, 31, 0x1C499Cu);
    ctx->pc = 0x1C4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4994u;
    // 0x1c4998: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C16A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C16A8u, 0x1C4994u, 0x1C499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C499Cu;
label_1c499c:
    // 0x1c499c: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x1c499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x1c49a0: 0xc0704cc  jal         func_1C1330
    ctx->pc = 0x1C49A0u;
    SET_GPR_U32(ctx, 31, 0x1C49A8u);
    ctx->pc = 0x1C49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49A0u;
    // 0x1c49a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1330u, 0x1C49A0u, 0x1C49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49A8u;
label_1c49a8:
    // 0x1c49a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1c49ac: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C49ACu;
    {
        const bool branch_taken_0x1c49ac = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1C49B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49ACu;
        // 0x1c49b0: 0x2484a368  addiu       $a0, $a0, -0x5C98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49ac) {
            ctx->pc = 0x1C49BCu;
            goto label_1c49bc;
        }
    }
    ctx->pc = 0x1C49B4u;
    // 0x1c49b4: 0xc06d1f4  jal         func_1B47D0
    ctx->pc = 0x1C49B4u;
    SET_GPR_U32(ctx, 31, 0x1C49BCu);
    ctx->pc = 0x1B47D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B47D0u, 0x1C49B4u, 0x1C49BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C49BCu;
label_1c49bc:
    // 0x1c49bc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1c49bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c49c0:
    // 0x1c49c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c49c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c49c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c49c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c49cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c49ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c49d0: 0x80711ee  j           func_1C47B8
    ctx->pc = 0x1C49D0u;
    ctx->pc = 0x1C49D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C49D0u;
    // 0x1c49d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C47B8u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1c47b8;
    ctx->pc = 0x1C49D8u;
label_1c49d8:
    // 0x1c49d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c49d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c49dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c49e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c49e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c49e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C49E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49E4u;
        // 0x1c49e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C49E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C49ECu;
    // 0x1c49ec: 0x0  nop
    ctx->pc = 0x1c49ecu;
    // NOP
    // 0x1c49f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c49f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c49f4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c49f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c49f8: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C49F8u;
    {
        const bool branch_taken_0x1c49f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C49F8u;
        // 0x1c49fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c49f8) {
            ctx->pc = 0x1C4A18u;
            goto label_1c4a18;
        }
    }
    ctx->pc = 0x1C4A00u;
    // 0x1c4a00: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4a04: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C4A04u;
    SET_GPR_U32(ctx, 31, 0x1C4A0Cu);
    ctx->pc = 0x1C4A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A04u;
    // 0x1c4a08: 0x24a5a380  addiu       $a1, $a1, -0x5C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D8u, 0x1C4A04u, 0x1C4A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A0Cu;
label_1c4a0c:
    // 0x1c4a0c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C4A0Cu;
    {
        const bool branch_taken_0x1c4a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A0Cu;
        // 0x1c4a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a0c) {
            ctx->pc = 0x1C4A78u;
            goto label_1c4a78;
        }
    }
    ctx->pc = 0x1C4A14u;
    // 0x1c4a14: 0x0  nop
    ctx->pc = 0x1c4a14u;
    // NOP
label_1c4a18:
    // 0x1c4a18: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4A18u;
    {
        const bool branch_taken_0x1c4a18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A18u;
        // 0x1c4a1c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a18) {
            ctx->pc = 0x1C4A28u;
            goto label_1c4a28;
        }
    }
    ctx->pc = 0x1C4A20u;
    // 0x1c4a20: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C4A20u;
    {
        const bool branch_taken_0x1c4a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A20u;
        // 0x1c4a24: 0xace5001c  sw          $a1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a20) {
            ctx->pc = 0x1C4A58u;
            goto label_1c4a58;
        }
    }
    ctx->pc = 0x1C4A28u;
label_1c4a28:
    // 0x1c4a28: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4A28u;
    {
        const bool branch_taken_0x1c4a28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A28u;
        // 0x1c4a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a28) {
            ctx->pc = 0x1C4A40u;
            goto label_1c4a40;
        }
    }
    ctx->pc = 0x1C4A30u;
    // 0x1c4a30: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x1c4a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c4a34: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c4a38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4A38u;
    {
        const bool branch_taken_0x1c4a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A38u;
        // 0x1c4a3c: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a38) {
            ctx->pc = 0x1C4A5Cu;
            goto label_1c4a5c;
        }
    }
    ctx->pc = 0x1C4A40u;
label_1c4a40:
    // 0x1c4a40: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4A40u;
    {
        const bool branch_taken_0x1c4a40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C4A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A40u;
        // 0x1c4a44: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a40) {
            ctx->pc = 0x1C4A5Cu;
            goto label_1c4a5c;
        }
    }
    ctx->pc = 0x1C4A48u;
    // 0x1c4a48: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x1c4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1c4a4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1c4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1c4a50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4A50u;
    {
        const bool branch_taken_0x1c4a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A50u;
        // 0x1c4a54: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a50) {
            ctx->pc = 0x1C4A5Cu;
            goto label_1c4a5c;
        }
    }
    ctx->pc = 0x1C4A58u;
label_1c4a58:
    // 0x1c4a58: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x1c4a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_1c4a5c:
    // 0x1c4a5c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x1c4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1c4a60: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x1c4a60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x1c4a64: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x1c4a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1c4a68: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1c4a68u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1c4a6c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x1c4a6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c4a70: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x1c4a70u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1c4a74: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1c4a74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1c4a78:
    // 0x1c4a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A7Cu;
        // 0x1c4a80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4A84u;
    // 0x1c4a84: 0x0  nop
    ctx->pc = 0x1c4a84u;
    // NOP
    // 0x1c4a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4a8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c4a8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4a90: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4A90u;
    {
        const bool branch_taken_0x1c4a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A90u;
        // 0x1c4a94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a90) {
            ctx->pc = 0x1C4AB0u;
            goto label_1c4ab0;
        }
    }
    ctx->pc = 0x1C4A98u;
    // 0x1c4a98: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4a9c: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C4A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C4AA4u);
    ctx->pc = 0x1C4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4A9Cu;
    // 0x1c4aa0: 0x24a5a380  addiu       $a1, $a1, -0x5C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C41D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D8u, 0x1C4A9Cu, 0x1C4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4AA4u;
label_1c4aa4:
    // 0x1c4aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4AA4u;
    {
        const bool branch_taken_0x1c4aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AA4u;
        // 0x1c4aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4aa4) {
            ctx->pc = 0x1C4AB4u;
            goto label_1c4ab4;
        }
    }
    ctx->pc = 0x1C4AACu;
    // 0x1c4aac: 0x0  nop
    ctx->pc = 0x1c4aacu;
    // NOP
label_1c4ab0:
    // 0x1c4ab0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1c4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1c4ab4:
    // 0x1c4ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AB8u;
        // 0x1c4abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4AC0u;
    // 0x1c4ac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4ac4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4ac8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c4ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4acc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c4accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c4ad0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c4ad0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ad4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c4ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c4ad8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c4ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4ae0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c4ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c4ae4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1c4ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1c4ae8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4AE8u;
    {
        const bool branch_taken_0x1c4ae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AE8u;
        // 0x1c4aec: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ae8) {
            ctx->pc = 0x1C4B00u;
            goto label_1c4b00;
        }
    }
    ctx->pc = 0x1C4AF0u;
    // 0x1c4af0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1c4af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1c4af4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C4AF4u;
    {
        const bool branch_taken_0x1c4af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AF4u;
        // 0x1c4af8: 0x24a5a380  addiu       $a1, $a1, -0x5C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4af4) {
            ctx->pc = 0x1C4B1Cu;
            goto label_1c4b1c;
        }
    }
    ctx->pc = 0x1C4AFCu;
    // 0x1c4afc: 0x0  nop
    ctx->pc = 0x1c4afcu;
    // NOP
label_1c4b00:
    // 0x1c4b00: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4B00u;
    {
        const bool branch_taken_0x1c4b00 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1C4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B00u;
        // 0x1c4b04: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b00) {
            ctx->pc = 0x1C4B10u;
            goto label_1c4b10;
        }
    }
    ctx->pc = 0x1C4B08u;
    // 0x1c4b08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4B08u;
    {
        const bool branch_taken_0x1c4b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B08u;
        // 0x1c4b0c: 0x24a5a398  addiu       $a1, $a1, -0x5C68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b08) {
            ctx->pc = 0x1C4B1Cu;
            goto label_1c4b1c;
        }
    }
    ctx->pc = 0x1C4B10u;
label_1c4b10:
    // 0x1c4b10: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4B10u;
    {
        const bool branch_taken_0x1c4b10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B10u;
        // 0x1c4b14: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b10) {
            ctx->pc = 0x1C4B30u;
            goto label_1c4b30;
        }
    }
    ctx->pc = 0x1C4B18u;
    // 0x1c4b18: 0x24a5a3b8  addiu       $a1, $a1, -0x5C48
    ctx->pc = 0x1c4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943672));
label_1c4b1c:
    // 0x1c4b1c: 0xc071076  jal         func_1C41D8
    ctx->pc = 0x1C4B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C4B24u);
    ctx->pc = 0x1C41D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C41D8u, 0x1C4B1Cu, 0x1C4B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B24u;
label_1c4b24:
    // 0x1c4b24: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1C4B24u;
    {
        const bool branch_taken_0x1c4b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B24u;
        // 0x1c4b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b24) {
            ctx->pc = 0x1C4C2Cu;
            goto label_1c4c2c;
        }
    }
    ctx->pc = 0x1C4B2Cu;
    // 0x1c4b2c: 0x0  nop
    ctx->pc = 0x1c4b2cu;
    // NOP
label_1c4b30:
    // 0x1c4b30: 0xc071082  jal         func_1C4208
    ctx->pc = 0x1C4B30u;
    SET_GPR_U32(ctx, 31, 0x1C4B38u);
    ctx->pc = 0x1C4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4B30u;
    // 0x1c4b34: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4208u, 0x1C4B30u, 0x1C4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B38u;
label_1c4b38:
    // 0x1c4b38: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4B38u;
    {
        const bool branch_taken_0x1c4b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1c4b38) {
            ctx->pc = 0x1C4B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4B38u;
            // 0x1c4b3c: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4B48u;
            goto label_1c4b48;
        }
    }
    ctx->pc = 0x1C4B40u;
    // 0x1c4b40: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1C4B40u;
    {
        const bool branch_taken_0x1c4b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B40u;
        // 0x1c4b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b40) {
            ctx->pc = 0x1C4C2Cu;
            goto label_1c4c2c;
        }
    }
    ctx->pc = 0x1C4B48u;
label_1c4b48:
    // 0x1c4b48: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1c4b48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4b4c: 0x10750037  beq         $v1, $s5, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C4B4Cu;
    {
        const bool branch_taken_0x1c4b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x1C4B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B4Cu;
        // 0x1c4b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b4c) {
            ctx->pc = 0x1C4C2Cu;
            goto label_1c4c2c;
        }
    }
    ctx->pc = 0x1C4B54u;
    // 0x1c4b54: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4B54u;
    {
        const bool branch_taken_0x1c4b54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4b54) {
            ctx->pc = 0x1C4B68u;
            goto label_1c4b68;
        }
    }
    ctx->pc = 0x1C4B5Cu;
    // 0x1c4b5c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C4B5Cu;
    {
        const bool branch_taken_0x1c4b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B5Cu;
        // 0x1c4b60: 0xa2340002  sb          $s4, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b5c) {
            ctx->pc = 0x1C4C2Cu;
            goto label_1c4c2c;
        }
    }
    ctx->pc = 0x1C4B64u;
    // 0x1c4b64: 0x0  nop
    ctx->pc = 0x1c4b64u;
    // NOP
label_1c4b68:
    // 0x1c4b68: 0xc0700cc  jal         func_1C0330
    ctx->pc = 0x1C4B68u;
    SET_GPR_U32(ctx, 31, 0x1C4B70u);
    ctx->pc = 0x1C0330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0330u, 0x1C4B68u, 0x1C4B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4B70u;
label_1c4b70:
    // 0x1c4b70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4b70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b74: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1C4B74u;
    {
        const bool branch_taken_0x1c4b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4B74u;
        // 0x1c4b78: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4b74) {
            ctx->pc = 0x1C4C2Cu;
            goto label_1c4c2c;
        }
    }
    ctx->pc = 0x1C4B7Cu;
    // 0x1c4b7c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1c4b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c4b80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c4b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4b84: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1c4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c4b88: 0x1282c0  sll         $s0, $s2, 11
    ctx->pc = 0x1c4b88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x1c4b8c: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x1c4b8cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c4b90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4b94: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x1c4b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
    // 0x1c4b98: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x1c4b98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c4b9c: 0xf0302b  sltu        $a2, $a3, $s0
    ctx->pc = 0x1c4b9cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1c4ba0: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x1c4ba0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1c4ba4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ba8: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x1c4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x1c4bac: 0xc0710b0  jal         func_1C42C0
    ctx->pc = 0x1C4BACu;
    SET_GPR_U32(ctx, 31, 0x1C4BB4u);
    ctx->pc = 0x1C4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BACu;
    // 0x1c4bb0: 0xe6800b  movn        $s0, $a3, $a2 (Delay Slot)
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42C0u, 0x1C4BACu, 0x1C4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BB4u;
label_1c4bb4:
    // 0x1c4bb4: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1c4bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c4bb8: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1c4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1c4bbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c4bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4bc0: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c4bc4: 0xc070152  jal         func_1C0548
    ctx->pc = 0x1C4BC4u;
    SET_GPR_U32(ctx, 31, 0x1C4BCCu);
    ctx->pc = 0x1C4BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4BC4u;
    // 0x1c4bc8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0548u, 0x1C4BC4u, 0x1C4BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BCCu;
label_1c4bcc:
    // 0x1c4bcc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C4BCCu;
    {
        const bool branch_taken_0x1c4bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4BCCu;
        // 0x1c4bd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4bcc) {
            ctx->pc = 0x1C4C30u;
            goto label_1c4c30;
        }
    }
    ctx->pc = 0x1C4BD4u;
    // 0x1c4bd4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c4bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c4bd8: 0x8c50ef60  lw          $s0, -0x10A0($v0)
    ctx->pc = 0x1c4bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963040)));
    // 0x1c4bdc: 0x56140010  bnel        $s0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C4BDCu;
    {
        const bool branch_taken_0x1c4bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x1c4bdc) {
            ctx->pc = 0x1C4BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4BDCu;
            // 0x1c4be0: 0xa2350002  sb          $s5, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C20u;
            goto label_1c4c20;
        }
    }
    ctx->pc = 0x1C4BE4u;
    // 0x1c4be4: 0xc0703ee  jal         func_1C0FB8
    ctx->pc = 0x1C4BE4u;
    SET_GPR_U32(ctx, 31, 0x1C4BECu);
    ctx->pc = 0x1C0FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0FB8u, 0x1C4BE4u, 0x1C4BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BECu;
label_1c4bec:
    // 0x1c4bec: 0xc0703a4  jal         func_1C0E90
    ctx->pc = 0x1C4BECu;
    SET_GPR_U32(ctx, 31, 0x1C4BF4u);
    ctx->pc = 0x1C0E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0E90u, 0x1C4BECu, 0x1C4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4BF4u;
label_1c4bf4:
    // 0x1c4bf4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1c4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c4bf8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1c4bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c4bfc: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x1c4bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c4c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c4c04: 0xc0700ee  jal         func_1C03B8
    ctx->pc = 0x1C4C04u;
    SET_GPR_U32(ctx, 31, 0x1C4C0Cu);
    ctx->pc = 0x1C4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C04u;
    // 0x1c4c08: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C03B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C03B8u, 0x1C4C04u, 0x1C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C0Cu;
label_1c4c0c:
    // 0x1c4c0c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1c4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1c4c10: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1c4c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c4c14: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x1c4c14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c4c18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4C18u;
    {
        const bool branch_taken_0x1c4c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C18u;
        // 0x1c4c1c: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c18) {
            ctx->pc = 0x1C4C28u;
            goto label_1c4c28;
        }
    }
    ctx->pc = 0x1C4C20u;
label_1c4c20:
    // 0x1c4c20: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1c4c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1c4c24: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1c4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1c4c28:
    // 0x1c4c28: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1c4c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1c4c2c:
    // 0x1c4c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c4c30:
    // 0x1c4c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4c34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c4c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4c38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c4c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4c3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c4c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4c40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1c4c40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4c44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4c48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C48u;
        // 0x1c4c4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4C50u;
}
