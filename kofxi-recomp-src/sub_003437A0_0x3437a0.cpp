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

// Function: sub_003437A0
// Address: 0x3437a0 - 0x343880
void sub_003437A0_0x3437a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003437A0_0x3437a0");
#endif

    switch (ctx->pc) {
        case 0x3437e4u: goto label_3437e4;
        case 0x34384cu: goto label_34384c;
        case 0x343864u: goto label_343864;
        default: break;
    }

    ctx->pc = 0x3437a0u;

    // 0x3437a0: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x3437a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
    // 0x3437a4: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x3437a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x3437a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3437a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3437ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3437acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3437b0: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x3437b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x3437b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3437B4u;
    {
        const bool branch_taken_0x3437b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3437b4) {
            ctx->pc = 0x3437C8u;
            goto label_3437c8;
        }
    }
    ctx->pc = 0x3437BCu;
    // 0x3437bc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3437bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3437c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3437C0u;
    {
        const bool branch_taken_0x3437c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3437C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437C0u;
        // 0x3437c4: 0x904294f0  lbu         $v0, -0x6B10($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437c0) {
            ctx->pc = 0x3437D0u;
            goto label_3437d0;
        }
    }
    ctx->pc = 0x3437C8u;
label_3437c8:
    // 0x3437c8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3437c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x3437cc: 0x904294f8  lbu         $v0, -0x6B08($v0)
    ctx->pc = 0x3437ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939896)));
label_3437d0:
    // 0x3437d0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x3437d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3437d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3437d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3437d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3437d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x3437DCu;
    SET_GPR_U32(ctx, 31, 0x3437E4u);
    ctx->pc = 0x3437E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437DCu;
    // 0x3437e0: 0x2406037c  addiu       $a2, $zero, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x3437DCu, 0x3437E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437E4u;
label_3437e4:
    // 0x3437e4: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x3437e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x3437e8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3437ec: 0x9064beaa  lbu         $a0, -0x4156($v1)
    ctx->pc = 0x3437ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950570)));
    // 0x3437f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3437f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437f4: 0x9046bea9  lbu         $a2, -0x4157($v0)
    ctx->pc = 0x3437f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950569)));
    // 0x3437f8: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x3437f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x3437fc: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3437fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x343800: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x343800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x343804: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x343804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x343808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34380c: 0x9063bea8  lbu         $v1, -0x4158($v1)
    ctx->pc = 0x34380cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950568)));
    // 0x343810: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x343810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x343814: 0x43a00  sll         $a3, $a0, 8
    ctx->pc = 0x343814u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x343818: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x343818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34381c: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x34381cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x343820: 0xa0434308  sb          $v1, 0x4308($v0)
    ctx->pc = 0x343820u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17160), (uint8_t)GPR_U32(ctx, 3));
    // 0x343824: 0x3c05009f  lui         $a1, 0x9F
    ctx->pc = 0x343824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)159 << 16));
    // 0x343828: 0x71200  sll         $v0, $a3, 8
    ctx->pc = 0x343828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x34382c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x343830: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x343830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x343834: 0x24a59550  addiu       $a1, $a1, -0x6AB0
    ctx->pc = 0x343834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939984));
    // 0x343838: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x343838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x34383c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x34383cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x343840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x343840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x343844: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x343844u;
    SET_GPR_U32(ctx, 31, 0x34384Cu);
    ctx->pc = 0x343848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343844u;
    // 0x343848: 0xafa200fc  sw          $v0, 0xFC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x343844u, 0x34384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34384Cu;
label_34384c:
    // 0x34384c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x343850: 0x24051110  addiu       $a1, $zero, 0x1110
    ctx->pc = 0x343850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
    // 0x343854: 0x8c44eab8  lw          $a0, -0x1548($v0)
    ctx->pc = 0x343854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961848)));
    // 0x343858: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x343858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x34385c: 0xc083f96  jal         func_20FE58
    ctx->pc = 0x34385Cu;
    SET_GPR_U32(ctx, 31, 0x343864u);
    ctx->pc = 0x343860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34385Cu;
    // 0x343860: 0x2407037c  addiu       $a3, $zero, 0x37C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FE58u, 0x34385Cu, 0x343864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343864u;
label_343864:
    // 0x343864: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x343864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x343868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34386c: 0x3e00008  jr          $ra
    ctx->pc = 0x34386Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34386Cu;
        // 0x343870: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34386Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343874u;
    // 0x343874: 0x0  nop
    ctx->pc = 0x343874u;
    // NOP
    // 0x343878: 0x0  nop
    ctx->pc = 0x343878u;
    // NOP
    // 0x34387c: 0x0  nop
    ctx->pc = 0x34387cu;
    // NOP
}
