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

// Function: sub_001E87B8
// Address: 0x1e87b8 - 0x1e8898
void sub_001E87B8_0x1e87b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E87B8_0x1e87b8");
#endif

    switch (ctx->pc) {
        case 0x1e8828u: goto label_1e8828;
        case 0x1e8838u: goto label_1e8838;
        case 0x1e8858u: goto label_1e8858;
        default: break;
    }

    ctx->pc = 0x1e87b8u;

    // 0x1e87b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e87b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e87bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e87bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e87c0: 0x8c82205c  lw          $v0, 0x205C($a0)
    ctx->pc = 0x1e87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8284)));
    // 0x1e87c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e87c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e87c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e87c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e87cc: 0x806ee5c  j           func_1BB970
    ctx->pc = 0x1E87CCu;
    ctx->pc = 0x1E87D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E87CCu;
    // 0x1e87d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB970u, 0x1E87CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E87D4u;
    // 0x1e87d4: 0x0  nop
    ctx->pc = 0x1e87d4u;
    // NOP
    // 0x1e87d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e87dc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e87dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e87e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e87e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e87e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e87e8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1e87e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87ec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e87ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e87f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e87f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87f4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e87f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e87f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e87f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e87fc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e87fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e8800: 0x2a020120  slti        $v0, $s0, 0x120
    ctx->pc = 0x1e8800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x1e8804: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1e8804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1e8808: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1e8808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e880c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1e880cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1e8810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e8810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e8814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8818: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E8818u;
    {
        const bool branch_taken_0x1e8818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E881Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8818u;
        // 0x1e881c: 0x8e54205c  lw          $s4, 0x205C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8818) {
            ctx->pc = 0x1E8878u;
            goto label_1e8878;
        }
    }
    ctx->pc = 0x1E8820u;
    // 0x1e8820: 0xc06ee26  jal         func_1BB898
    ctx->pc = 0x1E8820u;
    SET_GPR_U32(ctx, 31, 0x1E8828u);
    ctx->pc = 0x1BB898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB898u, 0x1E8820u, 0x1E8828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8828u;
label_1e8828:
    // 0x1e8828: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E8828u;
    {
        const bool branch_taken_0x1e8828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8828u;
        // 0x1e882c: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8828) {
            ctx->pc = 0x1E885Cu;
            goto label_1e885c;
        }
    }
    ctx->pc = 0x1E8830u;
    // 0x1e8830: 0xc07b51c  jal         func_1ED470
    ctx->pc = 0x1E8830u;
    SET_GPR_U32(ctx, 31, 0x1E8838u);
    ctx->pc = 0x1E8834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8830u;
    // 0x1e8834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED470u, 0x1E8830u, 0x1E8838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8838u;
label_1e8838:
    // 0x1e8838: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e8838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e883c: 0x2842006c  slti        $v0, $v0, 0x6C
    ctx->pc = 0x1e883cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)108) ? 1 : 0);
    // 0x1e8840: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e8844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8848: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E8848u;
    {
        const bool branch_taken_0x1e8848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8848u;
        // 0x1e884c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8848) {
            ctx->pc = 0x1E885Cu;
            goto label_1e885c;
        }
    }
    ctx->pc = 0x1E8850u;
    // 0x1e8850: 0xc07a226  jal         func_1E8898
    ctx->pc = 0x1E8850u;
    SET_GPR_U32(ctx, 31, 0x1E8858u);
    ctx->pc = 0x1E8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8898u, 0x1E8850u, 0x1E8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8858u;
label_1e8858:
    // 0x1e8858: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x1e8858u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e885c:
    // 0x1e885c: 0xde4309c8  ld          $v1, 0x9C8($s2)
    ctx->pc = 0x1e885cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 2504)));
    // 0x1e8860: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1e8864: 0x244284c8  addiu       $v0, $v0, -0x7B38
    ctx->pc = 0x1e8864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935752));
    // 0x1e8868: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x1e8868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x1e886c: 0xe3182d  daddu       $v1, $a3, $v1
    ctx->pc = 0x1e886cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1e8870: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x1e8870u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x1e8874: 0xfe4309c8  sd          $v1, 0x9C8($s2)
    ctx->pc = 0x1e8874u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 2504), GPR_U64(ctx, 3));
label_1e8878:
    // 0x1e8878: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e8878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e887c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e887cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e8880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8884: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e8884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8888: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e8888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e888c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1e888cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e8890: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8890u;
        // 0x1e8894: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8898u;
}
