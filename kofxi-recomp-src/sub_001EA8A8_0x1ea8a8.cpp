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

// Function: sub_001EA8A8
// Address: 0x1ea8a8 - 0x1ea968
void sub_001EA8A8_0x1ea8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA8A8_0x1ea8a8");
#endif

    switch (ctx->pc) {
        case 0x1ea8c0u: goto label_1ea8c0;
        case 0x1ea930u: goto label_1ea930;
        default: break;
    }

    ctx->pc = 0x1ea8a8u;

    // 0x1ea8a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea8ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea8b8: 0x807aa30  j           func_1EA8C0
    ctx->pc = 0x1EA8B8u;
    ctx->pc = 0x1EA8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA8B8u;
    // 0x1ea8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8C0u;
    goto label_1ea8c0;
    ctx->pc = 0x1EA8C0u;
label_1ea8c0:
    // 0x1ea8c0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ea8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1ea8c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ea8c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ea8c8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1ea8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea8cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ea8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ea8d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea8d4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ea8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ea8dc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1ea8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea8e0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ea8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ea8e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea8e8: 0x24841368  addiu       $a0, $a0, 0x1368
    ctx->pc = 0x1ea8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4968));
    // 0x1ea8ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1ea8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1ea8f0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ea8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1ea8f4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ea8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ea8f8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ea8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ea8fc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1ea8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1ea900: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ea900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ea904: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1ea904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ea908: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ea908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ea90c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ea90cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ea910: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA910u;
    {
        const bool branch_taken_0x1ea910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA910u;
        // 0x1ea914: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea910) {
            ctx->pc = 0x1EA920u;
            goto label_1ea920;
        }
    }
    ctx->pc = 0x1EA918u;
    // 0x1ea918: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA918u;
    {
        const bool branch_taken_0x1ea918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA918u;
        // 0x1ea91c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea918) {
            ctx->pc = 0x1EA928u;
            goto label_1ea928;
        }
    }
    ctx->pc = 0x1EA920u;
label_1ea920:
    // 0x1ea920: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1EA920u;
    {
        const bool branch_taken_0x1ea920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA920u;
        // 0x1ea924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea920) {
            ctx->pc = 0x1EA954u;
            goto label_1ea954;
        }
    }
    ctx->pc = 0x1EA928u;
label_1ea928:
    // 0x1ea928: 0xc07aade  jal         func_1EAB78
    ctx->pc = 0x1EA928u;
    SET_GPR_U32(ctx, 31, 0x1EA930u);
    ctx->pc = 0x1EA92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA928u;
    // 0x1ea92c: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB78u, 0x1EA928u, 0x1EA930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA930u;
label_1ea930:
    // 0x1ea930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ea930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea934: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ea934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea938: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1ea938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ea93c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1ea93cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea940: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1ea940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ea944: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1ea944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1ea948: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ea948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1ea94c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1ea94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1ea950: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x1ea950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_1ea954:
    // 0x1ea954: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ea954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea958: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ea958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ea95c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA95Cu;
        // 0x1ea960: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA964u;
    // 0x1ea964: 0x0  nop
    ctx->pc = 0x1ea964u;
    // NOP
}
